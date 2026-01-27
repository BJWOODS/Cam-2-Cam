using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;

namespace Mediapipe.HandTracking
{
    public class Process : MonoBehaviour
    {

        public bool Portalble_on = true;

        public bool Highlight_on = true;

        public bool Indicator_on = true;
        public static Process INSTANCE { get; private set; }

        public int play_fps = 24;

        public bool frame_check = true;

        public Hand current_hand = null;

        [SerializeField]
        private Orientation orientation = Orientation.PORTRAIT;

        [SerializeField]
        private InputManager frame_input_manager = null;

        [SerializeField]
        private Text debugText;

        [SerializeField]
        private GameObject[] visualGizmos;

        private const int HAND_TRACKER_RESOLUTION = 256;
        private int hand_log_id, converter_log_id;
        private int frame_idx;
        private int log_index = 0;
        
        private bool allowRecord = false;

        private float flog_index = 0f;
        [Range(0, 120)]

        // This is a string consisting of 63 floats that represent 21 landmarks 3d positions
        private string current_coords = "0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;0,0,0;";
        string saveString = "";
        string normalizedSaveString = "";
        string rawSaveString = "";

        /* todo */
        List<string> frameList = new List<string>();

        /* used to temporarily hold the joint coodinates from a cached log file */
        List<string> logList = new List<string>();

#if UNITY_ANDROID && !UNITY_EDITOR
        private AndroidJavaObject hand_tracking;
        private HandRect current_hand_rect;
#endif
#if UNITY_EDITOR
        private HandRect current_hand_rect;
#endif

        void InitializePortalble()
        {
            if (Portalble_on)
            {
#if UNITY_ANDROID && !UNITY_EDITOR
           
            AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            AndroidJavaObject currentUnityActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
            hand_tracking = new AndroidJavaObject("com.example.wrapper.HandTracking", currentUnityActivity);
            hand_tracking.Call("setResolution", HAND_TRACKER_RESOLUTION);
            // Debug.Log("TEST MediaPipe");
            // hand_tracking.Call("test");
            StartCoroutine(Quantization());
#endif
            }
        }

        void InitializeIndicator()
        {
            if (Indicator_on)
                GameObject.Find("IndicatorManager").GetComponent<Portalble.IndicatorManager>().enabled = true;
            else
                GameObject.Find("IndicatorManager").GetComponent<Portalble.IndicatorManager>().enabled = false;
        }

        void InitializeHighlight()
        {
            if (!Highlight_on)
                GameObject.Find("DemoController").GetComponent<ChickenDemoController>().toggle_highlight();
        }

        private void Start()
        {
            //Debug.Log("Process.Start() called");
            if (ScreenLog.INSTANCE != null)
            {
                hand_log_id = ScreenLog.INSTANCE.RegisterLogID();
                converter_log_id = ScreenLog.INSTANCE.RegisterLogID();
            }

#if UNITY_EDITOR
            /* Load cached landmarks from local disk to test in Unity Editor */
            string path = "Assets/StreamingAssets/normalized-landmarks-throw.txt";

            /* Read file stream with a streamreader */
            StreamReader reader = new StreamReader(path);
            string t = reader.ReadToEnd();
            string[] tlist = t.Split('\n');
            for (int i = 0; i < tlist.Length; i += 1)
            {
                logList.Add(tlist[i]);
            }
#endif

            /* Toggle Poralble-Mediapipe Android Object functions */
            InitializePortalble();

            /* Toggle portalble indicator functions */
            InitializeIndicator();

            /* Toggle virtual objects highlight effects */
            InitializeHighlight();
            
        }

        /* the code here runs before Update() function, 
         * to ensure the model is updated before assignment in the Update Function */
        private void FixedUpdate()
        {
            /* with in the Android environment, we get realtime hand data with saving posibilities */
#if UNITY_ANDROID && !UNITY_EDITOR
            //Debug.Log("Process.FixedUpdate(): hand_tracking: " + ((hand_tracking != null) ? hand_tracking.ToString() : "null"));

            
            /* currently we do not have palm data from Mediapipe, maybe added in the future */
            float[] palm_data = null; //hand_tracking.Call<float[]>("getPalmRect");
            
            /* hand_landmarks_data is the raw predicted landmarks from MediaPipe */
            float[] hand_landmarks_data = hand_tracking.Call<float[]>("getLandmarks");
            String tmp = "";

            /* parse hand's landmark data */
            if (null != hand_landmarks_data){
                for (int i = 0; i<hand_landmarks_data.Length; i+=1){
                    if ((i+1)%3 == 0){
                        tmp += hand_landmarks_data[i] + ";";
                    }
                    else{
                        tmp += hand_landmarks_data[i] + ",";
                    }
                }
            }


            if (null != palm_data) 
                current_hand_rect = HandRect.ParseFrom(palm_data);

            if (null != hand_landmarks_data)
            {
                current_hand = Hand.MakeFrom(hand_landmarks_data, current_hand_rect, debugText);
            }

            if (allowRecord){
               saveString = saveString + tmp + "\n";
               normalizedSaveString = normalizedSaveString + current_hand.GetNormalizedLandmarks() + "\n";
            }
#endif
            /* with in the Unity environment, we replay the data recorded in the Android environment */
#if UNITY_EDITOR
            if (log_index >= logList.Count)
            {
                log_index = 0;
                flog_index = 0f;
            }
            float[] hand_landmarks_data = new float[63];
            string[] landmarks = logList[log_index].Split(';');

            for (int i = 0; i < landmarks.Length - 1; i += 1)
            {
                string[] xyz = landmarks[i].Split(',');
                if (xyz[0] != "")
                {
                    hand_landmarks_data[i * 3] = (float)Convert.ToDouble(xyz[0]);
                    hand_landmarks_data[i * 3 + 1] = (float)Convert.ToDouble(xyz[1]);
                    hand_landmarks_data[i * 3 + 2] = (float)Convert.ToDouble(xyz[2]);
                }
            }

            flog_index += (float)play_fps / 60f;
            log_index = (int)flog_index;



            if (null != hand_landmarks_data)
                current_hand = Hand.MakeFrom(hand_landmarks_data, current_hand_rect, debugText);

            /* print normalized landmark finger and thumb distance */
            debugText.text = "what you calcualted";
#endif
        }

