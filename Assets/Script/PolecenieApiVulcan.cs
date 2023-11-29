using System;
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

public class User
{
    public string Token { get; set; }
    public string Pin { get; set; }
    // Dodaj inne dane użytkownika, np. imię, nazwisko, itp.
}
public class PolecenieApiVulcan : MonoBehaviour
{
    public TextMeshProUGUI textMesh; // Przypisz pole TextMeshProUGUI z Unity Inspector
    public TMP_InputField tokenInputField;
    public string symbol = "wloclawek";
    public string ScenaName;
    private string savedToken = "";
    private string savedPin = "";
    public TMP_InputField pinInputField;
    private List<User> usersList = new List<User>();
    private void Start()
    {
        LoadUsers();
        TryAutoLogin();
    }

    private void LoadUsers()
    {
        string serializedUsers = PlayerPrefs.GetString("SavedUsers");
        if (!string.IsNullOrEmpty(serializedUsers))
        {
            usersList = JsonConvert.DeserializeObject<List<User>>(serializedUsers);
        }
    }
    private void SaveUsers()
    {
        string serializedUsers = JsonConvert.SerializeObject(usersList);
        PlayerPrefs.SetString("SavedUsers", serializedUsers);
        Debug.Log(PlayerPrefs.GetString("SavedUsers"));
        PlayerPrefs.Save();
    }
    private void TryAutoLogin()
    {
        if (PlayerPrefs.HasKey("ZapisanyToken") && PlayerPrefs.HasKey("ZapisanyPin"))
        {
            string savedToken = PlayerPrefs.GetString("ZapisanyToken");
            string savedPin = PlayerPrefs.GetString("ZapisanyPin");

            Debug.Log("Znaleziono zapisane dane:");
            Debug.Log("Token: " + savedToken);
            Debug.Log("Pin: " + savedPin);

            // Tutaj możesz wywołać funkcję logowania automatycznego
            LoginAutomatically(savedToken, savedPin);
        }
    }
    public void SetTextVisibility(bool isVisible)
    {
        textMesh.enabled = isVisible;
    }
    public async void LoginProcess()
    {
        
        string token = tokenInputField.text; // Pobierz wartość tokenu z InputFielda
        string pin = pinInputField.text; // Pobierz wartość PINu z InputFielda
        PlayerPrefs.SetString("ZapisanyToken", token);
        PlayerPrefs.SetString("ZapisanyPin", pin);
        PlayerPrefs.Save();

        
        // Setup request signer
        var firebaseToken = await FirebaseTokenFetcher.FetchFirebaseTokenAsync();
        var (pk, cert) = KeyPairGenerator.GenerateKeyPair();

        var x509Cert2 = new X509Certificate2(cert.GetEncoded());

        var requestSigner = new RequestSigner(x509Cert2.Thumbprint, pk, firebaseToken);

        var instanceUrlProvider = new InstanceUrlProvider();

        var apiClient = new ApiClient(requestSigner, await instanceUrlProvider.GetInstanceUrlAsync(token, symbol));
        try
        {
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
            User newUser = new User
            {
                Token = token,
                Pin = pin,
                // Dodaj inne dane użytkownika pobrane z dziennika
               
        };
            usersList.Add(newUser);
            SaveUsers();
  
        }
      catch (Exception e)
        {
            Debug.Log("Tworzenie użytkownika nie powiodło się: " + e.Message);
            textMesh.text = "Tworzenie użytkownika nie powiodło się";
            SetTextVisibility(true);
        }

var registerHebeResponse = await apiClient.GetAsync(RegisterHebeClientQuery.ApiEndpoint, new RegisterHebeClientQuery());

        var firstAccount = registerHebeResponse.Envelope[0];

        // SceneManager.LoadScene(ScenaName);
        Debug.Log(firstAccount.Pupil.FirstName);
        LoginAutomatically(savedToken, savedPin);

        PlayerPrefs.SetString("imie", firstAccount.Pupil.FirstName);
        PlayerPrefs.SetString("nazwisko", firstAccount.Pupil.Surname);
        PlayerPrefs.SetString("klasa", firstAccount.ClassDisplay);
        
        //textMesh.text = $"Imie i nazwisko: {firstAccount.Pupil.FirstName} {firstAccount.Pupil.Surname} \nKlasa: {firstAccount.ClassDisplay}\nNazwa szkoly: {firstAccount.Unit.Name}";
    }
    private async void LoginAutomatically(string token, string pin)
    {
        
        SceneManager.LoadScene(ScenaName);
        
    }
    public void ClearUserList()
    {
        usersList.Clear();
        Debug.Log("Wyczyszczono listę użytkowników.");
    }
   
    private void OnDestroy()
    {
        SaveUsers();
    }
}