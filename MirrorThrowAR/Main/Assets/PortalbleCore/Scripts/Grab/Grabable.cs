using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Linq;
using System;
using System.Collections;


namespace Portalble.Functions.Grab
{
    /// <summary>
    /// Grabable Object, mainly used for configuration.
    /// </summary>
    [System.Serializable]
    public class Grabable : MonoBehaviour
    {
        public GrabableConfig m_configuration;
        public GameObject pokeballSound;
        public GameObject throwAudioObj;


        public Vector3 applyForce = new Vector3(0f, 20f, 15f);
        public Vector3 rv;
        public int PI;
        private GameObject ball;
        private bool soundPlayed = false;

        public AudioSource splatSound;


        /// <summary>
        /// This field is only used for initialization of GrabableConfig.
        /// </summary>
        [SerializeField]
        private int m_initialLock;

        /// <summary>
        /// Default, when using outline material.
        /// </summary>
        public Color m_selectedOutlineColor;
        public Color m_grabbedOutlineColor;

        [SerializeField]
        private bool m_useOutlineMaterial = true;

        [SerializeField]
        private Transform m_proxyObject;

        /// <summary>
        /// Option, if the user want to use their own material.
        /// </summary>
        public Material m_selectedMaterial;
        public Material m_grabbedMaterial;

        public float m_throwPower = 5f;
        private Transform target_transform;

        private Material m_unselectedMaterial;

        private List<GrabCollider> m_grabColliders;


        private Scene sceneMain;
        private Scene scenePrediction;
        private PhysicsScene scenePredictionPhysics;
        private PhysicsScene sceneMainPhysics;
        private bool isGrabbing = true;
        /// <summary>
        /// True if it's ready for grab, it doesn't mean the user is grabbing this.
        /// It only shows that user can grab it. e.g. the hand is in the grab collider.
        /// </summary>
        private bool m_isReadyForGrab;
        public bool IsReadyForGrab
        {
            get
            {
                return m_isReadyForGrab;
            }
        }

        /// <summary>
        /// A flag, marks whether it's in left hand grabbing queue.
        /// True for yes, false means it's in right hand grabbing queue.
        /// Use IsReadyForGrab to get if it's ready to be grabbed.
        /// </summary>
        private bool m_isLeftHanded;
        public bool IsLeftHanded
        {
            get
            {
                return m_isLeftHanded;
            }
        }

        // Use this for initialization
        void Start()
        {
            if (GameObject.FindGameObjectsWithTag("InteractableObj").Length >= 2)
            {
                foreach (GameObject pokeball in GameObject.FindGameObjectsWithTag("InteractableObj"))
                {
                    if (pokeball.name.Contains("Grabbing") && pokeball != this.gameObject)
                    {
                        Destroy(pokeball);

                    }
                }
            }

            pokeballSound = GameObject.FindGameObjectWithTag("pokeballsound");
            throwAudioObj = GameObject.FindGameObjectWithTag("throwaudio");
            if (soundPlayed == false)
            {
                pokeballSound.GetComponent<AudioSource>().Play();
                soundPlayed = true;
            }
            m_isReadyForGrab = false;
            m_isLeftHanded = false;

            if (m_configuration == null)
            {
                Debug.Log("Create Grab Config");
                m_configuration = new GrabableConfig(m_initialLock);
            }

            m_grabColliders = new List<GrabCollider>();
            target_transform = GameObject.Find("Target_Main").transform;

            if (SceneManager.GetSceneByName("ScenePredictionPhysics" + GlobalStates.sceneIterator).IsValid() 
                || SceneManager.GetSceneByName("MainScene" + GlobalStates.sceneIterator).IsValid())
            {
                SceneManager.UnloadSceneAsync("ScenePredictionPhysics" + GlobalStates.sceneIterator);
                SceneManager.UnloadSceneAsync("MainScene" + GlobalStates.sceneIterator);
            }
            if(GameObject.Find("GrabbingCube_" + (GlobalStates.sceneIterator - 1)))
            {
                Destroy(GameObject.Find("GrabbingCube_" + (GlobalStates.sceneIterator - 1)));
            }
            Physics.autoSimulation = false;
            GlobalStates.sceneIterator++;
            sceneMain = SceneManager.CreateScene("MainScene" + GlobalStates.sceneIterator);
            sceneMainPhysics = sceneMain.GetPhysicsScene();

            CreateSceneParameters sceneParam = new CreateSceneParameters(LocalPhysicsMode.Physics3D);
            scenePrediction = SceneManager.CreateScene("ScenePredictionPhysics" + GlobalStates.sceneIterator, sceneParam);
            scenePredictionPhysics = scenePrediction.GetPhysicsScene();
        }
        private void FixedUpdate()
        {
            if (!sceneMainPhysics.IsValid())
                return;

            sceneMainPhysics.Simulate(Time.fixedDeltaTime);
        }
        private int frames = 0;
        // Update is called once per frame
        List<Vector3> positions = new List<Vector3>();
        void Update()
        {
            frames++;
                positions.Add(this.transform.position);
                Debug.Log("Frame interval: " + Grab.Instance.GetCurrentReleaseVelocity());

                if (GlobalStates.adaptiveModelOn)
                {
                    Debug.Log("Adaptive mode is on");
                }
                else
                {
                    Debug.Log("Adaptive mode is OFF");
                }
            

        }

