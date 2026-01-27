using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.EventSystems;

[RequireComponent(typeof(ARRaycastManager))]
public class ARTapToPlaceChicken : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject gameObjectToInstantiate;
    public GameObject lockButton;
    public GameObject unlockButton;
    private GameObject spawnedObject;
    private ARRaycastManager _arRaycastManager;
    private Vector2 touchPosition;
    static List<ARRaycastHit> hits = new List<ARRaycastHit>();
    private GameObject DC;
    private bool lock_position = false;

    private void Awake()
    {
        _arRaycastManager = GetComponent<ARRaycastManager>();
        Debug.Log("tap object position x = " + gameObjectToInstantiate.transform.position.x);
        spawnedObject = GameObject.Find("Chicken_01");
    }

    private void Start()
    {
        DC = GameObject.Find("DemoController");
    }
    bool TryGetTouchPosition(out Vector2 touchPosition)
    {
        if (Input.touchCount>0)
        {
            touchPosition = Input.GetTouch(0).position;
            return true;
        }
        touchPosition = default;
        return false;
    }
    // Update is called once per frame
    /* Detect the touch position on screen and place the chicken if it is not locked */
    void Update()
    {
        foreach (Touch touch in Input.touches)
        {
            if (EventSystem.current.IsPointerOverGameObject(touch.fingerId))
            {
                // you touched at least one UI element
                return;
            }
        }
        if (!TryGetTouchPosition(out Vector2 touchPosition))
        {
            return;
        }
        if(_arRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
        {
            var hitPose = hits[0].pose;
            if(spawnedObject==null)
            {
                spawnedObject=Instantiate(gameObjectToInstantiate, hitPose.position, hitPose.rotation);
                DC.GetComponent<ChickenDemoController>().chickens.Add(spawnedObject);
            }
            if(!lock_position)
            {
                toggleLockPosition();
                spawnedObject.transform.position = hitPose.position;
                Vector3 back = Vector3.forward * -1;
                spawnedObject.transform.LookAt(new Vector3(back.x, spawnedObject.transform.position.y, back.z));
            }
        }
    }

    /* Toggle function for lock place action */
    public void toggleLockPosition()
    {
        lock_position = !lock_position;
        lockButton.SetActive(lock_position);
        unlockButton.SetActive(!lock_position);
    }
}
