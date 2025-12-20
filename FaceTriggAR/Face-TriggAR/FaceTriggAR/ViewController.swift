//
//  ViewController.swift
//

import UIKit
import RealityKit
import ARKit
import AVFoundation
import Combine

@available(iOS 18.0, *)
class ViewController: UIViewController, ARSessionDelegate {

    // MARK: - Properties
    @IBOutlet var arView: ARView!
    @IBOutlet weak var messageLabel: MessageLabel!
    @IBOutlet weak var restartButton: UIButton!

    let coachingOverlay = ARCoachingOverlayView()
    let configuration = ARWorldTrackingConfiguration()

    var targetEntity: ModelEntity?
    var isCrosshairVisible = false  // Tracks whether the crosshair is currently visible
    var audioPlayer: AVAudioPlayer? // For western audio track
    var zoomSoundEffect: AVAudioPlayer? // For zoom effect
    var cameraAnchor: AnchorEntity?
    var blurEffectView: UIVisualEffectView?
    var launchedBall: ModelEntity? // Reference to the launched ball

    // Cancellable array for collisions
    var subscriptions: Set<AnyCancellable> = []
    // For logging
    var targetPlaced = false
    
    
    var isWinking = false // Track if the user is currently winking
    var winkStartTime: TimeInterval? // Track the start time of the wink
    let winkDurationThreshold: TimeInterval = 1.0 // 1 second threshold

    // State management
    enum AppState {
        case ready
        case zoomedIn
//        case reloadNeeded
    }

    var appState: AppState = .ready
    var firingTimer: Timer? = nil
    var bulletsFired: Int = 0
    let maxBullets: Int = 100000

    enum Instruction: String {
        case freezeFacialExpression = "Tap to freeze facial expression"
        case noFaceDetected = "Face not recognized"
        case moveFurtherAway = "Move further away from placed head"
    }

    // MARK: - View controller lifecycle
    override func viewDidLoad() {
        super.viewDidLoad()

        guard ARWorldTrackingConfiguration.supportsUserFaceTracking else {
            fatalError("This sample code requires iOS 13 / iPad OS 13, and an iOS device with a front TrueDepth camera. Note: 2020 iPads do not support user face-tracking while world tracking.")
        }

        arView.session.delegate = self

        cameraAnchor = AnchorEntity(.camera)
        if let cameraAnchor = cameraAnchor {
            arView.scene.addAnchor(cameraAnchor)
        }

        // We want to run a custom configuration.
        arView.automaticallyConfigureSession = false

        // Setup coaching overlay if needed
         setupCoachingOverlay()

        arView.renderOptions.insert(.disableMotionBlur)

        // Enable environment texturing. e.g., mesh of environment
        configuration.environmentTexturing = .automatic

        // Enable tracking the user's face during the world tracking session.
        configuration.userFaceTrackingEnabled = true

        // Prevent the screen from being dimmed to avoid interrupting the AR experience.
        UIApplication.shared.isIdleTimerDisabled = true

        // Commenting out tap gesture to shoot
//        arView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(handleTap(recognizer:))))

        // Add this code in viewDidLoad(), after initializing the configuration
        if let referenceImages = ARReferenceImage.referenceImages(inGroupNamed: "AR Resources", bundle: nil) {
            configuration.detectionImages = referenceImages
            configuration.maximumNumberOfTrackedImages = 1
        } else {
            fatalError("Missing expected asset catalog resources.")
        }
    }

