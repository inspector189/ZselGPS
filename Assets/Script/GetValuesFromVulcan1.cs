using System;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Vulcanova.Uonet;
using Vulcanova.Uonet.Api;
using Vulcanova.Uonet.Api.Auth;
using Vulcanova.Uonet.Api.Common;
using Vulcanova.Uonet.Api.Grades;
using Vulcanova.Uonet.Crypto;
using Vulcanova.Uonet.Firebase;
using Vulcanova.Uonet.Signing;
using UnityEngine.SceneManagement;
using Newtonsoft.Json;

public class GetValuesFromVulcan1 : MonoBehaviour
{
    public string symbol = "wloclawek";

    public void Start()
    {
        if (PlayerPrefs.HasKey("token") && PlayerPrefs.HasKey("firebaseToken") && PlayerPrefs.HasKey("pk") && PlayerPrefs.HasKey("cert"))
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                LoginProcess();
            }
            else
            {
                SceneManager.LoadScene("LoginPanel");
            }
        }
        else
        {
            SceneManager.LoadScene("LoginPanel");
        }
    }
    public void Update()
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            SceneManager.LoadScene("LoginPanel");
        }
    }



    public async void LoginProcess()
    {
        try
        {

            string token = PlayerPrefs.GetString("token");
            Debug.Log("1");
            var firebaseToken = PlayerPrefs.GetString("firebaseToken");
            Debug.Log("2");
            var pk = PlayerPrefs.GetString("pk");
            Debug.Log("3");
            string certString = PlayerPrefs.GetString("cert");
            Debug.Log("4");
            byte[] cert = Convert.FromBase64String(certString);
            Debug.Log("5");
            var x509Cert2 = new X509Certificate2(cert);
            Debug.Log("6");
            var requestSigner = new RequestSigner(x509Cert2.Thumbprint, pk, firebaseToken);
            Debug.Log("7");
            var instanceUrlProvider = new InstanceUrlProvider();
            Debug.Log("8");
            var apiClient = new ApiClient(requestSigner, await instanceUrlProvider.GetInstanceUrlAsync(token, symbol));
            Debug.Log("9");
            var registerHebeResponse = await apiClient.GetAsync(RegisterHebeClientQuery.ApiEndpoint, new RegisterHebeClientQuery());
            Debug.Log("10");
            var firstAccount = registerHebeResponse.Envelope[0];
            Debug.Log("11");
            Debug.Log($"Imiê: {firstAccount.Pupil.FirstName}\n Szko³a: {firstAccount.Unit.Name}");

        }
        catch (Exception e)
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                
                SceneManager.LoadScene("LoginPanel");
            }
            else
            {
                Debug.Log("Brak po³¹czenia z internetem.");
                SceneManager.LoadScene("LoginPanel");
            }
            Debug.Log($"B³¹d w logowaniu: {e}");
            SceneManager.LoadScene("LoginPanel");
        }

    }

    public void DeleteAccount()
    {
        PlayerPrefs.DeleteKey("token");
        PlayerPrefs.DeleteKey("firebaseToken");
        PlayerPrefs.DeleteKey("pk");
        PlayerPrefs.DeleteKey("cert");
    }
}