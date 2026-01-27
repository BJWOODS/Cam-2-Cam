using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOnFalling : MonoBehaviour
{
    private GameObject Target_Object;
    private Target target;
    // Start is called before the first frame update
    void Start()
    {
        Target_Object = GameObject.Find("Target_Main");
        target = Target_Object.GetComponent<Target>();
    }

    // Update is called once per frame
    void Update()
    {
        if ((this.transform.position.z >= (Target_Object.transform.position.z - 0.2)) || 
            (this.transform.position.y < -5f | Mathf.Abs(this.transform.position.x) > 5f))
        {
            Debug.Log("The following is transform.postion.z of grabbing cube" + this.transform.position.z);
            Debug.Log("The following is transform.postion.z of target object" + Target_Object.transform.position.z);
            /* A calls B to destroy A: we need to catch a null reference exception here */
            try
            {
                target.ManualTriggerEnter(this.gameObject.GetComponent<Collider>());
            }
            catch (System.NullReferenceException e) { }

        }
        
    }
}
