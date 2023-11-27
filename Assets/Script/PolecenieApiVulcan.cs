using System;
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

public class PolecenieApiVulcan : MonoBehaviour
{
    public TextMeshProUGUI textMesh; // Przypisz pole TextMeshProUGUI z Unity Inspector
    public string token;
    public string symbol = "wloclawek";
    public string pin;

    private async void Start()
    {
        // Setup request signer
        var firebaseToken = await FirebaseTokenFetcher.FetchFirebaseTokenAsync();
        var (pk, cert) = KeyPairGenerator.GenerateKeyPair();

        var x509Cert2 = new X509Certificate2(cert.GetEncoded());

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

        var firstAccount = registerHebeResponse.Envelope[0];

        textMesh.text = $"Imie i nazwisko: {firstAccount.Pupil.FirstName} {firstAccount.Pupil.Surname} \nKlasa: {firstAccount.ClassDisplay}\nNazwa szkoly: {firstAccount.Unit.Name}";
    }
}