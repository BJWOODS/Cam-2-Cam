//
//  ViewController.swift
//

import UIKit
import RealityKit
import ARKit
import AVFoundation
import Combine
import SwiftUI

var audioPlayer: AVAudioPlayer?
@available(iOS 18.0, *)
class ViewController: UIViewController, ARSessionDelegate {

    // MARK: - Properties
    @IBOutlet var arView: ARView!
    @IBOutlet weak var messageLabel: MessageLabel!
    @IBOutlet weak var restartButton: UIButton!

    let coachingOverlay = ARCoachingOverlayView()
    let configuration = ARWorldTrackingConfiguration()

    var isCrosshairVisible = false
    var subscriptions: Set<AnyCancellable> = []
    
    var lastPlacementTime: Date? = nil
    let placementCooldown: TimeInterval = 0.5

    // MARK: - View Controller Lifecycle
    override func viewDidLoad() {
        super.viewDidLoad()

        arView.session.delegate = self
        arView.renderOptions.insert(.disableMotionBlur)

        configuration.environmentTexturing = .automatic
        configuration.userFaceTrackingEnabled = true
        UIApplication.shared.isIdleTimerDisabled = true

        setupCoachingOverlay()
        addCrosshair()
        
        arView.enableTapGesture()
        arView.session.run(configuration)
    }

    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        arView.session.run(configuration)
    }

    // MARK: - Crosshair and Gesture Functionality
    func addCrosshair() {
        removeCrosshair()

        let crosshairImageView = UIImageView(image: UIImage(named: "crosshair"))
        crosshairImageView.contentMode = .scaleAspectFit
        crosshairImageView.translatesAutoresizingMaskIntoConstraints = false
        crosshairImageView.alpha = 1.0 // Crosshair visible always

        arView.addSubview(crosshairImageView)

        // Center crosshair in ARView
        NSLayoutConstraint.activate([
            crosshairImageView.centerXAnchor.constraint(equalTo: arView.centerXAnchor),
            crosshairImageView.centerYAnchor.constraint(equalTo: arView.centerYAnchor),
            crosshairImageView.widthAnchor.constraint(equalToConstant: 50),
            crosshairImageView.heightAnchor.constraint(equalToConstant: 50)
        ])
    }

    func removeCrosshair() {
        for subview in arView.subviews {
            if let imageView = subview as? UIImageView, imageView.image == UIImage(named: "crosshair") {
                imageView.removeFromSuperview()
            }
        }
    }
    func shouldPlaceCube() -> Bool {
        if let lastTime = lastPlacementTime {
            let timeSinceLastPlacement = Date().timeIntervalSince(lastTime)
            return timeSinceLastPlacement > placementCooldown
        }
        return true // If no cube has been placed yet, allow placement
    }

    // MARK: - Detect Face Gesture (Mouth Open) to Place Block
    func session(_ session: ARSession, didUpdate anchors: [ARAnchor]) {
       // arView.updateSpritePosition()
        if anchors.compactMap({ $0 as? ARFaceAnchor }).first != nil {
            for anchor in anchors {
                if let faceAnchor = anchor as? ARFaceAnchor {
                    let jawOpenValue = faceAnchor.blendShapes[.jawOpen] as? Float ?? 0.0
                    if jawOpenValue > 0.5 {
                        // Check if enough time has passed since the last cube placement
                        if shouldPlaceCube() {
                            arView.placeCubeWhenMouthOpens()
                            lastPlacementTime = Date() // Update the last placement time
                        }
                    }
                }
            }
        }
    }

    func triggerHapticFeedback() {
        let feedbackGenerator = UIImpactFeedbackGenerator(style: .medium) // Adjust the style for stronger or softer feedback
        feedbackGenerator.prepare() // Prepare the haptic generator
        feedbackGenerator.impactOccurred() // Trigger the feedback
    }
    
    func playAudio() {
        guard let audioURL = Bundle.main.url(forResource: "pop", withExtension: "mp3") else {
            print("Audio file not found.")
            return
        }
        do {
            audioPlayer = try AVAudioPlayer(contentsOf: audioURL)
            audioPlayer?.play()  // Play the sound
        } catch {
            print("Failed to initialize audio player: \(error)")
        }
    }
    
    // MARK: - Reset Tracking
    @IBAction func restartButtonPressed(_ sender: Any) {
        resetTracking()
    }

    func resetTracking() {
        arView.scene.anchors.removeAll()
        arView.session.run(configuration, options: [.resetTracking, .removeExistingAnchors])
        messageLabel.displayMessage("")
    }

    // Handle AR session errors
    func session(_ session: ARSession, didFailWithError error: Error) {
        displayErrorMessage(for: error)
    }

    func displayErrorMessage(for error: Error) {
        let errorWithInfo = error as NSError
        let messages = [
            errorWithInfo.localizedDescription,
            errorWithInfo.localizedFailureReason,
            errorWithInfo.localizedRecoverySuggestion
        ]
        let errorMessage = messages.compactMap({ $0 }).joined(separator: "\n")
        DispatchQueue.main.async {
            let alertController = UIAlertController(title: "The AR session failed.", message: errorMessage, preferredStyle: .alert)
            let restartAction = UIAlertAction(title: "Restart Session", style: .default) { _ in
                alertController.dismiss(animated: true, completion: nil)
                self.resetTracking()
            }
            alertController.addAction(restartAction)
            self.present(alertController, animated: true, completion: nil)
        }
    }
}

