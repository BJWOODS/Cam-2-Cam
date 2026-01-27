using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleThrowController : MonoBehaviour
{
    // Start is called before the first frame update
    GestureControl gestureControl;
    GameObject Hand_r;
    AutoAim aimManager;

    private string lastGesture;
    void Start()
    {
        aimManager = transform.GetComponent<AutoAim>();
        Hand_r = GameObject.Find("Hand_r");
        gestureControl = Hand_r.GetComponent<GestureControl>();
    }

    // Update is called once per frame
    void Update()
    {
        if (gestureControl.bufferedGesture() != "pinch")
        {
            aimManager.AutoProject(Hand_r.transform.GetChild(5).position, 10);
        }
    }
}
