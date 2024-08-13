using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using TMPro;
using UnityEngine;
using Vulcanova.Uonet;
using Vulcanova.Uonet.Api;
using Vulcanova.Uonet.Api.Auth;
using Vulcanova.Uonet.Api.Common;
using Vulcanova.Uonet.Api.Grades;
using Vulcanova.Uonet.Crypto;
using Vulcanova.Uonet.Firebase;
using Vulcanova.Uonet.Signing;
using System.Threading.Tasks;

public class GetValuesFromVulcan4 : MonoBehaviour
{
    public string symbol = "wloclawek";
    private string token;
    private string firebaseToken;
    private string pk;
    private X509Certificate2 x509Cert2;

    public GameObject imagePrefab; 
    public Transform parentTransform;
    async void Start()
    {
        if (PlayerPrefs.HasKey("token") && PlayerPrefs.HasKey("firebaseToken") && PlayerPrefs.HasKey("pk") && PlayerPrefs.HasKey("cert"))
        {
            token = PlayerPrefs.GetString("token");
            firebaseToken = PlayerPrefs.GetString("firebaseToken");
            pk = PlayerPrefs.GetString("pk");
            byte[] cert = Convert.FromBase64String(PlayerPrefs.GetString("cert"));
            x509Cert2 = new X509Certificate2(cert);

            await FetchAndLogGrades();
        }
        else
        {
            Debug.LogError("Brak danych uwierzytelniających.");
        }
        imagePrefab.SetActive(false);
    }

    private async Task FetchAndLogGrades()
    {
        try
        {
            var requestSigner = new RequestSigner(x509Cert2.Thumbprint, pk, firebaseToken);
            var instanceUrlProvider = new InstanceUrlProvider();
            var apiClient = new ApiClient(requestSigner, await instanceUrlProvider.GetInstanceUrlAsync(token, symbol));
            var registerHebeResponse = await apiClient.GetAsync(RegisterHebeClientQuery.ApiEndpoint, new RegisterHebeClientQuery());
            int lengthAccount = registerHebeResponse.Envelope.Length - 1;
            var firstAccount = registerHebeResponse.Envelope[lengthAccount];
            var contextualSigner = new ContextualRequestSigner(x509Cert2.Thumbprint, pk, firebaseToken, firstAccount.Context);
            var unitApiClient = new ApiClient(contextualSigner, firstAccount.Unit.RestUrl.ToString());


            var gradesResponse = await unitApiClient.GetAllAsync(GetGradesByPupilQuery.ApiEndpoint, new GetGradesByPupilQuery(
                    firstAccount.Unit.Id,
                    firstAccount.Pupil.Id,
                    firstAccount.Periods.Single(p => p.Current).Id,
                    DateTime.MinValue,
                    500))
                .ToListAsync();

            foreach (var group in gradesResponse.GroupBy(g => g.Column.Subject.Id))
            {
                var subjectName = group.First().Column.Subject.Name;
                var grades = string.Join(',', group.Select(g => g.ContentRaw));

                Debug.Log($"{subjectName}: {grades}");

                // Tworzenie nowej instancji Image z tekstem
                var newImage = Instantiate(imagePrefab, parentTransform);
                var textComponent = newImage.GetComponentInChildren<TextMeshProUGUI>();

                if (textComponent != null)
                {
                    textComponent.text = $"{subjectName}: {grades}";
                }
                else
                {
                    Debug.LogError("Brak komponentu TextMeshProUGUI na zduplikowanym obiekcie.");
                }
            }

        }
        catch (Exception e)
        {
            Debug.LogError($"Błąd podczas pobierania ocen: {e.Message}");
        }
    }
}