using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Portalble.Functions.Grab
{
    /// <summary>
    /// For grabbing collider
    /// </summary>
    [RequireComponent(typeof(Collider))]
    [RequireComponent(typeof(Rigidbody))]
    public class GrabCollider : MonoBehaviour
    {
        /// <summary>
        /// Collider Scalor, when fingers are in collider, the collider should expand;
        /// </summary>
        private float m_expandScalor = 2f;


        /* TODO: not sure what does this do, double check */
        /*public float ExpandScalor {
            set {
                DeExpand();
                if (value >= 0.5f)
                    m_expandScalor = value;
                else
                    m_expandScalor = 1.2f;
            }
            get {
                return m_expandScalor;
            }
        }
        */

        /// <summary>
        /// a instance for grab visualizer
        /// </summary>
        public GrabColliderVisualizer visualizer;
        /// <summary>
        /// Whether or not use automatic expand scalor.
        /// </summary>
        public bool m_automaticExpand = true;
        /// <summary>
        /// Corresponding grabable object.
        /// </summary>
        /// 
        public bool showVisualizer = true;


        public Grabable m_grabObj;
        /// <summary>
        /// The number of left fingers (actually it's finger bones) are in collider
        /// </summary>
        private int m_leftHandFingerIn = 0;
        /// <summary>
        /// The number of right fingers (actually it's finger bones) are in collider
        /// </summary>
        private int m_rightHandFingerIn = 0;
        /// <summary>
        /// The threshold of the number of fingers.
        /// </summary>
        /// set to 3 to activate the palm flipping issue
        private const int FINGER_THRESHOLD = 4;
        /// <summary>
        /// Flag, if it's ready for grabbing, it's true.
        /// </summary>
        private bool m_entered = false;
        /// <summary>
        /// Flag, if it's expanded, it's true.
        /// </summary>
        private bool m_expanded = false;
        /// <summary>
        /// Whether it's able to expand itself.
        /// </summary>
        private bool m_ableToExpand = true;

        private Dictionary<Collider, int> m_intersectFingers;

        // Use this for initialization
        void Start()
        {
            // Set kinematic in order to avoid physics
            Rigidbody rb = GetComponent<Rigidbody>();
            if (!rb.isKinematic)
                rb.isKinematic = true;

            // If the collider is mesh collider, make sure to use convex one.
            Collider collider = GetComponent<Collider>();
            if (collider.isTrigger == false)
            {
                collider.isTrigger = true;
            }
            if (collider is MeshCollider)
            {
                MeshCollider mcd = (MeshCollider)collider;
                if (mcd.convex == false)
                {
                    mcd.convex = true;
                }
            }

            if (m_grabObj == null && transform.parent != null)
            {
                m_grabObj = transform.parent.GetComponent<Grabable>();
            }

            //StartCoroutine(delayedVisualization());
            m_intersectFingers = new Dictionary<Collider, int>();

        }

        /* this is the beginning event to grab */
        void OnTriggerEnter(Collider other)
        {
            // Don't want palm
            if (other.name == "palm")
                return;
            if (other.transform.parent == null || other.transform.parent.parent == null)
                return;

            // in case we have duplicated data.
            if (m_intersectFingers.ContainsKey(other))
                return;

            if (other.transform.parent.parent.name == "Hand_l")
            {
                m_leftHandFingerIn++;
            }
            else if (other.transform.parent.parent.name == "Hand_r")
            {
                m_rightHandFingerIn++;
            }
            else
            {
                return;
            }

            m_intersectFingers.Add(other, 1);

            // meaningless if it's already entered.
            if (m_entered)
                return;

            // if it's locked, don't change anything
            if (m_ableToExpand == false)
                return;

            if (m_leftHandFingerIn >= FINGER_THRESHOLD)
            {
                // Tell it to be grabbed
                if (m_grabObj != null)
                {
                    m_grabObj.OnGrabTriggerEnter(this, true);
                    m_entered = true;
                    Expand(other.transform.parent.parent);
                }
            }
            else if (m_rightHandFingerIn >= FINGER_THRESHOLD)
            {
                // Tell it to be grabbed
                if (m_grabObj != null)
                {
                    m_grabObj.OnGrabTriggerEnter(this, false);
                    m_entered = true;
                    Expand(other.transform.parent.parent);

                    if (showVisualizer)
                        visualizer.enabled = true;
                }
            }
        }

        void OnTriggerStay(Collider other)
        {
            if (m_intersectFingers.ContainsKey(other))
                m_intersectFingers[other] = 1;
        }

        void FixedUpdate()
        {
            // If Stay isn't called for any collider for more than 5 times, remove it.
            if (m_intersectFingers.Count == 0)
                return;

            List<Collider> removed_keys = new List<Collider>();
            List<Collider> keys = m_intersectFingers.Keys.ToList();

            foreach (Collider key in keys)
            {
                if (m_intersectFingers.ContainsKey(key))
                {

                    m_intersectFingers[key] -= 1;
                    if (m_intersectFingers[key] < 0)
                    {
                        removed_keys.Add(key);
                    }
                }
            }

            foreach (Collider key in removed_keys)
            {
                OnTriggerExit(key);
            }

            if (GlobalStates.resetFingerCount)
            {
                m_rightHandFingerIn = 0;
                m_leftHandFingerIn = 0;
                DeExpand();

                /* things in hand */
                if (m_grabObj != null)
                {
                    m_grabObj.OnGrabTriggerExit();
                }
                m_entered = false;

               // GlobalStates.DebugLog("Force release! Finger ct:" + m_rightHandFingerIn + ",g:" + m_grabObj.GetType());
                GlobalStates.resetFingerCount = false;
                GlobalStates.latestManipulatedObj = null;
            }
        }

        void OnTriggerExit(Collider other)
        {
            if (other.name == "palm")
                return;

            if (other.transform.parent == null || other.transform.parent.parent == null)
                return;

            if (!m_intersectFingers.ContainsKey(other))
                return;

            if (other.transform.parent.parent.name == "Hand_l")
            {
                m_leftHandFingerIn--;
            }
            else if (other.transform.parent.parent.name == "Hand_r")
            {
                m_rightHandFingerIn--;
            }

            m_intersectFingers.Remove(other);

            // Only exit when already entered
            if (!m_entered)
                return;

            if (m_leftHandFingerIn < FINGER_THRESHOLD && m_rightHandFingerIn < FINGER_THRESHOLD)
            {
                DeExpand();
                /* things in hand */
                if (m_grabObj != null)
                {
                    m_grabObj.OnGrabTriggerExit();
                }
                m_entered = false;
            }
        }

        private IEnumerator delayedVisualization()
        {
            // Debug.Log("OnCoroutine: " + Time.time);
            yield return new WaitForSeconds(0.5f);
            if (showVisualizer)
                visualizer.enabled = true;
        }

        void Expand(Transform hand)
        {
            if (m_expanded)
                return;

            if (!m_automaticExpand)
            {
                transform.localScale = transform.localScale * m_expandScalor;
                m_expanded = true;
            }
            else
            {
                if (hand != null)
                {
                    Transform palm = hand.Find("metalhand_r/R_Wrist");
                    if (palm != null)
                    {
                        Vector3 rayDir = transform.position - palm.position;
                        float finalDistance = rayDir.magnitude;
                        // Collider cd = GetComponent<Collider>();

                        Ray r = new Ray(palm.position, rayDir);
                        RaycastHit[] rh = Physics.RaycastAll(r, finalDistance + 1.0f);
                        m_expandScalor = 1.2f;
                        foreach (RaycastHit h in rh)
                        {
                            if (h.collider.gameObject == gameObject)
                            {
                                m_expandScalor = finalDistance / (finalDistance - h.distance);
                            }
                        }
                    }
                    transform.localScale = transform.localScale * m_expandScalor;
                    m_expanded = true;
                }
            }
        }

        void DeExpand()
        {
            if (m_expanded)
            {
                if (showVisualizer)
                    visualizer.enabled = false;
                transform.localScale = transform.localScale / m_expandScalor;
                m_expanded = false;
            }
        }

        public void SetLock(bool lock_flag)
        {
            m_ableToExpand = !lock_flag;

            if (m_expanded && lock_flag)
            {
                DeExpand();
            }
        }
    }
}