extension ARView
{
  
    func placeCubeWhenMouthOpens() {
        // Define the center of the screen for raycast
        let screenCenter = CGPoint(x: self.bounds.midX, y: self.bounds.midY)
        // Perform the raycast
        guard let rayResult = self.ray(through: screenCenter) else {return}
        let results = self.scene.raycast(origin: rayResult.origin, direction: rayResult.direction)
        if let firstResult = results.first {
            //raycast intersected with AR object
            //place object on top of existing object
            var position = firstResult.position
            position.y += 0.3/3
            placeCube(at: position)
        }
        else
        {
            let results = self.raycast(from: screenCenter, allowing: .estimatedPlane, alignment: .any)
            
            if let firstResult = results.first {
                let position = simd_make_float3(firstResult.worldTransform.columns.3)
                // Full transformation matrix
                // Place the sprite (a simple flat plane in RealityKit)
                placeCube(at: position)
            }
        }
    }

    func enableTapGesture()
    {
        let tapGestureRecognizer = UITapGestureRecognizer(target: self, action: #selector(handleTap(recognizer:)))
        self.addGestureRecognizer(tapGestureRecognizer)
    }
    
    @objc func handleTap(recognizer: UITapGestureRecognizer)
    {
        let tapLocation = recognizer.location(in: self)
        
        guard let rayResult = self.ray(through: tapLocation) else {return}
        
        let results = self.scene.raycast(origin: rayResult.origin, direction: rayResult.direction)
        
        if let firstResult = results.first {
            //raycast intersected with AR object
            //place object on top of existing object
            
            var position = firstResult.position
            position.y += 0.3
     
            placeCube(at: position)
        }
        else
        {
            let results = self.raycast(from: tapLocation, allowing: .estimatedPlane, alignment: .any)
            
            if let firstResult = results.first {
                let position = simd_make_float3(firstResult.worldTransform.columns.3)
                placeCube(at: position)
            }
        }
    }

    func placeCube(at position: SIMD3<Float>) {
        let size: Float = 0.3
        let boundingBoxSize = size * 0.98

        // Load textures
        guard let sideTexture = try? TextureResource.load(named: "grass_cube"),
              let topTexture = try? TextureResource.load(named: "top_cube"),
              let bottomTexture = try? TextureResource.load(named: "bottom_cube") else {
            print("Failed to load textures")
            return
        }

        // Define materials
        var sideMaterial = SimpleMaterial()
        sideMaterial.baseColor = MaterialColorParameter.texture(sideTexture)

        var topMaterial = SimpleMaterial()
        topMaterial.baseColor = MaterialColorParameter.texture(topTexture)
        
        var bottomMaterial = SimpleMaterial()
        bottomMaterial.baseColor = MaterialColorParameter.texture(bottomTexture)

        // Create the six faces as individual planes
        let topFace = ModelEntity(mesh: MeshResource.generatePlane(width: size, height: size), materials: [topMaterial])
        topFace.position = SIMD3<Float>(0, size / 2, 0)
        topFace.transform.rotation = simd_quatf(angle: -.pi / 2, axis: SIMD3<Float>(1, 0, 0))

        let frontFace = ModelEntity(mesh: MeshResource.generatePlane(width: size, height: size), materials: [sideMaterial])
        frontFace.position = SIMD3<Float>(0, 0, size / 2)

        let backFace = ModelEntity(mesh: MeshResource.generatePlane(width: size, height: size), materials: [sideMaterial])
        backFace.position = SIMD3<Float>(0, 0, -size / 2)
        backFace.transform.rotation = simd_quatf(angle: .pi, axis: SIMD3<Float>(0, 1, 0))

        let leftFace = ModelEntity(mesh: MeshResource.generatePlane(width: size, height: size), materials: [sideMaterial])
        leftFace.position = SIMD3<Float>(-size / 2, 0, 0)
        leftFace.transform.rotation = simd_quatf(angle: -.pi / 2, axis: SIMD3<Float>(0, 1, 0))

        let rightFace = ModelEntity(mesh: MeshResource.generatePlane(width: size, height: size), materials: [sideMaterial])
        rightFace.position = SIMD3<Float>(size / 2, 0, 0)
        rightFace.transform.rotation = simd_quatf(angle: .pi / 2, axis: SIMD3<Float>(0, 1, 0))

        let bottomFace = ModelEntity(mesh: MeshResource.generatePlane(width: size, height: size), materials: [bottomMaterial])
        bottomFace.position = SIMD3<Float>(0, -size / 2, 0)
        bottomFace.transform.rotation = simd_quatf(angle: .pi / 2, axis: SIMD3<Float>(1, 0, 0))

        // Create an anchor to hold the faces
        let anchorEntity = AnchorEntity(world: position)
        anchorEntity.addChild(topFace)
        anchorEntity.addChild(frontFace)
        anchorEntity.addChild(backFace)
        anchorEntity.addChild(leftFace)
        anchorEntity.addChild(rightFace)
        anchorEntity.addChild(bottomFace)
        
        // Transparent bounding box for collision and stacking
        let transparentMaterial = SimpleMaterial(color: .clear, isMetallic: false) // Transparent material for bounding box
        let boundingBox = ModelEntity(mesh: MeshResource.generateBox(size: boundingBoxSize), materials: [transparentMaterial])
        boundingBox.collision = CollisionComponent(shapes: [ShapeResource.generateBox(size: [boundingBoxSize, boundingBoxSize, boundingBoxSize])])

        anchorEntity.addChild(boundingBox)
        triggerHapticFeedback()
        playAudio()
        self.scene.addAnchor(anchorEntity)
    }

    func updateOrPlaceSprite(at position: SIMD3<Float>, orientation: simd_float4x4) {
        if let spriteEntity = self.scene.findEntity(named: "placementSprite") {
            // Update existing sprite position and orientation
            spriteEntity.transform.matrix = orientation
            spriteEntity.position = position
        } else {
            // Create and place a new sprite if one doesn't exist
            placeSprite(at: position, orientation: orientation)
        }
    }

    func placeSprite(at position: SIMD3<Float>, orientation: simd_float4x4) {
        // Create a flat plane to act as a sprite
        let spriteMesh = MeshResource.generatePlane(width: 0.2, depth: 0.2) // Adjust size as needed
        let material = SimpleMaterial(color: .blue, isMetallic: false) // Replace with a texture if needed
        
        let spriteEntity = ModelEntity(mesh: spriteMesh, materials: [material])
        spriteEntity.name = "placementSprite" // Give the sprite a name to find it later

        spriteEntity.transform.matrix = orientation
        spriteEntity.position = position

        // Create an anchor and add the sprite entity
        let anchorEntity = AnchorEntity(world: position)
        anchorEntity.addChild(spriteEntity)

        // Add the anchor to the scene
        self.scene.addAnchor(anchorEntity)
    }

    func createCube(at position: SIMD3<Float>){
        // Generate a cube mesh (visual size)
        let cube = MeshResource.generateBox(size: 0.3) // Actual visual size of the cube
        
        // Create a brighter red material using RGB values
        let brightRedColor = UIColor(red: 0.9, green: 0.0, blue: 0.0, alpha: 1.0)
        let material = SimpleMaterial(color: brightRedColor, isMetallic: false)
        
        let cubeEntity = ModelEntity(mesh: cube, materials: [material])
        let collisionShape = ShapeResource.generateBox(size: [0.4, 0.4, 0.4]) // Invisible collider, slightly larger

        // Add the collision shape to the entity for better hit detection
        cubeEntity.collision = CollisionComponent(shapes: [collisionShape])
        cubeEntity.generateCollisionShapes(recursive: true)
        
        let anchorEntity = AnchorEntity(world: position)
        anchorEntity.addChild(cubeEntity)
        self.scene.addAnchor(anchorEntity)
    }

    func triggerHapticFeedback() {
        let feedbackGenerator = UIImpactFeedbackGenerator(style: .medium) // Adjust the style for stronger or softer feedback
        feedbackGenerator.prepare() // Prepare the haptic generator
        feedbackGenerator.impactOccurred() // Trigger the feedback
    }
    
    func playAudio() {
        guard let audioURL = Bundle.main.url(forResource: "pop", withExtension: "mp3") else {
            print("Audio file not found.")
            return
        }
        do {
            audioPlayer = try AVAudioPlayer(contentsOf: audioURL)
            audioPlayer?.play()  // Play the sound
        } catch {
            print("Failed to initialize audio player: \(error)")
        }
    }
}
