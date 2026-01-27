using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneManagement : MonoBehaviour
{
    public static Scene sceneMain;
    public static Scene scenePrediction;
    public static PhysicsScene scenePredictionPhysics;
    public static PhysicsScene sceneMainPhysics;
    // Start is called before the first frame update
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

        if (!SceneManagement.sceneMainPhysics.IsValid())
            return;


        SceneManagement.sceneMainPhysics.Simulate(Time.fixedDeltaTime);
    }

    public static void simHelper(Vector3 releaseVelocity)
    {
        //In the following we basically *intercept* the release velocity data
        // and use this to inform our projectile prediction for the time model

        if (!SceneManagement.sceneMainPhysics.IsValid() || !SceneManagement.scenePredictionPhysics.IsValid())
            return;
        Debug.Log("Time model mode is on");
        //They separate both the mainscene ball and the physics prediction ball; but use 
        //the same force so they end up following the same path

        //Double check the mass and gravity usages here
        //ensure that they align with the cubes in the scene
        GameObject ball = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        //ball.tag = "InteractableObj";
        SceneManager.MoveGameObjectToScene(ball, SceneManagement.sceneMain);
        ball.AddComponent<Rigidbody>().AddForce(releaseVelocity, ForceMode.Impulse);
        ball.transform.localScale = new Vector3(0.05f, 0.05f, 0.05f);



        GameObject predictionBall = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        //predictionBall.tag = "InteractableObj";
        SceneManager.MoveGameObjectToScene(predictionBall, scenePrediction);
        //How can you add force before you assign to a physics scene
        predictionBall.AddComponent<Rigidbody>().AddForce(releaseVelocity, ForceMode.Impulse);
        predictionBall.transform.localScale = ball.transform.localScale;

        Material redMaterial = new Material(Shader.Find("Universal Render Pipeline/Lit"));

        redMaterial.color = Color.red;


        for (int i = 0; i < 100; i++)
        {
            //Now physics scene using fixeddeltatime
            //As you loop, you simulate another step
            //For the prediction ball 
            //so fixedDeltaTime is the *Step* for simulate
            scenePredictionPhysics.Simulate(Time.fixedDeltaTime);


            GameObject pathMarkSphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            //pathMarkSphere.tag = "InteractableObj";
            pathMarkSphere.GetComponent<Collider>().isTrigger = true;

            pathMarkSphere.transform.localScale = new Vector3(.05f, .05f, .05f);
            pathMarkSphere.transform.position = predictionBall.transform.position;
            pathMarkSphere.GetComponent<MeshRenderer>().material = redMaterial;
            SceneManager.MoveGameObjectToScene(pathMarkSphere, scenePrediction);
        }


        Destroy(predictionBall);
        Debug.Break();
    }
    // Update is called once per frame
    void Update()
    {

    }
}
