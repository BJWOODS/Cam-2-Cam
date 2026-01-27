// LICENSE
//
//   This software is dual-licensed to the public domain and under the following
//   license: you are granted a perpetual, irrevocable license to copy, modify,
//   publish, and distribute this file as you see fit.

using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class BallisticMotion : MonoBehaviour
{

    // Private fields
    Vector3 lastPos;
    Vector3 impulse;
    Vector3 IniPos;
    List<Vector3> acceList;
    // set to ture, the white ball will not show
    bool AveSpeedCalculated = false;
    float gravity;


    // Methods
    void Awake()
    {
        // Keep scene heirarchy clean
       // transform.parent = GameObject.FindGameObjectWithTag("Projectiles").transform;
    }

    public void Initialize(Vector3 pos, float gravity)
    {
        transform.position = pos;
        lastPos = transform.position;
        this.gravity = gravity;
        acceList = new List<Vector3>();
    }

    void FixedUpdate()
    {
        // Simple verlet integration
        float dt = Time.fixedDeltaTime;
        Vector3 accel = -gravity * Vector3.up;

        Vector3 curPos = transform.position;
        if (IniPos == new Vector3(0,0,0))
            IniPos = curPos;

        Vector3 newPos = curPos + (curPos - lastPos) + impulse * dt + accel * dt * dt;
        acceList.Add(newPos - curPos);
        lastPos = curPos;
        transform.position = newPos;
        transform.forward = newPos - lastPos;

        impulse = Vector3.zero;

        // Z-kill
        if (transform.position.y < -5f)
            Destroy(gameObject);
        /*
        if (acceList.Count > 0 && !AveSpeedCalculated)
        {
            Vector3 s = getAveSpeed(acceList) * 37f;
            //GlobalStates.lateral_speed = Mathf.Sqrt(s.x * s.x + s.z * s.z);
            GameObject gm = GameObject.Find("mp");
            gm.transform.position = IniPos;
            gm.GetComponent<Rigidbody>().useGravity = true;
            gm.GetComponent<Rigidbody>().velocity = GlobalStates.GTVel;
            AveSpeedCalculated = true;
            acceList.Clear();
        }
        \*/
    }

    public void AddImpulse(Vector3 impulse)
    {
        this.impulse += impulse;
    }

    private Vector3 getAveSpeed(List<Vector3> l) {
        Vector3 v = new Vector3(0,0,0);
        for (int i = 0; i < l.Count; i++)
            v += l[i];

        return v/l.Count;
    }
}
