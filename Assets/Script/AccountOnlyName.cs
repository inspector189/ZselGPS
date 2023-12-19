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

public class AccountOnlyName : MonoBehaviour
{
    public string symbol = "wloclawek";
    public TextMeshProUGUI Name;
    public TextMeshProUGUI Surname;
    public TextMeshProUGUI Class;
    public TextMeshProUGUI Email;
    public ButtonManager wylogujBtn;
    void Start()
    {
        LoginProcess();
        wylogujBtn.onClick.AddListener(DeleteAccount);
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
            var contextualSigner = new ContextualRequestSigner(x509Cert2.Thumbprint, pk, firebaseToken, firstAccount.Context);
            var unitApiClient = new ApiClient(contextualSigner, firstAccount.Unit.RestUrl.ToString());

            Name.text = firstAccount.Pupil.FirstName;
            Surname.text = firstAccount.Pupil.Surname;
            Class.text = firstAccount.ClassDisplay;
            Email.text = firstAccount.Login.Value;

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
        SceneManager.LoadScene("LoginPanel");
    }
}