        internal void OnGrabTriggerEnter(GrabCollider notifier, bool isLeft)
        {

            // Avoid repeted tigger enter; The hand is already inside,  It's unavailable.
            if (IsReadyForGrab)
                return;

            Debug.Log("Grabable:On Grab Trigger Enter");
            m_isLeftHanded = isLeft;
            Grab.Instance.WaitForGrabbing(this);

            m_grabColliders.Add(notifier);

            // Trigger vibration if it's available
            if (Grab.Instance.UseVibration)
            {
                Vibration.Vibrate(25);
            }

            m_isReadyForGrab = true;
        }

        internal void OnGrabTriggerExit()
        {
            // nothing needs to be done.
            Debug.Log("Ball is released");
            GlobalStates.isBallReleased = true; 
            if (!IsReadyForGrab)
                return;
            foreach (GameObject fingerObj in GameObject.FindGameObjectsWithTag("fingers"))
            {
                fingerObj.GetComponent<Collider>().enabled = false;
            }
            throwAudioObj.GetComponent<AudioSource>().Play();
            Debug.Log("Grabable:On Grab Trigger Exit");
            Grab.Instance.ExitGrabbingQueue(this);

            foreach (GrabCollider gc in m_grabColliders)
            {
                gc.SetLock(false);
            }

            m_grabColliders.Clear();

            m_isReadyForGrab = false;
        }

        /// <summary>
        /// Called when user selected this obj
        /// </summary>
        internal void OnSelected()
        {
            Renderer renderer = GetRenderer();

            if (renderer != null && m_selectedMaterial != null && Grab.Instance.UseMaterialChange)
            {
                // if has renderer, then do material change.
                m_unselectedMaterial = renderer.material;
                if (m_useOutlineMaterial)
                {
                    Material newInstance = Instantiate<Material>(m_selectedMaterial);
                    newInstance.SetColor("_BodyColor", m_unselectedMaterial.color);
                    newInstance.mainTexture = m_unselectedMaterial.mainTexture;
                    if (newInstance.HasProperty("_OutlineColor"))
                    {
                        newInstance.SetColor("_OutlineColor", m_selectedOutlineColor);
                    }
                    renderer.material = newInstance;
                }
                else if (m_selectedMaterial != null)
                {
                    renderer.material = m_selectedMaterial;
                }
            }
        }

        /// <summary>
        /// Called when user deselected this obj.
        /// </summary>
        internal void OnDeSelected()
        {
            // change material back.
            Renderer renderer = GetRenderer();
            if (renderer != null && m_unselectedMaterial != null)
            {
                renderer.material = m_unselectedMaterial;
            }
        }

        /// <summary>
        /// Called when it starts to be grabbed.
        /// </summary>
        internal void OnGrabStart()
        {
            isGrabbing = true;
            Collider cd = GetComponent<Collider>();
            if (cd != null)
                cd.isTrigger = true;
            Rigidbody rb = GetComponent<Rigidbody>();
            if (rb != null)
            {
                rb.useGravity = false;
                rb.velocity = Vector3.zero;
                rb.angularVelocity = Vector3.zero;
                rb.Sleep();
            }

            Renderer renderer = GetRenderer();
            if (Grab.Instance.UseMaterialChange && renderer != null)
            {
                if (m_useOutlineMaterial)
                {
                    Material mat = renderer.sharedMaterial;
                    if (mat.HasProperty("_OutlineColor"))
                    {
                        renderer.sharedMaterial.SetColor("_OutlineColor", m_grabbedOutlineColor);
                    }
                }
                else if (m_grabbedMaterial != null)
                {
                    renderer.material = m_grabbedMaterial;
                }
            }

        }

        /// <summary>
        /// Called when it stops to be grabbed.
        /// </summary>


