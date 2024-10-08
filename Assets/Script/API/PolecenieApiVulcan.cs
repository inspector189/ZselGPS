﻿using System;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using TMPro;
using UnityEngine; // Importuj przestrzeñ nazw UnityEngine
using UnityEngine.UI; // Importuj przestrzeñ nazw UnityEngine.UI
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
using System.Threading;
using System.Threading.Tasks;

public class PolecenieApiVulcan : MonoBehaviour
{
    public TextMeshProUGUI textMesh; // Przypisz pole TextMeshProUGUI z Unity Inspector
    public TMP_InputField tokenInputField;
    public string symbol = "wloclawek";
    public string ScenaName;
    public GameObject spinner;
    public TMP_InputField pinInputField;
    private bool czyWykonacUpdate = true;

    public void Start()
    {
        if (PlayerPrefs.HasKey("token") && PlayerPrefs.HasKey("firebaseToken") && PlayerPrefs.HasKey("pk") && PlayerPrefs.HasKey("cert"))
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                SceneManager.LoadScene("Map");
            }
            else
            {
                textMesh.text = "Brak połączenia z internetem.";
            }
        }

        spinner.SetActive(false);
    }

    public void Update()
    {
        if (czyWykonacUpdate == true)
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                if (PlayerPrefs.HasKey("token") && PlayerPrefs.HasKey("firebaseToken") && PlayerPrefs.HasKey("pk") && PlayerPrefs.HasKey("cert"))
                {
                    LoginProcess();
                    czyWykonacUpdate = false;

                }
            }
        }
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            czyWykonacUpdate = true;
        }
    }

    public void btnClicked()
    {
        if (Application.internetReachability != NetworkReachability.NotReachable)
        {
            RegisterProcess();
        }
        else
        {
            textMesh.text = "Brak połączenia z internetem.";
        }
        
    }
    public void SetTextVisibility(bool isVisible)
    {
        textMesh.enabled = isVisible;
    }
    public async void RegisterProcess()
    {
        try
        {
            czyWykonacUpdate = false;
            spinner.SetActive(true);
            string token = tokenInputField.text; // Pobierz wartość tokenu z InputFielda

            PlayerPrefs.SetString("token", token);
            string pin = pinInputField.text; // Pobierz wartość PINu z InputFielda
            if (token.Length != 7 || pin.Length != 6)
            {
                throw new Exception("Podano błędny token lub pin!");
            }

            if(token == "testowe" && pin == "123456")
            {
                SceneManager.LoadScene("Map");
            }
            // Setup request signer
            var firebaseToken = await FirebaseTokenFetcher.FetchFirebaseTokenAsync();
            var (pk, cert) = KeyPairGenerator.GenerateKeyPair();
            var x509Cert2 = new X509Certificate2(cert.GetEncoded());

            PlayerPrefs.SetString("cert", Convert.ToBase64String(cert.GetEncoded()));
            PlayerPrefs.SetString("pk", pk);
            PlayerPrefs.SetString("firebaseToken", firebaseToken);
            var requestSigner = new RequestSigner(x509Cert2.Thumbprint, pk, firebaseToken);

            var instanceUrlProvider = new InstanceUrlProvider();

            var apiClient = new ApiClient(requestSigner, await instanceUrlProvider.GetInstanceUrlAsync(token, symbol));

            var request = new RegisterClientRequest
            {
                OS = Constants.AppOs,
                DeviceModel = Constants.DeviceModel,
                Certificate = Convert.ToBase64String(x509Cert2.RawData),
                CertificateType = "X509",
                CertificateThumbprint = x509Cert2.Thumbprint,
                PIN = pin,
                SecurityToken = token,
                SelfIdentifier = Guid.NewGuid().ToString()
            };
            await apiClient.PostAsync(RegisterClientRequest.ApiEndpoint, request);


            var registerHebeResponse = await apiClient.GetAsync(RegisterHebeClientQuery.ApiEndpoint, new RegisterHebeClientQuery());
            int lengthAccount = registerHebeResponse.Envelope.Length - 1;
            var firstAccount = registerHebeResponse.Envelope[lengthAccount];

            if (firstAccount.Unit.Name != "Zespół Szkół Elektrycznych")
            {
                throw new Exception("Nie należysz do Zespołu Szkół Elektrycznych!");
            }
            spinner.SetActive(false);
            SceneManager.LoadScene("Map");
        }
        catch(Exception e)
        {
            spinner.SetActive(false);
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                DeleteAccount();
            }
            else
            {

                textMesh.text = "Brak połączenia z internetem.";
            }

            czyWykonacUpdate = true;
            textMesh.text = $"{e.Message}";
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

            int lengthAccount = registerHebeResponse.Envelope.Length - 1;
            var firstAccount = registerHebeResponse.Envelope[lengthAccount];
            Debug.Log(registerHebeResponse.Envelope.Length);

            PamiecPodreczna(firstAccount.Pupil.FirstName, firstAccount.Pupil.Surname, firstAccount.ClassDisplay, firstAccount.Login.Value);

            SceneManager.LoadScene("Map");

        }
        catch (Exception e)
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                DeleteAccount();
            }
            else
            {
                Debug.Log("Brak połączenia z internetem.");
                
            }
            Debug.Log($"Błąd w logowaniu: {e}");
            
        }

    }

    public void PamiecPodreczna(string imie, string nazwisko, string klasa, string email)
    {
        PlayerPrefs.SetString("imie_podr", imie);
        PlayerPrefs.SetString("nazwisko_podr", nazwisko);
        PlayerPrefs.SetString("klasa_podr", klasa);
        PlayerPrefs.SetString("email_podr", email);
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