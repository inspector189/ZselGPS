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

public class GetValuesFromVulcan2 : MonoBehaviour
{
    public string symbol = "wloclawek";
    private int i = 0;
    public GameObject inputFieldPrefabNumerLekcji; // Prefab dla Input.Textboxa
    public Transform PanelNrLekcje;
    public GameObject inputGodzinki;
    public Transform PanelGodziny;
    public GameObject inputPlan;
    public Transform PanelPlan;
    public GameObject inputNauczyciele;
    public Transform PanelNauczyciele;
    
    
    void Start()
    {
        if (PlayerPrefs.HasKey("token") && PlayerPrefs.HasKey("firebaseToken") && PlayerPrefs.HasKey("pk") && PlayerPrefs.HasKey("cert"))
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                LoginProcess(i);
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

    public async void LoginProcess(int i)
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

            DateTime selectedDate = new DateTime(2023, 11, 09); // Pobieranie lekcji na dzisiejszy dzie�

            var lessonsResponse = await unitApiClient.GetAllAsync(GetLessonsByPupilQuery.ApiEndpoint, new GetLessonsByPupilQuery(
                            firstAccount.Pupil.Id,
                            selectedDate, // Data pocz�tkowa
                            selectedDate, // Data ko�cowa
                            DateTime.MinValue, // Dodatkowe parametry (je�li s� wymagane)
                            500))
                        .ToListAsync();
            var uniqueLessons = lessonsResponse
                            .GroupBy(lesson => new { lesson.TimeSlot.Position, lesson.Subject.Name, lesson.TeacherMod.DisplayName })
                            .Select(group => group.First())
                            .OrderBy(lesson => lesson.TimeSlot.Position);
                            
           
                           
            var orderedLessons = uniqueLessons.OrderBy(lesson => lesson.TimeSlot.Position);
            
            foreach (var lesson in orderedLessons)
            {
               
                // Wypisz szczeg�y lekcji, nazwy w�a�ciwo�ci mog� si� r�ni�
                Debug.Log($"nr: {lesson.TimeSlot.Position}, przedmiot: {lesson.Subject.Name}, nauczyciel: {lesson.TeacherMod.DisplayName}, godziny: {lesson.TimeSlot.Display}");
              //  inputFieldPrefab.text = "nr " + lesson.TimeSlot.Position;
              
               
                    //wypisywanie numerow lekcji
                    GameObject nowyInputField = Instantiate(inputFieldPrefabNumerLekcji, PanelNrLekcje);
                     
                         InputField inputField = nowyInputField.GetComponent<InputField>();

                      // Znajdź komponent TextMeshPro, który jest dzieckiem InputField
                        TextMeshProUGUI placeholderText = nowyInputField.GetComponentInChildren<TextMeshProUGUI>();
                    placeholderText.text = $"{lesson.TimeSlot.Position}";

                    //wypisywanie godzin lekcji
                        GameObject nowyInputField2 = Instantiate(inputGodzinki, PanelGodziny);
                     
                         InputField inputField2 = nowyInputField2.GetComponent<InputField>();

                      // Znajdź komponent TextMeshPro, który jest dzieckiem InputField
                        TextMeshProUGUI placeholdergodziny = nowyInputField2.GetComponentInChildren<TextMeshProUGUI>();
                    placeholdergodziny.text = $"{lesson.TimeSlot.Display}";
                    //wypisywanie lekcji
                     GameObject nowyInputField3 = Instantiate(inputPlan, PanelPlan);
                     
                         InputField inputField3 = nowyInputField3.GetComponent<InputField>();

                      // Znajdź komponent TextMeshPro, który jest dzieckiem InputField
                        TextMeshProUGUI placeholderPlan = nowyInputField3.GetComponentInChildren<TextMeshProUGUI>();
                    placeholderPlan.text = $"{lesson.Subject.Name}";
                    //wypisywanie nauczycieli
                     GameObject nowyInputField4 = Instantiate(inputNauczyciele, PanelNauczyciele);
                     
                         InputField inputField4 = nowyInputField4.GetComponent<InputField>();

                      // Znajdź komponent TextMeshPro, który jest dzieckiem InputField
                        TextMeshProUGUI placeholderNauczyciel = nowyInputField4.GetComponentInChildren<TextMeshProUGUI>();
                    placeholderNauczyciel.text = $"{lesson.TeacherMod.DisplayName}";
                  
                
                
               
            }
            
            
            PlayerPrefs.SetInt("IloscLekcji", i);
            inputFieldPrefabNumerLekcji.SetActive(false);
            inputGodzinki.SetActive(false);
            inputPlan.SetActive(false);
            inputNauczyciele.SetActive(false);
           
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
                Debug.Log("Brak po��czenia z internetem.");
                SceneManager.LoadScene("LoginPanel");
            }
            Debug.Log($"B��d w logowaniu: {e}");
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
