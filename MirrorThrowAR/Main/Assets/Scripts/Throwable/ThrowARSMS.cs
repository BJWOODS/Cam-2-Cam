using UnityEngine;
using UnityEngine.UI;
using System.Net;
using System.Net.Mail;
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;
using System.Collections.Generic;
using System.Linq;
//Attach this to the demo controller for the evaluation demo to receive data after each session 
public class ThrowARSMS : MonoBehaviour
{
    public InputField bodyMessage;
    public InputField recipientEmail;
    public Transform TargetZ;

    public List<float> xPosList = new List<float>();
    public List<float> yPosList = new List<float>(); 

    public Text logText; 
    public GameObject textGameObject;
    public void printTextToCanvas()
    {

        
        textGameObject.SetActive(true);

        GameObject[] crosses = GameObject.FindGameObjectsWithTag("cross");
        foreach (GameObject cross in crosses)
        {
            xPosList.Add(cross.transform.position.x);
            yPosList.Add(cross.transform.position.y);         
        }
        List<float> xPosListClean = RemoveDuplicatesUsingHashSet(xPosList);
        List<float> yPosListClean = RemoveDuplicatesUsingHashSet(yPosList);
        
        for (int i = 0; i < xPosListClean.Count; i++)
        {
            logText.text += "Trial number#: " + i + "============= \n";
            logText.text += "X position: \n" + xPosListClean[i].ToString();
            logText.text += ", Y position: \n" + yPosListClean[i].ToString();
        }
        logText.text += ", Z Target position: \n" + TargetZ.position.z.ToString();
    
        Debug.Log("Length of xs: " + xPosListClean.Count);
        Debug.Log("Length of ys: " + yPosListClean.Count);

    }
        List<float> RemoveDuplicatesUsingHashSet(List<float> inputList)
    {
        HashSet<float> set = new HashSet<float>(inputList);
        return set.ToList();
    }

    public void SendEmail()
    {

        GameObject[] crosses = GameObject.FindGameObjectsWithTag("cross");
        foreach (GameObject cross in crosses)
        {
            xPosList.Add(cross.transform.position.x);
            yPosList.Add(cross.transform.position.y);         
        }

        MailMessage mail = new MailMessage();
        SmtpClient SmtpServer = new SmtpClient("smtp.office365.com");
        SmtpServer.Timeout = 10000;
        SmtpServer.DeliveryMethod = SmtpDeliveryMethod.Network;
        SmtpServer.UseDefaultCredentials = false;
        SmtpServer.Port = 587;
        ServicePointManager.SecurityProtocol = (SecurityProtocolType)(3072);
        mail.From = new MailAddress("ThrowAR.sms.test@outlook.com");
        mail.To.Add(new MailAddress("ThrowAR.sms.test@outlook.com"));

        mail.Subject = "Dual-ThrowAR Results at: " + TargetZ.position.z.ToString();
        mail.Body = "Hello World! Here are your Xs: " + xPosList.ToString();
        mail.Body += "Hello World! Here are your Ys: " + yPosList.ToString();


        SmtpServer.Credentials = new System.Net.NetworkCredential("ThrowAR.sms.test@outlook.com", "BROWNhci2023") as ICredentialsByHost; SmtpServer.EnableSsl = true;
        
        /*
        ServicePointManager.ServerCertificateValidationCallback = delegate (object s, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors)
        {
            return true;
        };
        */
        ServicePointManager.ServerCertificateValidationCallback = delegate { return true; };
        mail.DeliveryNotificationOptions = DeliveryNotificationOptions.OnFailure;
        SmtpServer.Send(mail);
        Debug.Log("Sent email");
    }

}