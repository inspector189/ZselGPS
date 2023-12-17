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
using Vulcanova.Uonet.Api.Lessons;
using System.Linq;
using System.Threading.Tasks;
using Unity.VisualScripting; // Dodane dla obs³ugi async/await

public class GetValuesFromVulcan2 : MonoBehaviour
{
    public string symbol = "wloclawek";

    void Start()
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

    void Update()
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
            var contextualSigner = new ContextualRequestSigner(x509Cert2.Thumbprint, pk, firebaseToken, firstAccount.Context);
            var unitApiClient = new ApiClient(contextualSigner, firstAccount.Unit.RestUrl.ToString());

            DateTime selectedDate = new DateTime(2023, 11, 23); // Pobieranie lekcji na dzisiejszy dzieñ

            var lessonsResponse = await unitApiClient.GetAllAsync(GetLessonsByPupilQuery.ApiEndpoint, new GetLessonsByPupilQuery(
                            firstAccount.Pupil.Id,
                            selectedDate, // Data pocz¹tkowa
                            selectedDate, // Data koñcowa
                            DateTime.MinValue, // Dodatkowe parametry (jeœli s¹ wymagane)
                            500))
                        .ToListAsync();
            var uniqueLessons = lessonsResponse
                            .GroupBy(lesson => lesson.TimeSlot.Position)
                            .Select(group => group.First())
                            .OrderBy(lesson => lesson.TimeSlot.Position);

            foreach (var lesson in uniqueLessons)
            {
                // Wypisz szczegó³y lekcji, nazwy w³aœciwoœci mog¹ siê ró¿niæ
                Debug.Log($"nr: {lesson.TimeSlot.Position}, przedmiot: {lesson.Subject.Name}, nauczyciel: {lesson.TeacherMod.DisplayName}, godziny: {lesson.TimeSlot.Display}");
            }
        }
        catch (Exception e)
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                DeleteAccount();
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
