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
using Vulcanova.Uonet.Api.Schedule;
using System.Linq;
using System.Threading.Tasks;
using Unity.VisualScripting; // Dodane dla obs�ugi async/await
using System.Globalization;
using static GetValuesFromVulcan2;
using System.Xml;
using UnityEngine.Windows;

public class Godzina : MonoBehaviour
{
    private string symbol = "wloclawek";
    void Update()
    {
        System.DateTime currentTime = System.DateTime.Now;

        // Wyświetl godzinę na interfejsie użytkownika
       Debug.Log("Aktualna godzina: " + currentTime.ToString("HH:mm:ss"));
    }

    void Start()
    {
        LoginProcess(DateTime.Today);
    }

    public async void LoginProcess(DateTime selectedDate)
    {
        try
        {
            Debug.Log("działa");
            string token = PlayerPrefs.GetString("token");
            Debug.Log(token);
            if (token == "testowe")
            {
                LessonData[] lessonsData = new LessonData[]
                {
                    new LessonData { Position = 1, SubjectName = "Matematyka", TeacherName = "Pan Kowalski", StartTime = "08:00", EndTime = "08:45", RoomCode = "101", SubjectCode = "MAT" },
                    new LessonData { Position = 2, SubjectName = "Historia", TeacherName = "Pani Nowak", StartTime = "08:50", EndTime = "09:35", RoomCode = "102", SubjectCode = "HIS" },
                    new LessonData { Position = 3, SubjectName = "Biologia", TeacherName = "Pan Wiśniewski", StartTime = "09:50", EndTime = "10:35", RoomCode = "103", SubjectCode = "BIO" },
                    new LessonData { Position = 4, SubjectName = "Chemia", TeacherName = "Pani Kowalczyk", StartTime = "10:50", EndTime = "11:35", RoomCode = "104", SubjectCode = "CHE" },
                    new LessonData { Position = 5, SubjectName = "Język angielski", TeacherName = "Pan Wojciechowski", StartTime = "11:50", EndTime = "12:35", RoomCode = "105", SubjectCode = "ENG" },
                    new LessonData { Position = 6, SubjectName = "Wychowanie fizyczne", TeacherName = "Pani Lewandowska", StartTime = "12:50", EndTime = "13:35", RoomCode = "Gym", SubjectCode = "PE" },
                    new LessonData { Position = 7, SubjectName = "Informatyka", TeacherName = "Pan Dąbrowski", StartTime = "13:50", EndTime = "14:35", RoomCode = "106", SubjectCode = "INF" },
                    new LessonData { Position = 8, SubjectName = "Plastyka", TeacherName = "Pani Mazur", StartTime = "14:40", EndTime = "15:25", RoomCode = "107", SubjectCode = "ART" }
    };

                foreach (var lessonData in lessonsData)
                {

                }

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
                var firstAccount = registerHebeResponse.Envelope[0];
                var contextualSigner = new ContextualRequestSigner(x509Cert2.Thumbprint, pk, firebaseToken, firstAccount.Context);
                var unitApiClient = new ApiClient(contextualSigner, firstAccount.Unit.RestUrl.ToString());


                var lessonsResponse = await unitApiClient.GetAsync(GetScheduleEntriesByPupilQuery.ApiEndpoint, new GetScheduleEntriesByPupilQuery(
                                firstAccount.Pupil.Id,
                                selectedDate,
                                selectedDate,
                                DateTime.MinValue,
                                500,
                                int.MinValue));

                var sortedLessons = lessonsResponse.Envelope.OrderBy(lesson => lesson.TimeSlot.Position);


                foreach (var lesson in sortedLessons)
                {

                    try
                    {
                        if (lesson.Visible)
                        {
                            // Wypisz szczeg�y lekcji, nazwy w�a�ciwo�ci mog� si� r�ni�
                            Debug.Log($"nr: {lesson.TimeSlot.Position}, przedmiot: {lesson.Subject.Name}, nauczyciel: {lesson.TeacherPrimary.DisplayName}, godziny: {lesson.TimeSlot.Display}");
                            //  inputFieldPrefab.text = "nr " + lesson.TimeSlot.Position;


                           
                        }
                    }
                    catch (System.Exception) { }





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
                Debug.Log("Brak połączenia z internetem.");
                SceneManager.LoadScene("LoginPanel");
            }
            Debug.Log($"Błąd w logowaniu: {e}");
            SceneManager.LoadScene("LoginPanel");
        }
    }
}
