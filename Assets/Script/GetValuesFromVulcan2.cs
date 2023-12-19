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
    public GameObject Timetable;
    private DateTime selectedDate;
    public Button btnPlus;
    public Button btnMinus;
    public TextMeshProUGUI dateText;
    public GameObject iput1;
    public GameObject iput2;
    public GameObject iput3;
    public GameObject iput4;

    void Start()
    {
        selectedDate = DateTime.Today;
        AdjustForWeekend(true);
        UpdateDateText();
        btnPlus.onClick.AddListener(PlusDate);
        btnMinus.onClick.AddListener(MinusDate);
        if (PlayerPrefs.HasKey("token") && PlayerPrefs.HasKey("firebaseToken") && PlayerPrefs.HasKey("pk") && PlayerPrefs.HasKey("cert"))
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                LoginProcess(selectedDate);
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
        EnableAllChildren(iput1);
        EnableAllChildren(iput2);
        EnableAllChildren(iput3);
        EnableAllChildren(iput4);
    }
    
    private void DestroyAllChildren(GameObject parent)
    {
        // Pobierz listę dzieci
        List<GameObject> children = new List<GameObject>();
        foreach (Transform child in parent.transform)
        {
            children.Add(child.gameObject);
        }

        // Zniszcz każde dziecko
        foreach (GameObject child in children)
        {
            DestroyImmediate(child);
        }
    }
    public async void LoginProcess(DateTime selectedDate)
    {
        iput1.SetActive(true);
        iput2.SetActive(true);
        iput3.SetActive(true);
        iput4.SetActive(true);
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
                        placeholdergodziny.text = $"{lesson.TimeSlot.Start}\n{lesson.TimeSlot.End}";
                        //wypisywanie lekcji
                        GameObject nowyInputField3 = Instantiate(inputPlan, PanelPlan);

                        InputField inputField3 = nowyInputField3.GetComponent<InputField>();

                        // Znajdź komponent TextMeshPro, który jest dzieckiem InputField
                        TextMeshProUGUI placeholderPlan = nowyInputField3.GetComponentInChildren<TextMeshProUGUI>();
                        if(lesson.Subject.Name.Length > 35)
                        {
                            string nazwaLekcji = lesson.Subject.Kod;
                            placeholderPlan.text = $"{nazwaLekcji}\n{lesson.Room.Code} {lesson.TeacherPrimary.DisplayName}";
                        }
                        else
                        {
                            string nazwaLekcji = lesson.Subject.Name;
                            placeholderPlan.text = $"{nazwaLekcji}\n{lesson.Room.Code} {lesson.TeacherPrimary.DisplayName}";
                        }
                        
                        //wypisywanie nauczycieli
                        GameObject nowyInputField4 = Instantiate(inputNauczyciele, PanelNauczyciele);

                        InputField inputField4 = nowyInputField4.GetComponent<InputField>();

                        // Znajdź komponent TextMeshPro, który jest dzieckiem InputField
                        TextMeshProUGUI placeholderNauczyciel = nowyInputField4.GetComponentInChildren<TextMeshProUGUI>();
                        placeholderNauczyciel.text = $"";
                    }
                }catch(System.Exception) { }
                Timetable.SetActive(true);





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

    public void DeleteAccount()
    {
        PlayerPrefs.DeleteKey("token");
        PlayerPrefs.DeleteKey("firebaseToken");
        PlayerPrefs.DeleteKey("pk");
        PlayerPrefs.DeleteKey("cert");
    }

    private void AdjustForWeekend(bool addingDay)
    {
        if (addingDay)
        {
            while (selectedDate.DayOfWeek == DayOfWeek.Saturday || selectedDate.DayOfWeek == DayOfWeek.Sunday)
            {
                selectedDate = selectedDate.AddDays(1);
            }
        }
        else
        {
            while (selectedDate.DayOfWeek == DayOfWeek.Saturday || selectedDate.DayOfWeek == DayOfWeek.Sunday)
            {
                selectedDate = selectedDate.AddDays(-1);
            }
        }
    }

    private void UpdateDateText()
    {
        CultureInfo ci = new CultureInfo("pl-PL");
        string dayOfWeek = ci.TextInfo.ToTitleCase(selectedDate.ToString("dddd", ci));
        string formattedDate = $"{dayOfWeek}, {selectedDate:dd.MM}";
        dateText.text = formattedDate;
        Debug.Log(formattedDate);
    }


    private void EnableAllChildren(GameObject parent)
    {
        // Iteracja przez wszystkie dzieci danego obiektu i ich włączenie
        foreach (Transform child in parent.transform)
        {
            child.gameObject.SetActive(true);
        }
    }
    public void MinusDate()
    {
        DestroyAllChildren(iput1);
        DestroyAllChildren(iput2);
        DestroyAllChildren(iput3);
        DestroyAllChildren(iput4);
        selectedDate = selectedDate.AddDays(-1);
        AdjustForWeekend(false);
        UpdateDateText();
        LoginProcess(selectedDate);
    }

    public void PlusDate()
    {
        DestroyAllChildren(iput1);
        DestroyAllChildren(iput2);
        DestroyAllChildren(iput3);
        DestroyAllChildren(iput4);
        selectedDate = selectedDate.AddDays(1);
        AdjustForWeekend(true);
        UpdateDateText();
        LoginProcess(selectedDate);
    }
}
