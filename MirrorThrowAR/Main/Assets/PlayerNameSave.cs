using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerNameSave : MonoBehaviour
{
    private static String player_name;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ReadNameInput(String s)
    {
        player_name = s;
        GlobalStates.player_name_global = player_name;
        Debug.Log("Name has been entered and I'm complete");
        if (this.transform.Find("InputField"))
        {
            this.transform.Find("InputField").gameObject.SetActive(false);
        }
    }

}