    /// - Tag: RunConfiguration
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        arView.session.run(configuration)
    }

    // MARK: - User interaction and messages
    @objc
    func handleTap(recognizer: UITapGestureRecognizer) {
        launchBall()
    }

    func launchBall() {
        // Get the current frame from the AR session
        guard let frame = arView.session.currentFrame else { return }

        // Get the camera's current transform (position & orientation)
        let cameraTransform = frame.camera.transform
        let cameraForward = simd_make_float3(cameraTransform.columns.2)
        let cameraPosition = simd_make_float3(cameraTransform.columns.3)
        let spherePosition = cameraPosition

        // Launch a blue ball into the AR space
        let ball = createBlueBall()
        placeObject(object: ball, at: spherePosition)

        // Apply an impulse to the ball for projectile motion
        let impulseVector = -cameraForward * 1.0 // Adjust the speed of the ball
        ball.applyImpulse(impulseVector, at: .zero, relativeTo: nil)
        launchedBall = ball
    }
    
    // Apply anti-gravity force in the AR session update
    func session(_ session: ARSession, didUpdate frame: ARFrame) {
        if let ball = launchedBall {
            let gravity: SIMD3<Float> = [0, -1.0, 0]
            let antiGravityForce = -gravity // Apply force
            ball.addForce(antiGravityForce, relativeTo: nil)
        }
    }

    func createBlueBall() -> ModelEntity {
        let sphere = MeshResource.generateSphere(radius: 0.02) // Smaller sphere for projectile
        let material = SimpleMaterial(color: .blue, isMetallic: true)
        let ball = ModelEntity(mesh: sphere, materials: [material])
        ball.name = "blueBall" // Assign a name for identification

        // Add physics and collision components
        let physicsMaterial = PhysicsMaterialResource.generate(friction: 0.0, restitution: 0.0) // Set restitution to 0.0 to eliminate bounce

        // Increase mass to slow down the ball's speed
        let massProperties = PhysicsMassProperties(mass: 0.1) // Adjust mass as needed

        ball.physicsBody = PhysicsBodyComponent(
            massProperties: massProperties,
            material: physicsMaterial,
            mode: .dynamic
        )

        ball.collision = CollisionComponent(
            shapes: [.generateSphere(radius: 0.02)],
            mode: .default,
            filter: .default
        )

        // Subscribe to collision events
        let collisionSubscription = arView.scene.subscribe(to: CollisionEvents.Began.self, on: ball) { [weak self] event in
            guard let self = self else { return }
            
            print("Collision Detected: \(event.entityA.name) with \(event.entityB.name)")
            
            if (event.entityA.name == "blueBall" && event.entityB.name == "targetEntity") ||
               (event.entityA.name == "targetEntity" && event.entityB.name == "blueBall") {
                let collisionPoint = ball.position(relativeTo: nil)
                self.handleCollision(at: collisionPoint, for: ball)
            }
        }


        // Store the subscription
        collisionSubscription.store(in: &subscriptions)

        return ball
    }


    func handleCollision(at position: SIMD3<Float>, for ball: ModelEntity) {

        // Create a 2D plane for the mark at the collision point
        let splatSize: Float = 0.05 // Adjust size for visibility
        let splatMesh = MeshResource.generatePlane(width: splatSize, height: splatSize)

        var splatMaterial = SimpleMaterial()

        // Create an array with the names of the mark textures
        let markTextures = ["mark0", "mark1", "mark2", "mark4", "mark5", "mark6"]

        // Randomly select one of the textures from the imageSet
        guard let randomMark = markTextures.randomElement(),
              let texture = try? TextureResource.load(named: randomMark) else { return }

        splatMaterial.baseColor = .texture(texture)
        splatMaterial.tintColor = UIColor.white.withAlphaComponent(0.9999)

        let splatEntity = ModelEntity(mesh: splatMesh, materials: [splatMaterial])
        splatEntity.name = "splatEntity"
        
        // Apply random rotation to the 'splatEntity'
        let randomRotationAngle = Float.random(in: 0..<360)
        splatEntity.transform.rotation = simd_quatf(angle: randomRotationAngle * .pi / 180, axis: [0, 0, 1]) // Rotate on z-axis for 2D plane

        if let targetEntity = self.targetEntity {
            var localPosition = targetEntity.convert(position: position, from: nil)

            // Target radius and height
            let targRadius = Float(0.3)
            let targHeight = Float(0.02)

            let targetBoxSize = SIMD3<Float>(targRadius * 2, targHeight, targRadius * 2)

            // Clamp the localPosition to the surface of the bounding box
            localPosition.x = max(min(localPosition.x, targetBoxSize.x / 2), -targetBoxSize.x / 2)
            localPosition.y = max(min(localPosition.y, targetBoxSize.y / 2), -targetBoxSize.y / 2)
            localPosition.z = max(min(localPosition.z, targetBoxSize.z / 2), -targetBoxSize.z / 2)

            splatEntity.position = localPosition

            // Rotate the splat to align with the surface
            let rotationAroundX = simd_quatf(angle: -.pi / 2, axis: SIMD3<Float>(1, 0, 0))
            let rotationAroundY = simd_quatf(angle: .pi, axis: SIMD3<Float>(0, 1, 0))
            let combinedRotation = rotationAroundY * rotationAroundX

            splatEntity.orientation = targetEntity.orientation * combinedRotation

            let offsetDistance: Float = 0.02
            let offset = SIMD3<Float>(0, offsetDistance, 0)
            splatEntity.position += offset

            targetEntity.addChild(splatEntity)
        } else {
            fatalError("Target entity is not available.")
        }

        if let parent = ball.parent {
            ball.removeFromParent()
            if let anchor = parent as? AnchorEntity {
                arView.scene.removeAnchor(anchor)
            }
        }

        playBreakingSound(at: position)
        triggerHapticFeedback()

        // Create shards at the collision point with the same texture as the mark
        createShards(at: position, with: texture)
    }
    
    func triggerHapticFeedback() {
        let feedbackGenerator = UINotificationFeedbackGenerator()
        feedbackGenerator.notificationOccurred(.success) // You can also use .warning or .error for different types of feedback
    }


    func generateShards(size: Float) -> MeshResource {
        // Randomly pick a shape to generate (Primitive salad!)
        let randomShape = Int.random(in: 0...5)
        switch randomShape {
        case 0:
            // Generate a tetrahedron
            let vertices: [SIMD3<Float>] = [
                SIMD3<Float>(0, size, 0),
                SIMD3<Float>(-size, -size, -size),
                SIMD3<Float>(size, -size, -size),
                SIMD3<Float>(0, -size, size)
            ]
            let indices: [UInt32] = [
                0, 1, 2,  // Front face
                0, 2, 3,  // Right face
                0, 3, 1,  // Left face
                1, 2, 3   // Bottom face
            ]
            var meshDescriptor = MeshDescriptor()
            meshDescriptor.positions = MeshBuffers.Positions(vertices)
            meshDescriptor.primitives = .triangles(indices)
            return try! MeshResource.generate(from: [meshDescriptor])
        case 1:
            // Generate a cube
            return MeshResource.generateBox(size: size)
        case 2:
            // Generate a pyramid
            let vertices: [SIMD3<Float>] = [
                SIMD3<Float>(0, size, 0),
                SIMD3<Float>(-size, -size, -size),
                SIMD3<Float>(size, -size, -size),
                SIMD3<Float>(0, -size, size)
            ]
            let indices: [UInt32] = [
                0, 1, 2,  // Front face
                0, 2, 3,  // Right face
                0, 3, 1,  // Left face
                1, 2, 3   // Bottom face
            ]
            var meshDescriptor = MeshDescriptor()
            meshDescriptor.positions = MeshBuffers.Positions(vertices)
            meshDescriptor.primitives = .triangles(indices)
            return try! MeshResource.generate(from: [meshDescriptor])
        case 3:
            return MeshResource.generateCone(height: size, radius: size)
        case 4:
            return MeshResource.generateCylinder(height: size, radius: size)
        case 5:
            return MeshResource.generateSphere(radius: size)
        default:
            // Fallback to a sphere if something goes wrong
            return MeshResource.generateSphere(radius: size)
        }
    }

    func createShards(at position: SIMD3<Float>, with texture: TextureResource) {
        // Create an anchor at the collision position
        let shardsAnchor = AnchorEntity(world: position)

        let numberOfShards = Int.random(in: 3...12)

        for _ in 0..<numberOfShards {
            let shardSize: Float = Float.random(in: 0.002...0.006)
            // Generate a random shape
            let shardMesh = generateShards(size: shardSize)

            // Apply the same texture as the mark
            var shardMaterial = SimpleMaterial()
            shardMaterial.baseColor = .texture(texture)
            shardMaterial.tintColor = UIColor.white.withAlphaComponent(0.9999)

            let shardEntity = ModelEntity(mesh: shardMesh, materials: [shardMaterial])

            // Set position relative to the anchor
            shardEntity.position = .zero

            // Add physics body
            shardEntity.physicsBody = PhysicsBodyComponent(
                massProperties: .default,
                material: .default,
                mode: .dynamic
            )

            // Add collision component
            shardEntity.collision = CollisionComponent(
                shapes: [.generateConvex(from: shardMesh)],
                mode: .default,
                filter: .default
            )

            // Apply a random impulse to simulate scattering
            let randomDirection = normalize(SIMD3<Float>(
                Float.random(in: -1...1),
                Float.random(in: 0...1),
                Float.random(in: -1...1)
            ))
            let impulseStrength: Float = Float.random(in: 0.015...0.125)
            shardEntity.applyImpulse(randomDirection * impulseStrength, at: .zero, relativeTo: nil)
            shardsAnchor.addChild(shardEntity)
        }

        arView.scene.addAnchor(shardsAnchor)

        // Remove the shards after 3 seconds to clean up
        DispatchQueue.main.asyncAfter(deadline: .now() + 3.0) { [weak shardsAnchor] in
            shardsAnchor?.removeFromParent()
        }
    }


    func playBreakingSound(at position: SIMD3<Float>) {
        guard let soundResource = try? AudioFileResource.load(
            named: "splat.mp3",
            inputMode: .spatial,
            loadingStrategy: .preload,
            shouldLoop: false
        ) else {
            print("Failed to load sound resource")
            return
        }

        // Create an entity to play the sound
        let soundEntity = ModelEntity()
        soundEntity.position = position

        // Prepare and play the audio
        soundEntity.playAudio(soundResource)

        // Add the entity to the scene
        let anchor = AnchorEntity(world: position)
        anchor.addChild(soundEntity)
        arView.scene.addAnchor(anchor)

        // Remove the sound entity after the sound finishes playing
        DispatchQueue.main.asyncAfter(deadline: .now() + 1.0) {
            anchor.removeFromParent()
        }
    }

    func createTargetEntity() -> ModelEntity {
        // Load the texture from the asset catalog
        guard let textureResource = try? TextureResource.load(named: "target") else {
            fatalError("Failed to load texture from assets.")
        }

        // Create a material with the target texture for the circular faces
        var faceMaterial = SimpleMaterial()
        faceMaterial.baseColor = MaterialColorParameter.texture(textureResource)

        // Create a black material for the sides of the cylinder
        var sideMaterial = SimpleMaterial()
        sideMaterial.baseColor = .color(.black)

        let targRadius = Float(0.3) // Target width
        let targHeight = Float(0.02) // Thin target

        // Create a flat cylinder to represent the target
        let targetMesh = MeshResource.generateCylinder(height: targHeight, radius: targRadius)

        // Create the ModelEntity with the target geometry
        let targetEntity = ModelEntity(mesh: targetMesh, materials: [faceMaterial, sideMaterial])
        targetEntity.name = "targetEntity" // Assign a name for identification

        // Add physics and collision components to the target
        let physicsMaterial = PhysicsMaterialResource.generate(friction: 0.1, restitution: 0.5)
        targetEntity.physicsBody = PhysicsBodyComponent(
            massProperties: .default,
            material: physicsMaterial,
            mode: .static
        )

        // Create a single collision component with multiple shapes
        targetEntity.collision = CollisionComponent(
            shapes: [
                .generateBox(width: targRadius * 2, height: targHeight * 4, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 4, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 4, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 4, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 4, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 4, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 3.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 3.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 3.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 3.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 3.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 3.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 3, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 3, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 3, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 3, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 3, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 3, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 2, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.75, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.75, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.75, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.75, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.75, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.75, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.75, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.75, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.75, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.75, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.75, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.25, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.25, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.25, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.25, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.25, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.25, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.25, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.25, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.25, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.25, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 1.25, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 0.66, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 0.66, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 0.66, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 0.5, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 0.4, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 0.3, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 0.2, depth: targRadius * 2),
                .generateBox(width: targRadius * 2, height: targHeight * 0.1, depth: targRadius * 2),
            ],
            mode: .default,
            filter: .sensor // Adjust filter as needed
        )

        // Enable physics debugging
//        arView.debugOptions.insert(.showPhysics)

        return targetEntity
    }


    func placeObject(object: ModelEntity, at location: SIMD3<Float>) {
        // Create an anchor at the specified location
        let objectAnchor = AnchorEntity(world: location)

        // Attach the object (the ball) to the anchor
        objectAnchor.addChild(object)

        // Add the anchor to the AR scene
        arView.scene.addAnchor(objectAnchor)
    }

    @IBAction func restartButtonPressed(_ sender: Any) {
        resetTracking()
        
        // Get the current frame from the AR session
        guard let frame = arView.session.currentFrame else { return }
        let cameraTransform = frame.camera.transform
        
        // Extract the camera position and forward direction
        let cameraPosition = simd_make_float3(cameraTransform.columns.3)
        let forwardDirection = -simd_normalize(simd_make_float3(cameraTransform.columns.2)) // Camera's forward direction (negative Z)

        // Set the target's position 3 meters in front of the camera
        let distanceInFront: Float = 3.0
        let targetPosition = cameraPosition + forwardDirection * distanceInFront

        // Update the target's transform matrix for position
        var targetTransform = cameraTransform // Copy the current camera transform
        targetTransform.columns.3 = SIMD4<Float>(targetPosition.x, targetPosition.y, targetPosition.z, 1.0) // Set the target position

        // Apply a 90-degree rotation to the face of the target (around the X-axis or Z-axis)
        let rotationAngle = Float.pi / 2 // 90 degrees in radians
        let rotationMatrix = simd_float4x4(simd_quatf(angle: rotationAngle, axis: SIMD3<Float>(1, 0, 0))) // Rotate around X-axis

        // Multiply the target's transform by the rotation matrix
        targetTransform = matrix_multiply(targetTransform, rotationMatrix)

        // Place the target at the calculated transform
        placeTarget(at: targetTransform)
    }

    func resetTracking() {
        arView.scene.anchors.removeAll()
        arView.session.run(configuration, options: [.resetTracking, .removeExistingAnchors])
        messageLabel.displayMessage("")
    }

    private func displayErrorMessage(for error: Error) {
        guard error is ARError else { return }

        let errorWithInfo = error as NSError
        let messages = [
            errorWithInfo.localizedDescription,
            errorWithInfo.localizedFailureReason,
            errorWithInfo.localizedRecoverySuggestion
        ]

        // Remove optional error messages.
        let errorMessage = messages.compactMap({ $0 }).joined(separator: "\n")

        DispatchQueue.main.async {
            // Present an alert informing about the error that has occurred.
            let alertController = UIAlertController(title: "The AR session failed.", message: errorMessage, preferredStyle: .alert)
            let restartAction = UIAlertAction(title: "Restart Session", style: .default) { _ in
                alertController.dismiss(animated: true, completion: nil)
                self.resetTracking()
            }
            alertController.addAction(restartAction)
            self.present(alertController, animated: true, completion: nil)
        }
    }

    private func showInstruction(_ instruction: Instruction) {
        messageLabel.displayMessage(instruction.rawValue, duration: 5)
    }
    
    func session(_ session: ARSession, didUpdate anchors: [ARAnchor]) {
        // Detect face anchors for facial expression detection
        guard let faceAnchor = anchors.compactMap({ $0 as? ARFaceAnchor }).first else {
            // If no face anchor is detected, reset state
            if isWinking {
                stopFiringBalls()
                zoomOutCamera()
                removeCrosshair()
                stopAudioLoop()
                isCrosshairVisible = false
                appState = .ready // Transition back to ready state
                isWinking = false // Reset winking state
            }
            return
        }

        // Retrieve blend shape values
        let blendShapes = faceAnchor.blendShapes

        let blinkLeft = blendShapes[.eyeBlinkLeft] as? Float ?? 0.0
        let blinkRight = blendShapes[.eyeBlinkRight] as? Float ?? 0.0

        // Define thresholds
        let blinkThreshold: Float = 0.8 // Eye is considered closed if above this threshold
        let openThreshold: Float = 0.2 // Eye is considered open if below this threshold

        // Determine the current eye states
        let leftEyeClosed = blinkLeft > blinkThreshold
        let rightEyeClosed = blinkRight > blinkThreshold
        let leftEyeOpen = blinkLeft < openThreshold
        let rightEyeOpen = blinkRight < openThreshold

        // Handle winking and state transitions
        if !isWinking {
            // Check if the user is winking
            if (leftEyeOpen && rightEyeClosed) || (rightEyeOpen && leftEyeClosed) {
                isWinking = true
                winkStartTime = Date.timeIntervalSinceReferenceDate // Record the start time
                appState = .zoomedIn
                addCrosshair()
                playAudioLoop()
                isCrosshairVisible = true
                playZoomSound()
                zoomInCamera()
                startFiringBalls()
            }
        } else {
            // User is currently winking
            if leftEyeOpen && rightEyeOpen {
                // Both eyes are open, stop winking
                isWinking = false
                stopFiringBalls()
                zoomOutCamera()
                removeCrosshair()
                stopAudioLoop()
                isCrosshairVisible = false
                appState = .ready // Transition back to ready state
            } else if leftEyeClosed && rightEyeClosed {
                // Both eyes are closed
                if let startTime = winkStartTime {
                    let duration = Date.timeIntervalSinceReferenceDate - startTime
                    if duration >= winkDurationThreshold {
                        // If both eyes are closed long enough, stop firing and unzoom
                        stopFiringBalls()
                        zoomOutCamera()
                        removeCrosshair()
                        stopAudioLoop()
                        isCrosshairVisible = false
                        appState = .ready // Transition back to ready state
                        isWinking = false // Reset winking state
                    }
                }
            } else {
                // One eye is closed and the other is open; reset the timer
                winkStartTime = Date.timeIntervalSinceReferenceDate
            }
        }
    }

    func startFiringBalls() {
        // Fire a ball immediately
        launchBall()
        bulletsFired += 1
        // Schedule a timer to fire balls every half second
        firingTimer = Timer.scheduledTimer(withTimeInterval: 0.2, repeats: true) { [weak self] timer in
            guard let self = self else { return }
            if self.bulletsFired < self.maxBullets {
                self.launchBall()
                self.bulletsFired += 1
            } else {
                self.stopFiringBalls()
                self.zoomOutCamera()
                self.removeCrosshair()
                self.stopAudioLoop()
                self.isCrosshairVisible = false
                // self.appState = .reloadNeeded
            }
        }
    }

    func stopFiringBalls() {
        if firingTimer != nil {
            firingTimer?.invalidate()
            firingTimer = nil
        }
    }

    func playZoomSound() {
        guard let audioURL = Bundle.main.url(forResource: "anime_zoom", withExtension: "mp3") else {
            print("Audio file not found")
            return
        }

        do {
            zoomSoundEffect = try AVAudioPlayer(contentsOf: audioURL)
            zoomSoundEffect?.play()
        } catch {
            print("Failed to initialize audio player: \(error)")
        }
    }

    func playAudioLoop() {
        if audioPlayer == nil {
            guard let audioURL = Bundle.main.url(forResource: "WesternAudio", withExtension: "mp3") else {
                print("Audio file not found")
                return
            }

            do {
                audioPlayer = try AVAudioPlayer(contentsOf: audioURL)
//                audioPlayer.numberOfLoops = -1 // Loop indefinitely
                audioPlayer?.play()
            } catch {
                print("Failed to initialize audio player: \(error)")
            }
        }
    }

    func stopAudioLoop() {
        if let player = audioPlayer, player.isPlaying {
            player.stop()
            audioPlayer = nil
        }
    }

    func addCrosshair() {
        // Remove any existing crosshair to avoid duplicates
        removeCrosshair()

        // Create a UIImageView for the crosshair
        let crosshairImageView = UIImageView(image: UIImage(named: "crosshair"))
        crosshairImageView.contentMode = .scaleAspectFit
        crosshairImageView.translatesAutoresizingMaskIntoConstraints = false
        crosshairImageView.alpha = 0.0  // Initially hidden

        // Add the crosshair to the ARView
        arView.addSubview(crosshairImageView)

        // Center the crosshair in the ARView
        NSLayoutConstraint.activate([
            crosshairImageView.centerXAnchor.constraint(equalTo: arView.centerXAnchor),
            crosshairImageView.centerYAnchor.constraint(equalTo: arView.centerYAnchor),
            crosshairImageView.widthAnchor.constraint(equalToConstant: 50),  // Adjust the size as needed
            crosshairImageView.heightAnchor.constraint(equalToConstant: 50)
        ])

        // Animate the appearance of the crosshair
        UIView.animate(withDuration: 0.2) {
            crosshairImageView.alpha = 1.0
        }
    }

    func removeCrosshair() {
        for subview in arView.subviews {
            if let imageView = subview as? UIImageView, imageView.image == UIImage(named: "crosshair") {
                imageView.removeFromSuperview()
            }
        }
    }

    func zoomInCamera() {
        // Apply zoom by scaling the ARView
        UIView.animate(withDuration: 0.2) {
            self.arView.transform = CGAffineTransform(scaleX: 2.5, y: 2.5) // Adjust the scale for zoom level
        }
    }

    func zoomOutCamera() {
        // Reset the zoom by returning the ARView to its original scale
        UIView.animate(withDuration: 0.3) {
            self.arView.transform = CGAffineTransform.identity // Reset to default scale (no zoom)
        }
    }

    func session(_ session: ARSession, didFailWithError error: Error) {
        displayErrorMessage(for: error)
    }

    func session(_ session: ARSession, didAdd anchors: [ARAnchor]) {
        for anchor in anchors {
            if let imageAnchor = anchor as? ARImageAnchor {
                // Only place the target if it hasn't been placed yet
                if !targetPlaced {
                    targetPlaced = true
                    // Get the transform of the detected image
                    let imageTransform = imageAnchor.transform
                    // Place the target at the image's position
                    self.placeTarget(at: imageTransform)
                    // Optional: Disable further image detection
                    configuration.detectionImages = []
                    session.run(configuration)
                }
            }
        }
    }

    func placeTarget(at transform: simd_float4x4) {
        // Create a new world anchor at the image's position
        let worldAnchor = AnchorEntity(world: .zero)
        worldAnchor.transform.matrix = transform
        let targetEntity = createTargetEntity()
        worldAnchor.addChild(targetEntity)
        arView.scene.addAnchor(worldAnchor)
        self.targetEntity = targetEntity
    }

    // MARK: - Overrides

    override var prefersStatusBarHidden: Bool {
        // If possible, hide the status bar to improve immersiveness of the AR experience.
        return true
    }

    override var prefersHomeIndicatorAutoHidden: Bool {
        // If possible, hide the home indicator to improve immersiveness of the AR experience.
        return true
    }
}
