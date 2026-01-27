using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoAim : MonoBehaviour
{    
    
    // Inspector fields
    GameObject mTarget;

    [SerializeField]
    GameObject projPrefab;
   // private float mHeight = 1;
   // private float mInitialVelocity = 30;
    private float mGravity = 9.8f;


    public void AutoProject(Vector3 beginPos, float projSpeed) {

        mTarget  = GameObject.Find("Target_Main");
        if (mTarget == null) { Debug.Log("Unable to find projectile!"); return; }

        //Vector3 targetPos = curTarget.aimPos.position;
        Vector3 targetPos = mTarget.transform.position;
        Vector3 projPos = beginPos;

        Vector3 diff = targetPos - projPos;
        Vector3 diffGround = new Vector3(diff.x, 0f, diff.z);
       // float projSpeed = mInitialVelocity;
        float gravity = mGravity;
        Vector3[] solutions = new Vector3[2];
        int numSolutions;

        numSolutions = fts.solve_ballistic_arc(projPos, projSpeed, targetPos, gravity, out solutions[0], out solutions[1]);

        Vector3 velocity;
        float m_gravity = -9.8f;


        if (numSolutions > 0)
        {
            transform.forward = diffGround;

            var proj = GameObject.Instantiate<GameObject>(projPrefab);
            var motion = proj.GetComponent<BallisticMotion>();
            motion.Initialize(projPos, gravity);
                
            //var index = i % numSolutions;
            var impulse = solutions[0];
            Debug.Log("Solution 0: " + solutions[0]);
            Debug.Log("Solution 1: " + solutions[1]);
            GlobalStates.SimualtedLateralSpeed = Mathf.Sqrt(impulse.x * impulse.x + impulse.y * impulse.y);
            GlobalStates.AutoAimAngle = ThrowARbleHelper.getReleaseAngle(impulse);
            motion.AddImpulse(impulse);

        }
    }

    public void ExportYDistance() {
        TaskLogger.FormatLogToCommaSeperated(TaskLogger.getDisToTaret());
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
