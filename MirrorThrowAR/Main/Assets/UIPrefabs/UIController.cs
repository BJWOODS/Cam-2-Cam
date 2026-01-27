using System.Collections;
using System.Collections.Generic;
using System; 
using UnityEngine;
using UnityEngine.UI;
//using GoogleARCore.Examples.Common;

public class UIController : MonoBehaviour {
    public Portalble.PortalbleGeneralController m_PortalbleController;

	public GameObject m_GCPAwake;
	public GameObject m_GCP;
	public GameObject m_paintButtons;
    private GameObject m_rightPanel;

    public GameObject m_startButton;
    public GameObject m_endButton;

    public GameObject m_GameButton;
    public GameObject m_GameLayer;

    public GameObject m_toggleSmoothingButton;

    public GameObject m_ModelToggleButton;
    public Text m_ModelToggleButtonText;
    public GameObject m_timeModelButton;
    public Text m_TimeModButtonText;
    public Text camsOnDeviceText; 

    //bools
    private bool m_game_show = false;
    private bool m_show = true;
    private bool m_GCP_show = false;
    private bool m_start_show = true;

    //planes
    private GameObject[] m_planes;
    public string myString = "Hello, Canvas Text!";
    public Canvas canvas;


    void Start() {
        if (m_PortalbleController == null) {
            m_PortalbleController = FindObjectOfType<Portalble.PortalbleGeneralController>();
        }
        /*
        if (GlobalStates.adaptiveModelOn)
        {
            m_ModelToggleButtonText.text = "Adap";
        }
        else
        {
            m_ModelToggleButtonText.text = "Norm";
        }
        */

        string cameraNames = "Cameras: ";
        WebCamDevice[] webCamDevices = WebCamTexture.devices;
        foreach (WebCamDevice camDevice in webCamDevices)
        {
            cameraNames += camDevice.name + ", ";
        }

        // Remove the trailing comma and space
        cameraNames = cameraNames.TrimEnd(',', ' ');

        Debug.Log(cameraNames);

        // Assuming camsOnDeviceText is a Text component
        if (webCamDevices.Length > 0)
        {
            camsOnDeviceText.text = "Number of cameras: " + webCamDevices.Length + "\n" + cameraNames;
        }


        GameObject textObject = new GameObject("DynamicText");
        textObject.transform.SetParent(canvas.transform);

        Text textComponent = textObject.AddComponent<Text>();
        textComponent.text = myString;

        CanvasRenderer canvasRenderer = textObject.AddComponent<CanvasRenderer>();
        
    }

    public void toggleGame()
    {
        m_game_show = !m_game_show;

        m_GameLayer.SetActive(m_game_show);
    }

    public void toggleStartEnd() {
        m_start_show = !m_start_show;
        m_endButton.SetActive(!m_start_show);
        m_startButton.SetActive(m_start_show);
    }

    public void ToggleSmoothing()
    {
        Text t = m_toggleSmoothingButton.GetComponentInChildren<Text>();

        // Toggle Kalman filter. Change button text accordingly.
        t.text = Sync.ToggleKalmanFilter() ? "Smoothing ON" : "Smoothing OFF";
    }


	public void toggleGCP() {
        m_GCP_show = !m_GCP_show;

        m_GCP.SetActive(m_GCP_show);
    }


	public void hidePaintButtons() {
        switchRightPanel(null);
	}

	public void showPaintButtons() {
        switchRightPanel(m_paintButtons);
	}

    public void togglePlaneMesh() {
        GlobalStates.isGridVisible = !GlobalStates.isGridVisible;

        m_planes = GameObject.FindGameObjectsWithTag("PlaneGeneratedByARCore");
        Debug.Log("toggled plane " + m_planes.Length);

        WorldGridDraw wgd = Camera.main.GetComponent<WorldGridDraw>();
        if (wgd != null)
            wgd.SetLineDrawEnable(GlobalStates.isGridVisible);
    }


    public void CaptureScreenshot() {
        this.changeButtonActiveness(false);
        m_paintButtons.SetActive(false);
        string timeStamp = System.DateTime.Now.ToString("dd-MM-yyyy-HH-mm-ss");
        string myFileName = "Portalble" + timeStamp + ".png";

        StartCoroutine("CaptureScreenshotCoroutine", myFileName);
    }

    public void SwitchMultimodal(bool check) {
        GlobalStates.isShift = check;
    }

    private IEnumerator CaptureScreenshotCoroutine(string filename) {
        yield return new WaitForEndOfFrame();
        ScreenShoter.CaptureScreenShot(filename);
        this.changeButtonActiveness(true);
    }

    private void changeButtonActiveness(bool state) {
        m_GCPAwake.SetActive(state);
        m_GCP.SetActive(state);
        //m_paintButtons.SetActive(state);
    }

    public void toggleBrushButton() {
        // get brush state
        if (GameObject.Find("Hand_l").GetComponent<PaintManager>().isSemiTransparentBrush()) {
            m_paintButtons.transform.Find("brushButton").GetComponent<Image>().color = new Color(0.2f, 0.2f, 0.2f, 1f);
        }
        else {
            m_paintButtons.transform.Find("brushButton").GetComponent<Image>().color = new Color(1f, 1f, 1f, 1f);
        }
    }

    /**
     * Call to load a right panel
     */
    public void switchRightPanel(GameObject panel) {
        if (m_rightPanel != null) {
            m_rightPanel.SetActive(false);
        }
        if (m_rightPanel == panel) {
            m_rightPanel = null;
            return;
        }
        m_rightPanel = panel;
        if (m_rightPanel != null) {
            m_rightPanel.SetActive(true);
        }
    }

    public void simpleSwitchButton(Image button) {
        if (button.color == Color.white) {
            button.color = Color.grey;
        }
        else {
            button.color = Color.white;
        }
    }

    public void ToggleARPlaneVisibility() {
        if (m_PortalbleController != null) {
            m_PortalbleController.planeVisibility = !m_PortalbleController.planeVisibility;
        }
    }

    public void ToggleVibration() {
        if (m_PortalbleController != null) {
            m_PortalbleController.UseVibration = !m_PortalbleController.UseVibration;
        }
    }

    public void ToggleGrabHighLight() {
        if (m_PortalbleController != null) {
            m_PortalbleController.GrabHighLight = !m_PortalbleController.GrabHighLight;
        }
    }

    public void ToggleHandAction() {
        if (m_PortalbleController != null) {
            m_PortalbleController.HandActionRecogEnabled = !m_PortalbleController.HandActionRecogEnabled;
        }
    }

    public void ToggleAdaptiveMode()
    {
        //temp: changing to condition names; a, b, and c instead of norm, adap, and tpm for user study

        if (GlobalStates.timeModelMode == false && GlobalStates.adaptiveModelOn == false)
        {
            GlobalStates.timeModelMode = true;
            m_ModelToggleButtonText.text = "B";


        }
        else if(GlobalStates.timeModelMode == true && GlobalStates.adaptiveModelOn == false)
        {
            GlobalStates.timeModelMode = false;
            GlobalStates.adaptiveModelOn = true;
            m_ModelToggleButtonText.text = "C";
        }
        else
        {
            GlobalStates.adaptiveModelOn = false;
            GlobalStates.timeModelMode = false;
            m_ModelToggleButtonText.text = "A";
        }
    }

}
