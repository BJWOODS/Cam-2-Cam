using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class Target : MonoBehaviour
{
    private Rigidbody rBody;
    private MeshRenderer meshRend;

    public int lifetime = 20;
    public GameObject aim;
    public static float dis_to_target;
    public AudioSource splatAudio;
    public AudioSource distAudio;

    private Text DataAngle, DataSpeed;

    private int curr_life = 0;
    Vector3 prev_pos = Vector3.zero;
    public GameObject cross;
    private Color defaultColor;
    private int hitct = 0;
    private Text statText;

    public delegate void EventHandler();
    public event EventHandler CollideWithObject;
    
    // Start is called before the first frame update
    void Start()
    {
        rBody = GetComponent<Rigidbody>();

        BoxCollider boxCollider = gameObject.GetComponent<BoxCollider>();
        boxCollider.isTrigger = true;

        meshRend = gameObject.GetComponent<MeshRenderer>();
        defaultColor = meshRend.material.color;

        //statText = GameObject.Find("sysText").GetComponent<Text>();

        DataAngle = GameObject.Find("DataAngle").GetComponent<Text>();
        DataSpeed = GameObject.Find("DataSpeed").GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {


    }


    // Target is Hit
    private void OnTriggerEnter(Collider other)
    {
        if ((!(other.gameObject.tag.Equals("InteractableObj")) && !(other.gameObject.tag.Equals("simObj")))) { return; }
        if (other.gameObject.name == "emptySphere") { return; }
        meshRend.material.color = Color.green;
        StartCoroutine(fadeOut());

        GameObject m_cross_indicator = Instantiate(cross, other.transform.position, Quaternion.identity);
        GlobalStates.m_cross_position = Instantiate(cross, other.transform.position, Quaternion.identity);
        m_cross_indicator.tag = "cross";

        //adding sound source here
        
        dis_to_target = other.transform.position.y - transform.position.y;
        Debug.Log("Math.Abs calculated dis_to_target: " + System.Math.Abs(dis_to_target));
        if (System.Math.Abs(dis_to_target) > 5.0f)
        {
            splatAudio.volume = 0.10f;
            Debug.Log("Volume set at 0.10");
        }
        else if(System.Math.Abs(dis_to_target) > 3.0f)
        {
            splatAudio.volume = 0.30f;
            Debug.Log("Volume set at 0.30");
        }
        else if(System.Math.Abs(dis_to_target) > 1.0f)
        {
            splatAudio.volume = 0.50f;
            Debug.Log("Volume set at 0.50");
        }
        else
        {
            //Bullseye or pretty darn close
            splatAudio.volume = 1.0f;
            Debug.Log("Volume set at 1.0");
        }
        splatAudio.Play();

        if (other.gameObject.name == "emptySphere")
        {
            GlobalStates.simCollision = true;
        }

        Debug.Log("Distance to target: " + dis_to_target);

        /* add regression line */
        if (GlobalStates.adaptiveModelOn)
        {
            /* adaptive model here needs step II*/
            GlobalStates.SpeedCoef = GlobalStates.SpeedCoef + ThrowARbleHelper.UpdateSpeedCoefStepII(dis_to_target);
            ThrowARbleHelper.updateCoefficientDisplay(dis_to_target, DataAngle, DataSpeed);
        }

        //ThrowARbleHelper.AddOffsetVizPoint(dis_to_target);

        m_cross_indicator.transform.Translate(new Vector3(0, 0, gameObject.transform.localScale.z / 1.998f));
        GlobalStates.m_cross_position.transform.Translate(new Vector3(0, 0, gameObject.transform.localScale.z / 1.998f));

        //taskLogger.objHitTiger();
        TaskLogger.objHitTiger();
        TaskLogger.saveLogString(other.transform.gameObject, aim, true);
        TaskLogger.objHitReset();
        Destroy(other.gameObject);

        StartCoroutine(deleteCross(m_cross_indicator));
        hitct++;

        //Destroying object to check if it exists
        if (other.tag == "simObj")
        {
            Destroy(other);
        }
    }

    /* same as OnTriggerEnter */
    public void ManualTriggerEnter(Collider other)
    {
        OnTriggerEnter(other);
    }

    // Target Reset
    private void OnTriggerExit(Collider other)
    {

    }

    IEnumerator fadeOut()
    {

        //yield on a new YieldInstruction that waits for 5 seconds.
        yield return new WaitForSeconds(1);
        meshRend.material.color = defaultColor;
    }

    IEnumerator deleteCross(GameObject o)
    {

        //yield on a new YieldInstruction that waits for 5 seconds.
        yield return new WaitForSeconds(2);
        Destroy(o);
    }
}



































































































