        internal void OnGrabStop(Vector3 releaseVelocity)
        {



              

            
            isGrabbing = false;
            Debug.Log("Inside of OnGrabStop");

            Collider cd = GetComponent<Collider>();
            if (cd != null)
                cd.isTrigger = false;
            Rigidbody rb = GetComponent<Rigidbody>();
            if (rb != null)
            {
                rb.useGravity = true;
                float distance = Vector3.Distance(target_transform.position, Camera.main.transform.position);
                if (GlobalStates.adaptiveThrowPowerOn)
                    m_throwPower = distance * 20 * (1 / Time.deltaTime) / 120;
                else
                    m_throwPower = 25;

                releaseVelocity = releaseVelocity * m_throwPower;

                /* filtering adaptive coeficients to avoid sudden change */
                ThrowARbleHelper.FilteringAdaptiveCoeficients();
                /* ThrowARble code for adaptive throwing */
                if (GlobalStates.adaptiveModelOn)
                {
                    ThrowARbleHelper.updateErrorLimit(distance);

                    /* COEFFICIENTS ARE UPDATED IN Target.cs */

                    /* get Euler angle for release */
                    GlobalStates.lastReleaseAngle = ThrowARbleHelper.getReleaseAngle(releaseVelocity);

                    /* update release angle with adaptive angle coef */
                    Vector3 new_releaseVelocityWithUpdatedAngle = ThrowARbleHelper.updateReleaseAngle(releaseVelocity, GlobalStates.lastReleaseAngle);

                    /* update release speed with adaptive speed coef */
                    Vector3 new_releaseVelocity = new_releaseVelocityWithUpdatedAngle * GlobalStates.GetSpeedCoef();

                    /* assign it back */
                    releaseVelocity = new_releaseVelocity;

                    /* calculate lateral speed used for speed coef calculation */
                    GlobalStates.lastRawReleaseLateralSpeed = Mathf.Sqrt(releaseVelocity.x * releaseVelocity.x + releaseVelocity.y * releaseVelocity.y);

                    /* update adaptive angle and speed coef */
                    ThrowARbleHelper.UpdateAdaptiveCoef();

                    /* calculate release angle first, releasevelocity magnitude remains same */
                    // Vector3 new_releaseVelocityWithUpdatedAngle = ThrowARbleHelper.updateReleaseAngle(releaseVelocity, GlobalStates.lastReleaseAngle);

                    //GlobalStates.lastReleaseSpeed = new_releaseVelocityWithUpdatedAngle.magnitude;

                    /* update release vel magnitude */



                }
                else if (GlobalStates.timeModelMode && GameObject.FindGameObjectsWithTag("simObj").Length == 0)
                {
                    
                       simProjectiles(releaseVelocity);
                }

                rb.velocity = releaseVelocity;
                Debug.Log("This is the rb velocity: " + rb.velocity);

                foreach (GameObject fingerCollider in GameObject.FindGameObjectsWithTag("fingers"))
                {
                    fingerCollider.GetComponent<Collider>().enabled = false;
                }
            }

            Renderer renderer = GetRenderer();
            // material back to selected
            if (Grab.Instance.UseMaterialChange && renderer != null)
            {
                if (m_useOutlineMaterial)
                {
                    Material mat = renderer.sharedMaterial;
                    if (mat.HasProperty("_OutlineColor"))
                    {
                        renderer.sharedMaterial.SetColor("_OutlineColor", m_selectedOutlineColor);
                    }
                }
                else if (m_selectedMaterial != null)
                {
                    renderer.material = m_selectedMaterial;
                }
            }
        }
        IEnumerator waitForGrabTimePos()
        {
            yield return new WaitForSeconds(2);
            Debug.Log("Wait is over");
        }
        public List<float> yDistList = new List<float>();
        public List<List<GameObject>> allPaths = new List<List<GameObject>>();
        public List<GameObject> singlePaths = new List<GameObject>();

