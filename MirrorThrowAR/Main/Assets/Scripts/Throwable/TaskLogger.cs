using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Portalble;
using System.IO;
using System;
using UnityEngine.Networking;
using UnityEngine.UI;

public class TaskLogger  
{

    // global syncronize indx
    private static int SyncIdx = 0;
    private static string st_file;
    
    public static string logtxt = "";
    private static bool objHit = false;
    private static StreamWriter sw;
    private static string filename = "Logger_";
    private static string writerBuffer = "";
    private static int writerBufferIdx = 0;
    private static Vector3 releaseVelocity = new Vector3(0, 0, 0);
    private static List<float> disToTarget = new List<float>();

    private static StreamWriter m_sw;


    public static void objHitTiger()
    {
        objHit = true;
    }

    public static void objHitReset()
    {
        objHit = false;
    }

    public static void saveLogString(GameObject c_object, GameObject c_target, bool onHit = false)
    {
        if (c_target == null)
            return;

        if (PortalbleGeneralController.main.ActiveHandTransform == null)
            return;

        Vector3 hand_pos = PortalbleGeneralController.main.ActiveHandTransform.position;
        Vector3 index_pos = PortalbleGeneralController.main.ActiveHandTransform.Find("../index/bone3").transform.position;
        Vector3 thumb_pos = PortalbleGeneralController.main.ActiveHandTransform.Find("../thumb/bone3").transform.position;

        string b = "";
        string releaseV = "";
        if (releaseVelocity == new Vector3(0, 0, 0))
        {
            releaseV = "0";
        }
        else
        {
            releaseV = releaseVelocity.x + ";" + releaseVelocity.y + ";" + releaseVelocity.z;
            releaseVelocity = new Vector3(0, 0, 0);
        }

        if (c_object != null)
        {
            Vector3 obj_pos = c_object.transform.position;
            Vector3 target_pos = c_target.transform.position;

            float dis = Vector3.Distance(obj_pos, target_pos);
            if (!onHit)
            {
                b = v2s(hand_pos) + "," +
                    v2s(index_pos) + "," +
                    v2s(thumb_pos) + "," +
                    v2s(obj_pos) + "," +
                    v2s(target_pos) + "," +
                    dis + "," +
                    objHit + "," +
                    getTime() + "," +
                    releaseV + ",Baseline";
            }
            else
            {
                b = v2s(hand_pos) + "," +
                    v2s(index_pos) + "," +
                    v2s(thumb_pos) + "," +
                    v2s(obj_pos) + "," +
                    v2s(target_pos) + "," +
                    dis + "," +
                    objHit + "," +
                    getTime() + "," +
                    releaseV + "," +
                    GlobalStates.AngleCoef.ToString("F3") + ";" +
                    GlobalStates.SpeedCoef.ToString("F3") + ";" +
                    GlobalStates.errorYFlatten.ToString("F3") + ";" +
                    GlobalStates.lastReleaseAngle.ToString("F3") + ";" +
                    GlobalStates.lastReleaseAngleAdapted.ToString("F3") + ";" +
                    GlobalStates.AutoAimAngle.ToString("F3") + ";" +
                    GlobalStates.lastRawReleaseLateralSpeed.ToString("F3") + ";" +
                    GlobalStates.SimualtedLateralSpeed.ToString("F3") + ";" +
                    GlobalStates.ARCamera_distance.ToString("F3");
            }
        }
        else
        {
            b = v2s(hand_pos) + "," +
                 v2s(index_pos) + "," +
                 v2s(thumb_pos) + ",0,0,0,0,0,0,0,0," + getTime() + "," + releaseV + ",NO_OBJ";
        }

        /* apply log txt */
        logtxt = b;
        write(b);

       
        
    }


    public static void init()
    {
        st_file = getFilePath(filename + "_" + GlobalStates.player_name_global + "_" + DateTime.Now.ToString("hh_mm_ss"));
        sw = File.AppendText(st_file);
        sw.WriteLine("Palm_x, Palm_y, Palm_z,IndexFinger_x, IndexFinger_y, IndexFinger_z, Thumb_x, Thumb_y, Thumb_z, Projectile_x, Projectile_y, Projectile_z," +
            " Target_x, Target_y, Target_z, Dis_proj_to_target, Is_hit, Time_since_start, Release_velocity, Params, ARCamera_distance");
    }


    public static void addPointToDistanceLog(float dis)
    {
        disToTarget.Add(dis);
    }

    public static List<float> getDisToTaret()
    {
        return disToTarget;
    }

    public static void FormatLogToCommaSeperated(List<float> f)
    {
        string s = "";
        for (int i = 0; i < f.Count; i++)
            s += f[i] + ",";
        
        WriteAll("YDis.txt", s);
    }

    public static void WriteAll(string f, string m)
    {
        // check if the writer is ready
        if (m_sw == null)
            m_sw = File.AppendText(getFilePath(f));

        //m_sw.WriteLine(m);
        //m_sw.Close();
    }

    public static void write(string m)
    { 
        
        if (sw == null) init();
        writerBuffer += m + "\n";
        writerBufferIdx++;

        if (GlobalStates.adaptiveModelOn == false && GlobalStates.timeModelMode == false)
        {
            sw.WriteLine("Normal");
        }
        else if (GlobalStates.adaptiveModelOn == true && GlobalStates.timeModelMode == false)
        {
            sw.WriteLine("adaptive on");
        }
        else if (GlobalStates.timeModelMode == true && GlobalStates.adaptiveModelOn == false)
        {
            sw.WriteLine("Time_pos_model_on");
        }
        else
        {
            Debug.Log("An error ocurred with writing the mode switches");
        }
        //sw.WriteLine("\n");


      //  sw.WriteLine(m);
       // sw.Flush();
       
    }
   
    public static void closeWriter()
    {
        if (writerBuffer != "")
        {
            sw.Write(writerBuffer);
            writerBufferIdx = 0;
            writerBuffer = "";
        }
        //sw.Close();
    }

    public static void setReleaseVelocity(Vector3 v)
    {
        releaseVelocity = v;
    }

    private static Vector3 getReleaseVelocity()
    {
        return releaseVelocity;
    }



    private static string getTime()
    {
        return DateTime.Now.Hour + ":" +
                DateTime.Now.Minute + ":" +
                DateTime.Now.Second + "."
                + DateTime.Now.Millisecond;
    }

    private static string getFilePath(string filename)
    {
        filename += ".csv";
#if UNITY_EDITOR
        return System.IO.Path.Combine(Application.dataPath, filename);
#elif UNITY_ANDROID
            return System.IO.Path.Combine(Application.persistentDataPath, filename);
#elif UNITY_IPHONE
            return System.IO.Path.Combine(Application.persistentDataPath, filename);
#else
            return System.IO.Path.Combine(Application.dataPath, filename);
#endif
    }

    private static string v2s(Vector3 vector)
    {
        string s = vector.x.ToString() + "," + vector.y.ToString() + "," + vector.z.ToString();
        return s;
    }


}