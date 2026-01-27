using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Portalble;
using Portalble.Functions.Grab;

public class BallisticTrack : MonoBehaviour
{
    // Start is called before the first frame update
    private GameObject target;
    private GameObject trackObject;
    private float m_throwPower;
    Grabable grabable;

    void Start()
    {
        target = GameObject.Find("Target_Main");
        grabable = GetComponent<Grabable>();
        trackObject = GameObject.Find("VMICls");
    }

    private void Update()
    {
        if (grabable.IsBeingGrabbed())
        {

            if (GlobalStates.adaptiveThrowPowerOn)
            {
                float distance = Vector3.Distance(target.transform.position, Camera.main.transform.position);
                m_throwPower = distance * 20 * (1 / Time.deltaTime) / 120;
            }
            else
                m_throwPower = 25;
            Vector3 speed = Grab.Instance.GetCurrentReleaseVelocity();
            CalculateEndPosition(transform.position, speed * m_throwPower);
        }
    }

    public void CalculateEndPosition(Vector3 IniPos, Vector3 impulse)
    {
        if (impulse == Vector3.zero)
            return;
        
        Vector3 lastPos = IniPos;
        Vector3 curPos = IniPos;
        
        while((curPos.z * curPos.z + curPos.x * curPos.x) < (target.transform.position.z * target.transform.position.z + target.transform.position.x * target.transform.position.x))
        {
            if (curPos.y < -5f)
                break;
            float dt = Time.deltaTime;
            Vector3 accel = -Physics.gravity.magnitude * Vector3.up;

            Vector3 newPos = curPos + (curPos - lastPos) + impulse * dt + accel * dt * dt;
            //acceList.Add(newPos - curPos);
            lastPos = curPos;
            curPos = newPos;

            impulse = Vector3.zero;
        }
        trackObject.transform.position = curPos;
    }
}
