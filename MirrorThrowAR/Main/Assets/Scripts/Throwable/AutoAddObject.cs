using System.Net;
using System.Net.Cache;
using System.Security.Cryptography.X509Certificates;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Portalble;
using UnityEngine.SceneManagement; 
//using LootLocker.Requests; 
using Portalble.Functions.Grab;
using UnityEngine.UI;
using System.Linq;

public class AutoAddObject : MonoBehaviour
{

    public float time = 1.0f;
    public Grabable[] grab_objects;
    public Material wood_mat;
    public GameObject[] special_lights;
    protected bool use_wood = false;
    protected int grab_object_index = 0;
    private float hold_time;
    private Transform last_hand;
    bool initialized = false;
    bool cooldown = false;
    bool cooldown_process = false;
    GameObject c_object;
    GameObject c_target;

    [SerializeField]
    private Vector3 projectile_default_scale = new Vector3(0.02f, 0.02f, 0.02f);

    [SerializeField]
    private bool AutoProject = true;
    

    [SerializeField]
    private float weight_defult = 0.5f;

    [SerializeField]

    private bool startLogging = false;
    private int Obj_idx = 0;

    AutoAim aimManager;

    [SerializeField]
    Text statusText;


    [SerializeField]

    private Color c_color = new Color(0.35f, 0.35f, 0.25f);

    private bool projectileReady = false;

    private Transform ar_camera_transform;
    private Transform target_transform;


    private bool AutoAdd = false;
    GameObject ReadyButton;

    void Start()
    {
        
        hold_time = 0;
        last_hand = null;
        
        aimManager = transform.GetComponent<AutoAim>();
        ar_camera_transform = GameObject.Find("AR Session Origin/AR Camera").transform;
        target_transform = GameObject.Find("Target_Main").transform;
        ReadyButton = GameObject.Find("Canvas/StartButton");
        //readyToLog();
    }


    // Update is called once per frame
    void Update()
    {
        if (AutoAdd)
        {
     
            PortalbleGeneralController pgc = PortalbleGeneralController.main;
            if (pgc == null)
            {
                Debug.LogWarning("Cannot find PortalbleGeneralController");
                return;
            }
            Transform thand = pgc.ActiveHandTransform;
            GlobalStates.ARCamera_distance = Vector3.Distance(ar_camera_transform.position, target_transform.position);
            //GlobalStates.DebugLog("Distance: " + GlobalStates.ARCamera_distance);
            if (pgc.ActiveHandGesture != "pinch" || thand != last_hand || thand == null)
                hold_time = 0;
            else
                hold_time += Time.deltaTime;
            last_hand = thand;

            if (hold_time >= time)
            {
                SpawnAnObject();
            }
            if (startLogging)
                TaskLogger.saveLogString(c_object, c_target);

            if (projectileReady & AutoProject)
            {
                if (PortalbleGeneralController.main.ActiveHandGesture != "pinch")
                {
                    projectileReady = false;
                    aimManager.AutoProject(PortalbleGeneralController.main.ActiveHandTransform.position, 10);
                }
            }
        }

    }


    public void AdaptiveModelOn()
    {
        GlobalStates.adaptiveModelOn = true;

    }


    public void ThresholdModelOn()
    {
        GlobalStates.thresholdModel = true;
    }
/*
    public void stopLog()
    {
        startLogging = false;
        TaskLogger.closeWriter();
        alert("Logging complete! Retrieve the log file! Quitting in 3 seconds!");
        StartCoroutine(quitin3sec());
    }
*/
    IEnumerator quitin3sec()
    {
        yield return new WaitForSeconds(3);
        Application.Quit();
    }
/*
    public void alert(string mes)
    {
        statusText.text = mes;
    }


    public void readyToLog()
    {
        if (fetchTargetFromScene())
        {
            TaskLogger.init();
            startLogging = true;
            alert("Logging start!");
        }
        else
        {
            alert("place the target first!");
        }
    }

    private bool fetchTargetFromScene()
    {
        c_target = GameObject.Find("aim");
        if (c_target == null)
        {
            alert("unable to find target! make sure you generate it!");
            return false;
        }
        return true;
    }
*/

    public void SetGrabObjectIndex(int index)
    {
        if (index < grab_objects.Length && index >= 0)
        {
            grab_object_index = index;
        }
    }

    public void SetUseWood(bool flag)
    {
        use_wood = flag;
    }

    public void SetLights(bool flag)
    {
        foreach (GameObject light in special_lights)
        {
            light.SetActive(flag);
        }
    }

    void SpawnAnObject()
    {
        if (grab_objects.Length > 0)
        {
            if (Grab.Instance != null && !Grab.Instance.IsBusy())
            {
                if (!cooldown)
                {
                    // try to find the middle point of two tips
                    Transform index_tip = last_hand.Find("../index/bone3");
                    Transform thumb_tip = last_hand.Find("../thumb/bone3");

                    if (index_tip != null && thumb_tip != null)
                    {
                        Vector3 middlepoint = (index_tip.position + thumb_tip.position) / 2.0f;
                        c_object = Instantiate(grab_objects[grab_object_index], middlepoint, Quaternion.identity).transform.gameObject;
                        c_object.SetActive(false);
                        c_object.GetComponent<Renderer>().material.SetColor("_Color", c_color);
                        c_object.name = grab_objects[grab_object_index].name + "_" + Obj_idx;
                        
                        if (use_wood && wood_mat != null)
                            c_object.GetComponent<Renderer>().material = wood_mat;
                        c_object.SetActive(true);

                        cooldown = true;
                    }
                    else
                    {
                        c_object = Instantiate(grab_objects[grab_object_index], last_hand.position + last_hand.rotation * new Vector3(0f, 0.03f, 0.03f), Quaternion.identity).transform.gameObject;
                        c_object.SetActive(false);
                        c_object.GetComponent<Renderer>().material.SetColor("_Color", c_color);
                        c_object.name = grab_objects[grab_object_index].name + "_" + Obj_idx;

                        if (use_wood && wood_mat != null)
                            c_object.GetComponent<Renderer>().material = wood_mat;
                        c_object.SetActive(true);
                        cooldown = true;
                    }
                    Obj_idx++;
                    projectileReady = true;
                }
                else if (!cooldown_process)
                {
                    cooldown_process = true;
                    Invoke("ResetCooldown", 0.5f);
                }
            }

        }
    }

    void ResetCooldown()
    {
        cooldown_process = false;
        if (Grab.Instance.IsBusy())
        {
            return;
        }
        if (c_object != null && last_hand != null)
        {
            if ((c_object.transform.position - last_hand.transform.position).sqrMagnitude <= 0.02f)
            {
                return;
            }
        }
        cooldown = false;
    }
/*
    private void OnApplicationQuit()
    {
        stopLog();
    }

    private void OnApplicationPause()
    {
        stopLog();
        
    }
  */  
    public void ToggleAutoAdd()
    {
        AutoAdd = !AutoAdd;
        Destroy(ReadyButton);
    }
}