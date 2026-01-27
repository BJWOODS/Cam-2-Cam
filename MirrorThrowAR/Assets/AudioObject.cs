using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioObject : MonoBehaviour
{

    //public AudioSource distAudio;
    GameObject leftBarrier;
    GameObject rightBarrier;

    // Start is called before the first frame update

    /*
     * Trigger event in barrierscript will call the following
     */

    public void leftBarrierNoise()
    {
        leftBarrier.GetComponent<AudioSource>().Play();
    }
    public void rightBarrierNoise()
    {
        rightBarrier.GetComponent<AudioSource>().Play();
    }
    public void leftBarrierNoiseOff()
    {
        leftBarrier.GetComponent<AudioSource>().Pause();
    }
    public void rightBarrierNoiseOff()
    {
        rightBarrier.GetComponent<AudioSource>().Pause();
    }

    void Start()
    {
        leftBarrier = GameObject.Find("SoundBarrierLeft_sndlvl1");
        rightBarrier = GameObject.Find("SoundBarrierRight_sndlvl2");
    }

    void Update()
    {
        Vector3 mainCameraPos = GameObject.FindGameObjectWithTag("MainCamera").transform.position;
        Vector3 targetPos = GameObject.Find("Target_Main").transform.position;
        GameObject leftSoundBarrier = GameObject.Find("SoundBarrierLeft");
        GameObject rightSoundBarrier = GameObject.Find("SoundBarrierRight");
    }









