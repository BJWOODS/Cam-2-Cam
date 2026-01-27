using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GlobalStates
{
    // some global states stored here
    public static bool isShift = false;
    // If the grid is set to be visible
    public static bool isGridVisible = true;
    // If the shadow is visible
    public static bool isShadowVisible = true;

    public static bool isIndicatorEnabled = true;

    /* using filtered coef instead of instant coef
     * promoting more consistent performance */
    public static bool usingFilteredCoef = true;
    public static bool isTargetHit = false; 
    public static Portalble.PortalbleConfig globalConfigFile = new Portalble.PortalbleConfig();

    private static Text debuglog;
    private static Text debuglog2;
    private static Text debuglog3;

    public static float ARCamera_distance;
    public static string player_name_global = ""; 
/*
    public static void DebugLog(string str)
    {
        if (debuglog)
            debuglog.text = str;
        else
            debuglog = GameObject.Find("DebugLog").GetComponent<Text>();
    }
*/

    /* using filtered coef instead of instant coef
         * promoting more consistent performance */


    public static float GetSpeedCoef()
    {
        if (usingFilteredCoef)
            return filteredSpeedCoef;
        else
            return SpeedCoef;
    }

    public static float GetAngleCoef()
    {
        if (usingFilteredCoef)
            return filteredAngleCoef;
        else
            return AngleCoef;

    }


    public static bool resetFingerCount = false;
    /* Global States code copied from Throwable */
    //Actual hit point from user
    public static Vector3 groundImpulse = new Vector3(0, 0, 0);
    public static GameObject m_cross_position = new GameObject();

    public static List<double> threshold_0 = new List<double>();
    public static List<double> threshold_1 = new List<double>();
    public static List<double> threshold_2 = new List<double>();
    public static List<double> threshold_3 = new List<double>();

    public static List<Vector3> groundImpulseAry = new List<Vector3>();

    /* adaptive throw power */
    public static bool adaptiveThrowPowerOn = false;

    /* threshold model*/
    public static bool thresholdModel = false;

    /* adaptive model for no previous training*/
    public static bool adaptiveModelOn = false;

    public static float lastReleaseAngle = 0;

    public static float lastReleaseAngleAdapted = 0;

    public static float lastRawReleaseLateralSpeed = 0;

    public static bool speedCoefInitialized = false;

    public static Vector3 lastADPSpeed = new Vector3(0, 0, 0);

    public static List<float> errorY = new List<float>();

    public static List<float> SumErrorYList = new List<float>();

    public static List<float> AngleCoefList = new List<float>();

    public static List<float> SpeedSpeedCoefList = new List<float>();

    public static bool reachedAdaptionTarget = false;

    public static int AdaptionCoundIdx = 0;

    public static int errorYEpoch = 0;
    public static int ErrorYListSize = 0;

    public static float SimualtedLateralSpeed = 0;

    public static float AutoAimAngle = 0;

    public static float AngleCoef = 1;

    public static float SpeedCoef = 1;

    public static float filteredSpeedCoef = 1;

    public static Queue<float> angelCoefQueue = new Queue<float>();

    public static Queue<float> speedCoefQueue = new Queue<float>();

    public static float errorYFlatten = 0;

    public static GameObject latestManipulatedObj;

    public static List<Vector3> posHist = new List<Vector3>();

    public static bool isBallReleased = false;

    public static bool timeModelMode = false;
    public static int sceneIterator = 0;
    public static bool simCollision = false;

    public GameObject pathMarkSphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);



    public static float filteredAngleCoef = 1;

    public static Queue<float> angleCoefQueue = new Queue<float>();






}
