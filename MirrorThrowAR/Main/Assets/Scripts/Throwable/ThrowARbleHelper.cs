using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class ThrowARbleHelper
{
    private static int ct = 0;
    private static List<float> speedCofList = new List<float>();
    private static float speedCof = GlobalStates.SpeedCoef;
    private static float error_limit = 0;

    public static float getReleaseAngle(Vector3 v) {
        return Mathf.Asin(v.y / v.magnitude) * 180 / Mathf.PI;
    }

    public static Vector3 updateReleaseAngle(Vector3 releaseVelocity, float releaseAngle) {
        /* there is a small chance if the user throw upwards, which will create a problem with the up vector.
         * in case this happens 
         */
        Vector3 m_axis = Vector3.Normalize(Vector3.Cross(releaseVelocity, Vector3.up));
        // find the new angle
        float new_releaseAngle = GlobalStates.GetAngleCoef() * releaseAngle;
        if (new_releaseAngle > 65) new_releaseAngle = 65;
        if (new_releaseAngle < -65) new_releaseAngle = -65;

        GlobalStates.lastReleaseAngleAdapted = new_releaseAngle;
        // calculate a quaternion for local rotation
        Quaternion reset = Quaternion.AngleAxis(-releaseAngle, m_axis);

        Quaternion r = Quaternion.AngleAxis(new_releaseAngle, m_axis);

        r = reset * r;

        // setup a rotation matrix
        Matrix4x4 m = Matrix4x4.Rotate(r);
        // rotate the vector
        Vector3 new_v = r * releaseVelocity;

        return new_v;
    }

    public static void AddOffsetVizPoint(float yoffset) {
        TaskLogger.addPointToDistanceLog(yoffset);
        /* TODO: add it back in the future for visualizing */
        //GameObject.Find("AR Camera").GetComponent<ThrowDiagViz>().addOffsetPoint(yoffset);
    }

    /* OBSOLETE*
    private static void SimpleAdaptiveModel(float YError) {

        // we set the initial coef;
        if (GlobalStates.speedCoefInitialized == false)
        {
            GlobalStates.SpeedCoef = GlobalStates.SimualtedLateralSpeed;
            GlobalStates.speedCoefInitialized = true;
        }

        // we do not adapt if the error is greater than 3 meter
        if (Mathf.Abs(YError) < 3)
        {
            if (YError < -0.1f)
            {
                GlobalStates.AngleCoef *= 1.1f;
                GlobalStates.SpeedCoef *= 1.2f;
                // GlobalStates.SpeedCoef = getAverageSpeedCof();
            }
            else if (YError > 0.1f)
            {
                GlobalStates.AngleCoef /= 1.1f;
                GlobalStates.SpeedCoef /= 1.2f;
                // GlobalStates.SpeedCoef = getAverageSpeedCof();
            }
        }
    }

    */
    /* step II update speed coef */
    public static float UpdateSpeedCoefStepII(float error) {
        float alpha = 1;
        error = Mathf.Min(Mathf.Abs(error), error_limit);
        error = error * alpha;
        // return a non-linear, positive 
        return error;

    }

    public static void FilteringAdaptiveCoeficients(int smoothness = 5) {
        //GlobalStates.angelCoefQueue.Enqueue(GlobalStates.AngleCoef);
        GlobalStates.speedCoefQueue.Enqueue(GlobalStates.SpeedCoef);
        GlobalStates.angleCoefQueue.Enqueue(GlobalStates.AngleCoef);

        if (GlobalStates.speedCoefQueue.Count > smoothness)
            GlobalStates.speedCoefQueue.Dequeue();

        if (GlobalStates.angleCoefQueue.Count > smoothness)
            GlobalStates.angleCoefQueue.Dequeue();


        /* update filtered coef */
        GlobalStates.filteredSpeedCoef = GetSum(GlobalStates.speedCoefQueue) / GlobalStates.speedCoefQueue.Count;
        GlobalStates.filteredAngleCoef = GetSum(GlobalStates.angleCoefQueue) / GlobalStates.angleCoefQueue.Count;

    }

    /* bit more complex model */
    public static void UpdateAdaptiveCoef() {

        /* get diff */
        GlobalStates.AngleCoef = (GlobalStates.AutoAimAngle / (GlobalStates.lastReleaseAngle + 1)) / 2.0f;

        /* adapt the speed, Step I, see Target.cs for Step II*/
        /* IMPORTANT! speed is adding a momentum in the target.cs, because we have to wait until we know the error to 
        * determine how much momentum we should add */
        GlobalStates.SpeedCoef = (GlobalStates.SimualtedLateralSpeed / (GlobalStates.lastRawReleaseLateralSpeed + 1));

        /* IMPORTANT! speed is adding a momentum in the target.cs, because we have to wait until we know the error to 
         * determine how much momentum we should add */
    }

    /* a threshold func to check when the adaption should stop 
     * currently its set to if the error is stable within 0.3f
     * for 10 consecutive times */
    private static void ExitAdaption(float YError) {
        if (GlobalStates.SumErrorYList.Count > 1)
            if (Mathf.Abs(YError - GlobalStates.SumErrorYList[GlobalStates.SumErrorYList.Count - 2]) < 0.3f)
            {
                if (ct > 10)
                    GlobalStates.reachedAdaptionTarget = true;
                ct++;
            }
    }

    private static float GetSum(Queue<float> t) {
        float v = 0;
        foreach (var a in t) {
            v += a;
        }
        return v;
    }

    public static void updateCoefficientDisplay(float dis, Text DataAngle, Text DataSpeed) {

        if (GlobalStates.reachedAdaptionTarget)
            return;

        GlobalStates.errorY.Add(dis);
       
        if (GlobalStates.errorY.Count > GlobalStates.ErrorYListSize)
        {
            float totalYError = 0;

            if (GlobalStates.ErrorYListSize > 0)
                totalYError = GlobalStates.errorY.Sum() / (GlobalStates.ErrorYListSize * 1.0f);
            else
                totalYError = dis;

            //SimpleAdaptiveModel(totalYError);
            //

            // use a list to stoGre coefs
            GlobalStates.AngleCoefList.Add(GlobalStates.AngleCoef);
            GlobalStates.SpeedSpeedCoefList.Add(GlobalStates.SpeedCoef);

            // stop adaptation after the distance increase after n=2 changes
            GlobalStates.SumErrorYList.Add(totalYError);
            GlobalStates.errorYFlatten = totalYError;
            // update the adaptation display
            DataAngle.text = "Adp status: " +GlobalStates.adaptiveModelOn+ '\n'+
                            "Y Error= " + totalYError.ToString("F3") + '\n' +
                            "Raw Angle: " + GlobalStates.lastReleaseAngle.ToString("F3") + "\n " +
                            "GroundTruth Angle:" + GlobalStates.AutoAimAngle.ToString("F3") + "\n" +   
                            "ADP Angle: " + GlobalStates.lastReleaseAngleAdapted.ToString("F3") + '\n' +
                            "Angle Coef: " + GlobalStates.AngleCoef.ToString("F3") + '\n';

            //  "\\\\" + '\n' +
            //  "Vel (modified): " + GlobalStates.lastestReleaseVelocity.magnitude + '\n' +
            //  "Velocity Coef: " + GlobalStates.SpeedCoef + '\n';
            DataSpeed.text = "Raw L Speed: " + GlobalStates.lastRawReleaseLateralSpeed.ToString("F3") + '\n' +
                    "GroundTruth L Speed: " + GlobalStates.SimualtedLateralSpeed.ToString("F3") + '\n' +
                    "Speed Coef: " + GlobalStates.SpeedCoef.ToString("F3");
            /* func to stop the adaptation*/
            //ExitAdaption(totalYError);

            GlobalStates.errorY.Clear();
            GlobalStates.errorYEpoch++;
        }
    }
    /*
    private static float getAverageSpeedCof() {
        
        speedCofList.Add( GlobalStates.GTVel.magnitude / GlobalStates.lastestReleaseVelocity.magnitude);

        if (speedCofList.Count > 3)
        {
            speedCof = speedCofList.Sum() / speedCofList.Count();
            speedCofList.Clear();
        }

        return speedCof;
    }*/

    public static void updateErrorLimit(float distance)
    {
        error_limit = distance * 0.5f;

        return;
    }
}
