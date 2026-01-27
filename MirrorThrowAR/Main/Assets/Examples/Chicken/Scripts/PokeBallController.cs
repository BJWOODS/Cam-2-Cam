using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Portalble.Functions.Grab;

public class PokeBallController : MonoBehaviour
{
    // Start is called before the first frame update
    public Animator animator;
    public Grabable grab;
    public GameObject Hand_r;
    public ChickenDemoController CDC;

    private Queue<Vector3> hand_positions; // buffer to record hand positions
    private Queue<float> hand_timer; // buffer to record time points
    private float timer;
    private bool grabbed = false;

    void Start()
    {
        hand_positions = new Queue<Vector3>();
        hand_timer = new Queue<float>();
        Hand_r = GameObject.Find("Hand_r");
        CDC = GameObject.Find("DemoController").GetComponent<ChickenDemoController>();

    }

    // Update is called once per frame
    /* Update function records the hand positions in a fixed-size buffer
     * It detects the throwing action */
    void Update()
    {
        //if (grab.IsBeingGrabbed())
        //{
        //    if (!grabbed)
        //    {
        //        timer = 0;
        //        hand_timer.Enqueue(timer);
        //        hand_positions.Enqueue(Hand_r.transform.GetChild(1).GetChild(0).position);
        //        grabbed = true;
        //        return;
        //    }
        //    timer += Time.deltaTime;
        //    hand_positions.Enqueue(Hand_r.transform.GetChild(1).GetChild(0).position);
        //    hand_timer.Enqueue(timer);
        //    while (hand_positions.Count > 15)
        //    {
        //        hand_positions.Dequeue();
        //        hand_timer.Dequeue();
        //    }
        //}
        //if (grabbed && !grab.IsBeingGrabbed())
        //{
        //    setVelocity();
        //    grabbed = false;
        //}
    }

    /* Set the velocity and angle of throwing once the object is released by hand */
    private void setVelocity()
    {
        Vector3 lastPos = hand_positions.Dequeue();
        Vector3 pos = hand_positions.Dequeue();
        float lastT = hand_timer.Dequeue();
        float t = hand_timer.Dequeue();
        Vector3 initialP = pos;
        float initialT = t;
        Vector3[] v = new Vector3[15];
        int i = 0;
        Vector3 vel = new Vector3(0,0,0);
        
        while (hand_positions.Count > 0)
        {
            pos = hand_positions.Dequeue();
            t = hand_timer.Dequeue();
            v[i] = (pos - lastPos) / (t-lastT);
            vel += v[i];
            i++;
            lastPos = pos;
            lastT = t;
        }
        
        Rigidbody rb = GetComponent<Rigidbody>();
        rb.velocity = (lastPos - initialP) / (lastT - initialT) * 5; // 5 here is a magic number
        rb.angularVelocity = Vector3.zero;
    }
}
