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
using Unity.VisualScripting; // Dodane dla obs ugi async/await
using System.Globalization;
using static GetValuesFromVulcan2;
using System.Xml;
using UnityEngine.Windows;


public class Godzina : MonoBehaviour
{
    private string symbol = "wloclawek";

    public Transform person; // Pozycja obiektu reprezentującego użytkownika
    public RectTransform target; // Pozycja wybranego celu
    public List<Transform> allWaypoints = new List<Transform>(); // Wszystkie waypointy w sieci

    private LineRenderer lineRenderer; // Komponent LineRenderer do rysowania linii
    public Color lineColor = Color.blue; // Kolor linii
    public float lineWidth = 0.01f; // Szerokość linii

    public void Start()
    {
        System.DateTime selectedDate = new System.DateTime(2024, 1, 11, 10, 0, 0);
        LoginProcess(selectedDate);
        lineRenderer = gameObject.AddComponent<LineRenderer>();
        lineRenderer.material = new Material(Shader.Find("Sprites/Default"));
        lineRenderer.startColor = lineColor;
        lineRenderer.endColor = lineColor;
        lineRenderer.startWidth = lineWidth;
        lineRenderer.endWidth = lineWidth;
        lineRenderer.useWorldSpace = true;
        lineRenderer.sortingOrder = 1; 
    }
    void Update()
    {
        
        FindAndDrawPath();
        // Wyświetl godzinę na interfejsie użytkownika

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
                
                        try
                    {
                        
                            // Wypisz szczeg y lekcji, nazwy w a ciwo ci mog  si  r ni 
                            Debug.Log($"nr: {lessonData.Position}, przedmiot: {lessonData.SubjectName}, nauczyciel: {lessonData.TeacherName}, godziny: {lessonData.StartTime} - {lessonData.EndTime}");
                     


                           
                        
                    }
                    catch (System.Exception) { }
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
                            // Wypisz szczeg y lekcji, nazwy w a ciwo ci mog  si  r ni 
                            Debug.Log($"nr: {lesson.TimeSlot.Position}, przedmiot: {lesson.Subject.Name}, nauczyciel: {lesson.TeacherPrimary.DisplayName}, godziny: {lesson.TimeSlot.Display}, sala:{lesson.Room.Code}");
                            //  inputFieldPrefab.text = "nr " + lesson.TimeSlot.Position;
                           
                                  //  Debug.Log("crntime: " + currentTime + "endtime: " + endTimes[i] + "starttime: " + startTimes[i]);
                                
                              
                                // Debug.Log($"Czas {currentTimeOfDay} znajduje się w przedziale dla lekcji: {lesson.TimeSlot.Display} ID={i}");
                                    SetTargetForLesson(lesson.Room.Code);
                               
                          
                           /* 
                                for (int i = 0; i < startTimes.Length; i++)
                                {
                                  //  Debug.Log("crntime: " + currentTime + "endtime: " + endTimes[i] + "starttime: " + startTimes[i]);
                                    
                                    TimeSpan currentTimeOfDay = selectedDate.TimeOfDay;
                                    if (currentTimeOfDay >= startTimes[i].TimeOfDay && currentTimeOfDay <= endTimes[i].TimeOfDay)
                                    {
                                    // Debug.Log($"Czas {currentTimeOfDay} znajduje się w przedziale dla lekcji: {lesson.TimeSlot.Display} ID={i}");
                                            
                                            SetTargetForLesson(lesson.Room.Code);
                                        
                                    }
                                    else
                                    {

                                    //  Debug.Log($"Czas {currentTimeOfDay} nie znajduje się w przedziale dla lekcji: {lesson.TimeSlot.Display} ID={i}");
                                    
                                    }
                                */
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
    private void SetTargetForLesson(string roomCode)
{               
                System.DateTime selectedDate = new System.DateTime(2024, 1, 11, 10, 0, 0);
                System.DateTime currentTime = new System.DateTime(2024, 1, 11, 10, 0, 0); // Data dla której chcesz sprawdzić lekcje
                System.DateTime[] startTimes = new System.DateTime[]
                {
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 6, 30, 0),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 7, 55, 1),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 8, 45, 1),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 9, 35, 1),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 10, 30, 1),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 11, 30, 1),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 12, 25, 1),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 13, 15, 1),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 14, 10, 1),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 15, 00, 1),
                     
                };

                System.DateTime[] endTimes = new System.DateTime[]
                {
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 7, 55, 0),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 8, 45, 0),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 9, 35, 0),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 10, 30, 0),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 11, 30, 0),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 12, 25, 0),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 13, 15, 0),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 14, 10, 0),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 15, 00, 0),
                    new System.DateTime(currentTime.Year, currentTime.Month, currentTime.Day, 15, 50, 0)
                };
                for (int i = 0; i < startTimes.Length; i++)
                {
                    //  Debug.Log("crntime: " + currentTime + "endtime: " + endTimes[i] + "starttime: " + startTimes[i]);
                    TimeSpan currentTimeOfDay = selectedDate.TimeOfDay;
                    Debug.Log(currentTimeOfDay + " " + selectedDate.TimeOfDay);
                    if (currentTimeOfDay >= startTimes[i].TimeOfDay && currentTimeOfDay <= endTimes[i].TimeOfDay)
                    {
                    // Debug.Log($"Czas {currentTimeOfDay} znajduje się w przedziale dla lekcji: {lesson.TimeSlot.Display} ID={i}");
                        string doorName = "Drzwi" + roomCode;
                        GameObject door = GameObject.Find(doorName);
                        if (door != null)
                        {
                            RectTransform doorTransform = door.GetComponent<RectTransform>();
                            target = doorTransform;
                            GetComponent<LineCreator>().target = doorTransform;
                            Debug.Log($"Zaktualizowano pozycję docelową na drzwi sali {roomCode}");
                            GetComponent<LineCreator>().SetWaypoints(allWaypoints);
                             // Przekazanie informacji o zmianie celu do LineCreator
                        
                        }
                        else
                        {
                            Debug.LogError($"Nie można znaleźć drzwi o nazwie {doorName}");
                        }
                    }
                }
    }
    public void SetWaypoints(List<Transform> waypoints)
    {
        allWaypoints.Clear();
        allWaypoints.AddRange(waypoints);
        FindAndDrawPath(); // Po dodaniu nowego waypointa ponownie rysujemy ścieżkę
    }
    private void FindAndDrawPath()
    {
        if (person == null || target == null || allWaypoints.Count == 0)
        {
            return;
        }

        Transform closestToPerson = FindClosestWaypoint(person.position);
        Transform closestToTarget = FindClosestWaypoint(target.position);

        if (closestToPerson != null && closestToTarget != null)
        {
            List<Transform> path = FindShortestPathDijkstra(closestToPerson, closestToTarget);
            if (path.Count > 0)
            {
                DrawPathWithLineRenderer(path);
            }
        }
    }
    
    private Transform FindClosestWaypoint(Vector3 position)
    {
        Transform closest = null;
        float minDistance = float.MaxValue;

        foreach (Transform waypoint in allWaypoints)
        {
            float distance = Vector3.Distance(waypoint.position, position);
            if (distance < minDistance)
            {
                minDistance = distance;
                closest = waypoint;
            }
        }

        return closest;
    }

    private List<Transform> FindShortestPathDijkstra(Transform start, Transform goal)
    {
        Dictionary<Transform, float> distances = new Dictionary<Transform, float>();
        Dictionary<Transform, Transform> predecessors = new Dictionary<Transform, Transform>();
        List<Transform> nodes = new List<Transform>(allWaypoints);

        foreach (Transform waypoint in allWaypoints)
        {
            distances[waypoint] = float.MaxValue;
            predecessors[waypoint] = null;
        }

        distances[start] = 0;

        while (nodes.Count > 0)
        {
            nodes.Sort((x, y) => distances[x].CompareTo(distances[y]));
            Transform smallest = nodes[0];
            nodes.Remove(smallest);

            if (smallest == goal)
            {
                return ConstructPath(predecessors, goal);
            }

            foreach (Transform neighbor in GetNeighbors(smallest))
            {
                float alt = distances[smallest] + Vector3.Distance(smallest.position, neighbor.position);
                if (alt < distances[neighbor])
                {
                    distances[neighbor] = alt;
                    predecessors[neighbor] = smallest;
                }
            }
        }

        return new List<Transform>();
    }

   private const float NEIGHBOR_DISTANCE_THRESHOLD = 0.05f; // Ustaw zasięg, w jakim waypointy są uznawane za sąsiadujące

private List<Transform> GetNeighbors(Transform current)
{
    List<Transform> neighbors = new List<Transform>();

    foreach (Transform waypoint in allWaypoints)
    {
        if (waypoint != current && Vector3.Distance(waypoint.position, current.position) <= NEIGHBOR_DISTANCE_THRESHOLD)
        {
            neighbors.Add(waypoint);
        }
    }

    return neighbors;
}
    private List<Transform> ConstructPath(Dictionary<Transform, Transform> predecessors, Transform goal)
    {
        List<Transform> path = new List<Transform>();
        Transform current = goal;

        while (current != null)
        {
            path.Add(current);
            current = predecessors[current];
        }

        path.Reverse();
        return path;
    }

    private void DrawPathWithLineRenderer(List<Transform> path)
    {
      
        lineRenderer.positionCount = path.Count;
        for (int i = 0; i < path.Count; i++)
        {
            Vector3 pathPosition = path[i].position;
            lineRenderer.SetPosition(i, new Vector3(pathPosition.x, pathPosition.y, 0)); // Ustawienie na płaszczyźnie 2D
        }
    }
}