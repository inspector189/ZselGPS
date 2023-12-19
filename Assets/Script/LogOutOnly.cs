using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using System.Security.Cryptography.X509Certificates;
using System.Xml;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Vulcanova.Uonet.Api.Auth;
using Vulcanova.Uonet.Api.Common;
using Vulcanova.Uonet.Api.Schedule;
using Vulcanova.Uonet.Api;
using Vulcanova.Uonet.Signing;
using Michsky.MUIP;

public class LogOutOnly : MonoBehaviour
{
   
    // Start is called before the first frame update
    // Update is called once per frame
     public void DeleteAccount()
    {
        PlayerPrefs.DeleteKey("token");
        PlayerPrefs.DeleteKey("firebaseToken");
        PlayerPrefs.DeleteKey("pk");
        PlayerPrefs.DeleteKey("cert");
        SceneManager.LoadScene("LoginPanel");
    }
}
