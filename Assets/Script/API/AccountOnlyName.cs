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
        Name.text = PlayerPrefs.GetString("imie_podr");
        Surname.text = PlayerPrefs.GetString("nazwisko_podr");
        Class.text = PlayerPrefs.GetString("klasa_podr");
        Email.text = PlayerPrefs.GetString("email_podr");
        Debug.Log(PlayerPrefs.GetString("imie_podr"));

        LoginProcess();
        wylogujBtn.onClick.AddListener(DeleteAccount);
    }

public async void LoginProcess()
    {
        try
        {
            
            string token = PlayerPrefs.GetString("token");
            if (token == "testowe")
            {
                Name.text = "Testowe";
                Surname.text = "Konto";
                Class.text = "1A";
                Email.text = "test@test.com";
            }
            else
            {
                var firebaseToken = PlayerPrefs.GetString("firebaseToken");
                var pk = PlayerPrefs.GetString("pk");
                string certString = PlayerPrefs.GetString("cert");
                byte[] cert = Convert.FromBase64String(certString);
                var x509Cert2 = new X509Certificate2(cert);

                var requestSigner = new RequestSigner(x509Cert2.Thumbprint, pk, firebaseToken);
                var instanceUrlProvider = new InstanceUrlProvider();
                var apiClient = new ApiClient(requestSigner, await instanceUrlProvider.GetInstanceUrlAsync(token, symbol));
                var registerHebeResponse = await apiClient.GetAsync(RegisterHebeClientQuery.ApiEndpoint, new RegisterHebeClientQuery());
                int lengthAccount = registerHebeResponse.Envelope.Length - 1;
                var firstAccount = registerHebeResponse.Envelope[lengthAccount];
                var contextualSigner = new ContextualRequestSigner(x509Cert2.Thumbprint, pk, firebaseToken, firstAccount.Context);
                var unitApiClient = new ApiClient(contextualSigner, firstAccount.Unit.RestUrl.ToString());


                if(firstAccount.Pupil.FirstName != PlayerPrefs.GetString("imie_podr"))
                {

                    Name.text = firstAccount.Pupil.FirstName;
                    PlayerPrefs.SetString("imie_podr", firstAccount.Pupil.FirstName);
                }
                if (firstAccount.Pupil.Surname != PlayerPrefs.GetString("nazwisko_podr"))
                {
                    Surname.text = firstAccount.Pupil.Surname;
                    PlayerPrefs.SetString("nazwisko_podr", firstAccount.Pupil.Surname);
                }
                if (firstAccount.ClassDisplay != PlayerPrefs.GetString("klasa_podr"))
                {
                    Class.text = firstAccount.ClassDisplay;
                    PlayerPrefs.SetString("klasa_podr", firstAccount.ClassDisplay);
                }
                if (firstAccount.Login.Value != PlayerPrefs.GetString("email_podr"))
                {
                    Email.text = firstAccount.Login.Value;
                    PlayerPrefs.SetString("email_podr", firstAccount.Login.Value);
                }

                
            }
            

        }
        catch (Exception e)
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                SceneManager.LoadScene("LoginPanel");
            }
            else
            {
                Debug.Log("Brak po��czenia z internetem.");
                SceneManager.LoadScene("LoginPanel");
            }
            Debug.Log($"B��d w logowaniu: {e}");
            SceneManager.LoadScene("LoginPanel");
        }
    }
    public void DeleteAccount()
    {
        PlayerPrefs.DeleteKey("imie_podr");
        PlayerPrefs.DeleteKey("nazwisko_podr");
        PlayerPrefs.DeleteKey("klasa_podr");
        PlayerPrefs.DeleteKey("email_podr");

        PlayerPrefs.DeleteKey("token");
        PlayerPrefs.DeleteKey("firebaseToken");
        PlayerPrefs.DeleteKey("pk");
        PlayerPrefs.DeleteKey("cert");
    }
}