        private void Update()
        {
            /* if a Hand object exists, which means mediapipe has predicted the hand already */
            if (null != current_hand)
            {
                Vector3 v3 = current_hand.Position;
                /* coordinates in Unity system */
                string tmp = "";
                /* coodinates from MediaPipe*/
                string raw = "";
                Vector3[] raws = Hand.GetLandmarksFromRaw();
                for (int i = 0; i < current_hand.GetLandmarks().Length; i++)
                {
                    tmp = tmp + System.Math.Round(current_hand.GetLandmark(i).x, 10) + ","
                        + System.Math.Round(current_hand.GetLandmark(i).y, 10)
                        + "," + System.Math.Round(current_hand.GetLandmark(i).z, 10) + ";";

                    raw = raw + System.Math.Round(raws[i].x, 10) + ","
                        + System.Math.Round(raws[i].y, 10)
                        + "," + System.Math.Round(raws[i].z, 10) + ";";
                }
                current_coords = tmp;
            }
        }

        private void Awake()
        {
            INSTANCE = this;
            LandmarkConverter.INSTANCE = LandmarkConverter.Create(orientation);
        }
        
        /* set joints (gameobjects) to mediapie landmark coordinates */
        public void VisualizeRawLandmarks()
        {
            Vector3[] landmark = Hand.GetLandmarksFromRaw();
            for (int i = 0; i < landmark.Length; i++)
            {
                visualGizmos[i].transform.position = landmark[i];
            }
        }

        public void SetHandScale(System.Single f)
        {
            Hand.SetScale(f);
        }

        public void SetHandOffset(System.Single f)
        {
            Hand.SetOffset(f);
        }

        /* begin recording all the joint coordinates to a txt file in 
         * Android environment */
        public void AllowRecord()
        {
            allowRecord = true;
        }

        /* stop recording all the joint coordinates to a txt file in 
         * Android environment */
        public void BanRecord()
        {
            allowRecord = false;
        }

        /* save all joints data into Android device */
        public void save()
        {
            System.IO.File.AppendAllText(System.IO.Path.Combine(Application.persistentDataPath, "mediapipe-landmarks-" + DateTime.Now.ToString("yyyy''MM''dd''HH''mm") + ".txt"), saveString);
            saveString = "";
            System.IO.File.AppendAllText(System.IO.Path.Combine(Application.persistentDataPath, "normalized-landmarks-" + DateTime.Now.ToString("yyyy''MM''dd''HH''mm") + ".txt"), normalizedSaveString);
            normalizedSaveString = "";
        }


        /* send framebuffer from the video stream into the Portalble MediaPipe Wrapper */
        public IEnumerator Quantization()
        {
            while (true)
            {
                //Debug.Log("Quantization");
                yield return new WaitForEndOfFrame();
                FrameInput image = frame_input_manager.GetFrameInput();
                if (null == image) continue;
                if (!LandmarkConverter.INSTANCE.Valid())
                {
                    LandmarkConverter.INSTANCE.SetInput((float)image.width / (float)image.height);
                    LandmarkConverter.INSTANCE.SetOutput((float)Screen.width / (float)Screen.height);
                }
#if UNITY_ANDROID && !UNITY_EDITOR
                hand_tracking.Call("setFrame", image.sbyte_array);
#endif
                yield return null;
            }
        }

        public Vector3 GetPosition()
        {
            if (null == current_hand) return Vector3.zero;
            return current_hand.Position;
        }

        public Vector3 GetFingerLandmark(int index)
        {
            if (null == current_hand) return Vector3.zero;
            return current_hand.GetLandmark(index);
        }

        public string[] GetCoords()
        {
            return current_coords.Split(';');
        }
    }
}