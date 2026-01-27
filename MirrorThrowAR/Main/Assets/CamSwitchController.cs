using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.Rendering;
using UnityEngine.XR.ARFoundation;

public class CamSwitchController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        /*This won't switch the camera*/        
        //camManager.requestedFacingDirection = CameraFacingDirection.User;
        targetMeshParent.GetComponent<MeshRenderer>().enabled = false; 
        pickachuMeshParent.GetComponentInParent<MeshRenderer>().enabled = false;
    }

    public ARCameraManager camManager;
    public ARSession aRSession;
    public Camera arCamera2;

    public GameObject targetMeshParent;
    public GameObject pickachuMeshParent; 
    bool trigger;
    bool trigger2;

    public float waitTime = 1;
    bool hasWaited1Seconds = false;

    public GameObject handButton; 
    // Update is called once per frame


        void Awake()
    {
        #if UNITY_EDITOR
            // This code only runs in the Unity Editor.
            Debug.Log("Object is active in the editor");
        #else
            // This code only runs in the build.
            handButton.SetActive(false);
        #endif
    }
    
        IEnumerator DoWaitTest()
        {
        Debug.Log("Start waiting: " + Time.realtimeSinceStartup);
        yield return new WaitForSecondsRealtime(1f);
        Debug.Log("End waiting: " + Time.realtimeSinceStartup);
        hasWaited1Seconds = true; // Set the flag to indicate 8 seconds have passed
        }

        IEnumerator DoWaitTestRelativeTime()
        {
        Debug.Log("Start waiting: " + Time.realtimeSinceStartup);
        yield return new WaitForSeconds(2f);
        Debug.Log("End waiting: " + Time.realtimeSinceStartup);
        hasWaited1Seconds = true; // Set the flag to indicate 8 seconds have passed
        }

private float delayTimer = 0f;
private bool delayStarted = false;
    void Update()
    {
        
            // Run actions that should happen after 8 seconds here
           if (GlobalStates.isBallReleased == true)
           {
            targetMeshParent.GetComponent<MeshRenderer>().enabled = true; 
            pickachuMeshParent.GetComponentInParent<MeshRenderer>().enabled = true;
            camManager.requestedFacingDirection = CameraFacingDirection.World;
            GlobalStates.isBallReleased = false;
            delayTimer = 5.0f;
            delayStarted = true; 
            GlobalStates.isBallReleased = false;      

            GameObject[] demoController = GameObject.FindGameObjectsWithTag("DemoController");
            foreach (GameObject demo in demoController)
            {
                // Disable all AutoAddObject components in the children of the GameObject
                foreach (AutoAddObject autoChild in demo.GetComponentsInChildren<AutoAddObject>(true))
                {
                    autoChild.enabled = false; // Correctly reference the instance of the component
                }
            }
            GameObject[] crosses = GameObject.FindGameObjectsWithTag("cross");
            foreach (GameObject cross in crosses)
            {
                cross.GetComponent<MeshRenderer>().enabled = true;
            }

            GameObject[] handParents = GameObject.FindGameObjectsWithTag("hand_r_parent");

            foreach (GameObject parent in handParents)
            {
                // Disable all CapsuleColliders in the children of the GameObject
                foreach (CapsuleCollider childCapsuleCollider in parent.GetComponentsInChildren<CapsuleCollider>(true))
                {
                    childCapsuleCollider.enabled = false;
                    childCapsuleCollider.isTrigger = false;
                }

                // If you want to disable all Colliders, you could do the same for each collider type
                foreach (Collider childCollider in parent.GetComponentsInChildren<Collider>(true))
                {
                    childCollider.enabled = false;
                    childCollider.isTrigger = false;
                }

                // Disable all BoxColliders in the children of the GameObject
                foreach (BoxCollider childBoxCollider in parent.GetComponentsInChildren<BoxCollider>(true))
                {
                    childBoxCollider.enabled = false;
                    childBoxCollider.isTrigger = false;
                }

            }



           }

            if(delayTimer > 0)
            {
                delayTimer -= Time.deltaTime;   
                Debug.Log("This is the current time rn: " + delayTimer);
                
            }
            else
            {
                camManager.requestedFacingDirection = CameraFacingDirection.User;
                Debug.Log("We are in the else statement we care about");
                delayStarted = false;
            
            GameObject[] demoController = GameObject.FindGameObjectsWithTag("DemoController");
            foreach (GameObject demo in demoController)
            {
                // Disable all AutoAddObject components in the children of the GameObject
                foreach (AutoAddObject autoChild in demo.GetComponentsInChildren<AutoAddObject>(true))
                {
                    autoChild.enabled = true; // Correctly reference the instance of the component
                }
            }

            GameObject[] crosses = GameObject.FindGameObjectsWithTag("cross");
            foreach (GameObject cross in crosses)
            {
                cross.GetComponent<MeshRenderer>().enabled = false;
            }

            GameObject[] handParents = GameObject.FindGameObjectsWithTag("hand_r_parent");

            foreach (GameObject parent in handParents)
            {
                // Disable all CapsuleColliders in the children of the GameObject
                foreach (CapsuleCollider childCapsuleCollider in parent.GetComponentsInChildren<CapsuleCollider>(true))
                {
                    childCapsuleCollider.enabled = true;
                    childCapsuleCollider.isTrigger = true; 
                }

                // If you want to disable all Colliders, you could do the same for each collider type
                foreach (Collider childCollider in parent.GetComponentsInChildren<Collider>(true))
                {
                    childCollider.enabled = true;
                    childCollider.isTrigger = true; 
                }

                // Disable all BoxColliders in the children of the GameObject
                foreach (BoxCollider childBoxCollider in parent.GetComponentsInChildren<BoxCollider>(true))
                {
                    childBoxCollider.enabled = true;
                    childBoxCollider.isTrigger = true;
                }

            }


            if(GameObject.FindGameObjectsWithTag("InteractableObj").Length == 0)
           {
            Debug.Log("Did not find interactable objects+");
            pickachuMeshParent.GetComponentInParent<MeshRenderer>().enabled = false;
            targetMeshParent.GetComponent<MeshRenderer>().enabled = false;
            
            GameObject[] targetClones = GameObject.FindGameObjectsWithTag("target");
            foreach (GameObject target in targetClones)
            {
                if(target.name == "Target_Main(Clone)")
                {
                MeshRenderer renderer = target.GetComponent<MeshRenderer>();
                if (renderer != null)
                {
                    Debug.Log("Mesh renderer found and being disabled");
                    renderer.enabled = false;
                }
                }
            }
            GameObject[] pika_plane = GameObject.FindGameObjectsWithTag("pika_plane");
            
            foreach (GameObject pikachu in pika_plane)
            {
                if(pikachu.name == "Pikachu_Plane")
                {
                MeshRenderer renderer = pikachu.GetComponent<MeshRenderer>();
                if (renderer != null)
                {
                    Debug.Log("Mesh renderer found and being disabled");
                    renderer.enabled = false;
                }
                }
            }
           }
            }
            
            

    }
}

