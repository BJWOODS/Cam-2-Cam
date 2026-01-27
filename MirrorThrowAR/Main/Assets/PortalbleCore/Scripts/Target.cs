using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using System; 


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
    private GameObject pika_particle;

    public delegate void EventHandler();
    public event EventHandler CollideWithObject;
    public Material greyCrossMat;

    public GameObject impactParticle; 
    
    // Start is called before the first frame update
    void Start()
    {
        pika_particle = GameObject.Find("Particle_GameObject");
        rBody = GetComponent<Rigidbody>();

        BoxCollider boxCollider = gameObject.GetComponent<BoxCollider>();
        boxCollider.isTrigger = true;

        meshRend = gameObject.GetComponent<MeshRenderer>();
        defaultColor = meshRend.material.color;

       

        //DataAngle = GameObject.Find("DataAngle").GetComponent<Text>();
        //DataSpeed = GameObject.Find("DataSpeed").GetComponent<Text>();


        // Display the string using Unity's GUI system



    }
 
    // Update is called once per frame
    void Update()
    {


    }

    public Material dimMaterial;
    // Target is Hit
    private void OnTriggerEnter(Collider other)
    {
 
        if ((!(other.gameObject.tag.Equals("InteractableObj")) && !(other.gameObject.tag.Equals("simObj")))) { return; }
        if (other.gameObject.name == "emptySphere") { return; }
        meshRend.material.color = Color.green;

        StartCoroutine(fadeOut());


            foreach (GameObject fooObj in GameObject.FindGameObjectsWithTag("cross"))
            {
                fooObj.GetComponent<MeshRenderer>().material = greyCrossMat;
            }

        GameObject m_cross_indicator = Instantiate(cross, other.transform.position, Quaternion.identity);
        GlobalStates.m_cross_position = Instantiate(cross, other.transform.position, Quaternion.identity);
        m_cross_indicator.tag = "cross";
        if(m_cross_indicator)
        {
            impactParticle.transform.position = m_cross_indicator.transform.position;
            double y_dist_squared = 0;
            double x_dist_squared = 0;
            double z_dist_squared = 0;
            double sum_of_dis_squared = 0;
            double euclidean_dist_from_target = 0;

            x_dist_squared = Math.Pow(this.transform.position.x - m_cross_indicator.transform.position.x, 2);
            y_dist_squared = Math.Pow(this.transform.position.y - m_cross_indicator.transform.position.y,2);
            z_dist_squared = Math.Pow(this.transform.position.z - m_cross_indicator.transform.position.z, 2);

            sum_of_dis_squared = x_dist_squared + y_dist_squared + z_dist_squared;
            euclidean_dist_from_target = Math.Sqrt(sum_of_dis_squared);
            if (euclidean_dist_from_target <= 0.25)
            {
                impactParticle.GetComponent<ParticleSystem>().Play();
            }
            Debug.Log("The Euclidean distance of the pokeball target: " + euclidean_dist_from_target);

        }
        

        
        dis_to_target = other.transform.position.y - transform.position.y;
        Debug.Log("Math.Abs calculated dis_to_target: " + System.Math.Abs(dis_to_target));
       
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

        

        m_cross_indicator.transform.Translate(new Vector3(0, 0, gameObject.transform.localScale.z / 1.998f));
        GlobalStates.m_cross_position.transform.Translate(new Vector3(0, 0, gameObject.transform.localScale.z / 1.998f));


        TaskLogger.objHitTiger();
        TaskLogger.saveLogString(other.transform.gameObject, aim, true);
        TaskLogger.objHitReset();
        Destroy(other.gameObject);

        StartCoroutine(deleteCross(m_cross_indicator));
        hitct++;

    
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
