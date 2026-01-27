using UnityEngine;
using UnityEngine.SceneManagement;

public class SimProjectile : MonoBehaviour
{
    //Delete later
    public Vector3 applyForce = new Vector3(0f, 20f, 15f);
    public Vector3 rv;
    public int PI;

    private Scene sceneMain;
    private Scene scenePrediction;
    private PhysicsScene scenePredictionPhysics;
    private PhysicsScene sceneMainPhysics;

    private void Awake()
    {

    }
    void Start()
    {
        Physics.autoSimulation = false;
        sceneMain = SceneManager.CreateScene("MainScene");
        sceneMainPhysics = sceneMain.GetPhysicsScene();

        CreateSceneParameters sceneParam = new CreateSceneParameters(LocalPhysicsMode.Physics3D);
        scenePrediction = SceneManager.CreateScene("ScenePredictionPhysics", sceneParam);
        scenePredictionPhysics = scenePrediction.GetPhysicsScene();

    }
    private void FixedUpdate()
    {
        if (!sceneMainPhysics.IsValid())
            return;

        sceneMainPhysics.Simulate(Time.fixedDeltaTime);
    }
    void Update()
    {
        //ShootBall();

    }
    private void ShootBall()
    {
        if (!sceneMainPhysics.IsValid() || !scenePredictionPhysics.IsValid())
            return;

        //Testing w changing hand_r's scene
        //is it not simulating hand because it force is added in time_model scene?

        //They separate both the mainscene ball and the physics prediction ball; but use 
        //the same force so they end up following the same path
        GameObject ball = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        SceneManager.MoveGameObjectToScene(ball, sceneMain);
        ball.AddComponent<Rigidbody>().AddForce(applyForce, ForceMode.Impulse);
        ball.transform.localScale = new Vector3(0.05f, 0.05f, 0.05f);

        GameObject predictionBall = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        SceneManager.MoveGameObjectToScene(predictionBall, scenePrediction);
        //How can you add force before you assign to a physics scene
        predictionBall.AddComponent<Rigidbody>().AddForce(applyForce, ForceMode.Impulse);

        Material redMaterial = new Material(Shader.Find("Diffuse"));
        redMaterial.color = Color.red;
        for (int i = 0; i < 500; i++)
        {
            //Now physics scene using fixeddeltatime
            //As you loop, you simulate another step
            //For the prediction ball 
            scenePredictionPhysics.Simulate(Time.fixedDeltaTime);

            GameObject pathMarkSphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            pathMarkSphere.GetComponent<Collider>().isTrigger = true;
            pathMarkSphere.transform.localScale = new Vector3(.03f, .03f, .03f);
            pathMarkSphere.transform.position = predictionBall.transform.position;
            pathMarkSphere.GetComponent<MeshRenderer>().material = redMaterial;
            SceneManager.MoveGameObjectToScene(pathMarkSphere, scenePrediction);
        }

        Destroy(predictionBall);

        Debug.Break();
    }
    public GameObject projPrefab_clone;
    public void sim_projectiles(Vector3 releaseVelocity, int posIndex)
    {
        //assigning release velocity locally
        rv = releaseVelocity;
        PI = posIndex;
        var proj_clone = GameObject.Instantiate<GameObject>(projPrefab_clone);
        var motion_clone = proj_clone.GetComponent<BallisticMotion>();
        Debug.Log("Pos index value: " + posIndex);
        motion_clone.Initialize(GlobalStates.posHist[posIndex], 9.8f);
        motion_clone.AddImpulse(releaseVelocity);
        Debug.Log("The following is the gameObject projprefab_clone: " + projPrefab_clone);
        Debug.Log("Gameobject position: " + projPrefab_clone.transform.position);
    }
    // Start is called before the first frame update


    // Update is called once per frame

}
