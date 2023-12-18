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

            var firebaseToken = PlayerPrefs.GetString("firebaseToken");

            var pk = PlayerPrefs.GetString("pk");

            string certString = PlayerPrefs.GetString("cert");
            byte[] cert = Convert.FromBase64String(certString);

            var x509Cert2 = new X509Certificate2(cert);

            var requestSigner = new RequestSigner(x509Cert2.Thumbprint, pk, firebaseToken);

            var instanceUrlProvider = new InstanceUrlProvider();

            var apiClient = new ApiClient(requestSigner, await instanceUrlProvider.GetInstanceUrlAsync(token, symbol));

            var registerHebeResponse = await apiClient.GetAsync(RegisterHebeClientQuery.ApiEndpoint, new RegisterHebeClientQuery());

            var firstAccount = registerHebeResponse.Envelope[0];

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