        public GameObject sim_target;

    
        private void Awake()
        {

            foreach (GameObject fingerCollider in GameObject.FindGameObjectsWithTag("fingers"))
            {
                fingerCollider.GetComponent<Collider>().enabled = true;
            }
            if (GameObject.Find("GrabbingCube_" + (GlobalStates.sceneIterator - 2)))
            {
                foreach (GameObject obj in GameObject.FindGameObjectsWithTag("simObj"))
                {
                    Destroy(obj);
                }
               SceneManager.UnloadSceneAsync("ScenePredictionPhysics" + GlobalStates.sceneIterator);
               SceneManager.UnloadSceneAsync("MainScene" + GlobalStates.sceneIterator);
                GlobalStates.sceneIterator++;
            }
            Debug.Log("Inside awake func");
            sim_target = Instantiate(GameObject.Find("Target_Main"));
            sim_target.transform.position = GameObject.Find("Target_Main").transform.position;

        }
        void simProjectiles(Vector3 releaseVelocity)
        {
            if (!sceneMainPhysics.IsValid() || !scenePredictionPhysics.IsValid())
                return;

            Debug.Log("Time model is on -- test script");

            int j = 0;
            Debug.Log("Debugging positions for now");
            ball = GameObject.CreatePrimitive(PrimitiveType.Cube);

            ball.name = "whiteSphere";
            SceneManager.MoveGameObjectToScene(ball, sceneMain);
            ball.transform.localScale = new Vector3(.1f, .1f, .1f);
            ball.AddComponent<Rigidbody>().velocity = releaseVelocity;
            Material whiteMaterial = new Material(Shader.Find("Universal Render Pipeline/Lit"));
            whiteMaterial.color = Color.white;
            ball.GetComponent<MeshRenderer>().material = whiteMaterial;
            ball.tag = "simCube";
            ball.GetComponent<Collider>().enabled = ball.GetComponent<Collider>().enabled;
            ball.transform.position = this.transform.position;
            ball.GetComponent<Renderer>().enabled = false;


            SceneManager.MoveGameObjectToScene(sim_target, scenePrediction);
            foreach (Vector3 pos in this.positions)
            {
                GameObject predictionBall = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                predictionBall.GetComponent<Renderer>().enabled = false;
                SceneManager.MoveGameObjectToScene(predictionBall, scenePrediction);
                predictionBall.AddComponent<Rigidbody>().velocity = releaseVelocity;
                predictionBall.tag = "simObj";
                predictionBall.name = "emptySphere";
                predictionBall.transform.localScale = new Vector3(.01f, .01f, .01f);
                predictionBall.GetComponent<Rigidbody>().collisionDetectionMode = CollisionDetectionMode.ContinuousDynamic;
                predictionBall.GetComponent<Rigidbody>().rotation = this.GetComponent<Rigidbody>().rotation;
                predictionBall.GetComponent<Collider>().enabled = predictionBall.GetComponent<Collider>().enabled;
                predictionBall.GetComponent<Collider>().isTrigger = true;
                predictionBall.GetComponent<Renderer>().enabled = false;
                predictionBall.transform.position = pos;

                //If object was destroyed by target collider
                for (int i = 0; i < 1; i++)
                {
                    scenePredictionPhysics.Simulate(Time.fixedDeltaTime);

                    GameObject pathMarkSphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    pathMarkSphere.GetComponent<Renderer>().enabled = false;
                    SceneManager.MoveGameObjectToScene(pathMarkSphere, scenePrediction);
                    singlePaths.Add(pathMarkSphere);

                }
                if (GlobalStates.simCollision == true)
                {
                    yDistList.Add(Math.Abs(Target.dis_to_target));
                }
                GlobalStates.simCollision = false;
                allPaths.Add(singlePaths);
                singlePaths.Clear();


                j++;

            }
            int optimalIndex = 0;
            if (yDistList.Count() > 0)
            {
                float minVal = yDistList.Min();
                optimalIndex = yDistList.IndexOf(minVal);
            }
            else
            {

                Debug.Log("yDistList is empty");
            }

            this.transform.position = positions[optimalIndex];

        }

        void OnTriggerEnter(Collider other)
        {
            Debug.Log("Other gameObject name: " + other.gameObject.name);
            if (other.gameObject.tag == "ARPlane")
            {
                Debug.Log("Destroyed due to ARPlane");
                Destroy(gameObject);
            }

            Debug.Log("We collided!!!");
            if (other.name == "Target_Main" || other.tag == "ARPlane")
            {

                foreach (GameObject obj in GameObject.FindGameObjectsWithTag("simObj"))
                {
                    Destroy(obj);
                }
                SceneManager.UnloadSceneAsync("ScenePredictionPhysics" + GlobalStates.sceneIterator);
                SceneManager.UnloadSceneAsync("MainScene" + GlobalStates.sceneIterator);
                Debug.Log("Value of the scene iterator: " + GlobalStates.sceneIterator);
            }

        }

        /// <summary>
        /// Check if this object is being grabbed.
        /// </summary>
        /// <returns>true for yes, false for no</returns>
        public bool IsBeingGrabbed()
        {
            return (Grab.Instance.GetGrabbingObject() == this);
        }

        public Renderer GetRenderer()
        {
            if (m_proxyObject != null)
            {
                return m_proxyObject.GetComponent<Renderer>();
            }
            return GetComponent<Renderer>();
        }

        public Transform GetProxy()
        {
            return m_proxyObject;
        }
    }
}