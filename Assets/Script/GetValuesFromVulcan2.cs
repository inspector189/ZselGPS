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
        Debug.Log(PlayerPrefs.GetString("token"));
        if (PlayerPrefs.HasKey("token") && PlayerPrefs.HasKey("firebaseToken") && PlayerPrefs.HasKey("pk") && PlayerPrefs.HasKey("cert") || PlayerPrefs.GetString("token") == "testowe")
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                LoginProcess(selectedDate);
            }
            else
            {
                Debug.Log("tutej");
                SceneManager.LoadScene("LoginPanel");
            }
        }
        else
        {
            Debug.Log("tutej");
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

    public class LessonData
    {
        public int Position;
        public string SubjectName;
        public string TeacherName;
        public string StartTime;
        public string EndTime;
        public string RoomCode;
        public string SubjectCode;
    }

    public async void LoginProcess(DateTime selectedDate)
    {
        iput1.SetActive(true);
        iput2.SetActive(true);
        iput3.SetActive(true);
        iput4.SetActive(true);
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
                    try
                    {
                        // Wypisz szczegóły lekcji
                        Debug.Log($"nr: {lessonData.Position}, przedmiot: {lessonData.SubjectName}, nauczyciel: {lessonData.TeacherName}, godziny: {lessonData.StartTime} - {lessonData.EndTime}");

                        // Wypisywanie numerów lekcji
                        GameObject nowyInputField = Instantiate(inputFieldPrefabNumerLekcji, PanelNrLekcje);
                        TextMeshProUGUI placeholderText = nowyInputField.GetComponentInChildren<TextMeshProUGUI>();
                        placeholderText.text = $"{lessonData.Position}";

                        // Wypisywanie godzin lekcji
                        GameObject nowyInputField2 = Instantiate(inputGodzinki, PanelGodziny);
                        TextMeshProUGUI placeholdergodziny = nowyInputField2.GetComponentInChildren<TextMeshProUGUI>();
                        placeholdergodziny.text = $"{lessonData.StartTime}\n{lessonData.EndTime}";

                        // Wypisywanie lekcji
                        GameObject nowyInputField3 = Instantiate(inputPlan, PanelPlan);
                        TextMeshProUGUI placeholderPlan = nowyInputField3.GetComponentInChildren<TextMeshProUGUI>();
                        string nazwaLekcji = lessonData.SubjectName.Length > 35 ? lessonData.SubjectCode : lessonData.SubjectName;
                        placeholderPlan.text = $"{nazwaLekcji}\n{lessonData.RoomCode} {lessonData.TeacherName}";

                        // Wypisywanie nauczycieli
                        GameObject nowyInputField4 = Instantiate(inputNauczyciele, PanelNauczyciele);
                        TextMeshProUGUI placeholderNauczyciel = nowyInputField4.GetComponentInChildren<TextMeshProUGUI>();
                        placeholderNauczyciel.text = lessonData.TeacherName;
                    }
                    catch (System.Exception)
                    {
                        // Obsługa wyjątków
                    }
                    Timetable.SetActive(true);
                }
                
                inputFieldPrefabNumerLekcji.SetActive(false);
                inputGodzinki.SetActive(false);
                inputPlan.SetActive(false);
                inputNauczyciele.SetActive(false);
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
                            if (lesson.Subject.Name.Length > 35)
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
                    }
                    catch (System.Exception) { }
                    Timetable.SetActive(true);





                }
                inputFieldPrefabNumerLekcji.SetActive(false);
                inputGodzinki.SetActive(false);
                inputPlan.SetActive(false);
                inputNauczyciele.SetActive(false);
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
