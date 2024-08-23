using System;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using Unity.VisualScripting;
using UnityEngine;
using static GetValuesFromVulcan2;
using UnityEngine.SceneManagement;
using Vulcanova.Uonet.Api.Auth;
using Vulcanova.Uonet.Api.Common;
using Vulcanova.Uonet.Api.Schedule;
using Vulcanova.Uonet.Api;
using Vulcanova.Uonet.Signing;
using System.Linq;

public class LineCreator : MonoBehaviour
{
    private string symbol = "wloclawek";
    public int pietro;
    public int ostatniePietro;
    public RectTransform person; // Pozycja obiektu reprezentującego użytkownika
    public RectTransform target; // Pozycja wybranego celu
    public RectTransform Realtarget;
    public List<Transform> allWaypoints = new List<Transform>(); // Wszystkie waypointy w sieci
    public Transform CorridorsGroundF;
    public Transform CorridorsFirstF;
    public Transform CorridorsSecondF;

    private LineRenderer lineRenderer; // Komponent LineRenderer do rysowania linii
    public Color lineColor = Color.blue; // Kolor linii
    public float lineWidth = 0.01f; // Szerokość linii

    private List<string> groundFloorCorridors;
    private List<string> firstFloorCorridors;
    private List<string> secondFloorCorridors;

    public int pomocnicza = 0;
    private void Start()
    {
        // Inicjalizacja LineRenderer
        lineRenderer = gameObject.AddComponent<LineRenderer>();
        lineRenderer.material = new Material(Shader.Find("Sprites/Default"));
        lineRenderer.startColor = lineColor;
        lineRenderer.endColor = lineColor;
        lineRenderer.startWidth = lineWidth;
        lineRenderer.endWidth = lineWidth;
        lineRenderer.useWorldSpace = true;
        lineRenderer.sortingOrder = 1; // Zapewnia, że linia jest rysowana nad innymi elementami
        InitializeCorridors();
        ClearLine();
        System.DateTime selectedDate = System.DateTime.Now;
        LoginProcess(selectedDate);

    }
    public void buttonClicked()
    {
        ostatniePietro = pietro;
        float x = PlayerPrefs.GetFloat("DrzwiSaliX");
        Vector2 position = target.anchoredPosition;
        position.x = x;
        target.anchoredPosition = position;

        float y = PlayerPrefs.GetFloat("DrzwiSaliY");
        Vector2 position2 = target.anchoredPosition;
        position2.y = y;
        target.anchoredPosition = position2;

        pietro = PlayerPrefs.GetInt("pietroPomieszczenia");
        pomocnicza = 1;
        if (pietro != ostatniePietro)
        {
            Transform nearestCorridor = FindNearestCorridor();
            if (nearestCorridor != null)
            {
                person.position = nearestCorridor.position;
            }
        }
    }

    private void Update()
    {
        if(pomocnicza == 1)
        {
            int pietroPomieszczenia = PlayerPrefs.GetInt("pietroPomieszczenia");

            if (PlayerPrefs.GetInt("pietroPomieszczenia") != PlayerPrefs.GetInt("personPietro"))
            {
                RectTransform[] stairsArray = null;

                if (pietroPomieszczenia == 0)
                {
                    stairsArray = GetStairsArray(CorridorsGroundF);
                    RectTransform nearestStairs = FindNearestStairsObject(stairsArray);
                    person = nearestStairs;
                }
                else if (pietroPomieszczenia == 1)
                {
                    stairsArray = GetStairsArray(CorridorsFirstF);
                    RectTransform nearestStairs = FindNearestStairsObject(stairsArray);
                    person = nearestStairs;
                }
                else if (pietroPomieszczenia == 2)
                {
                    stairsArray = GetStairsArray(CorridorsSecondF);
                    RectTransform nearestStairs = FindNearestStairsObject(stairsArray);
                    person = nearestStairs;
                }
            }
            else
            {
                float x = PlayerPrefs.GetFloat("DrzwiSaliX");
                Vector2 position = target.anchoredPosition;
                position.x = x;
                target.anchoredPosition = position;

                float y = PlayerPrefs.GetFloat("DrzwiSaliY");
                Vector2 position2 = target.anchoredPosition;
                position2.y = y;
                target.anchoredPosition = position2;
            }
        }
        
        FindAndDrawPath();
    }
    RectTransform[] GetStairsArray(Transform corridor)
    {
        List<RectTransform> stairsList = new List<RectTransform>();
        foreach (Transform child in corridor)
        {
            if (child.name.StartsWith("stairs"))
            {
                stairsList.Add(child as RectTransform);
            }
        }
        return stairsList.ToArray();
    }

    RectTransform FindNearestStairsObject(RectTransform[] stairsArray)
    {
        RectTransform nearestStairs = null;
        float shortestDistance = float.MaxValue;

        foreach (RectTransform stairs in stairsArray)
        {
            float distance = Vector3.Distance(person.position, stairs.position);
            if (distance < shortestDistance)
            {
                shortestDistance = distance;
                nearestStairs = stairs;
            }
        }

        return nearestStairs;
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

            Dictionary<string, string> doorDictionary = new Dictionary<string, string>
        {
            { "Drzwi501", "0a" },
            { "Drzwi502", "0a" },
            { "Drzwi503", "0a" },
            { "Drzwi504", "0a" },
            { "Drzwi505", "0a" },
            { "Drzwi506", "0a" },
            { "Drzwi507", "0a" },
            { "Drzwi513", "0a" },
            { "Drzwi512", "0a" },
            { "Drzwi511", "0a" },
            { "Drzwi509", "0a" },
            { "Drzwi508", "0a" },
            { "Drzwi318", "0a" },
            { "Drzwi317", "0a" },
            { "Drzwi316", "0a" },
            { "Drzwi315", "0a" },
            { "Drzwi344", "0a" },
            { "Drzwi314", "0a" },
            { "Drzwi313", "0a" },
            { "Drzwi345", "0a" },
            { "Drzwi346", "0a" },
            { "Drzwi312", "0a" },
            { "Drzwi311", "0a" },
            { "Drzwi301", "0a" },
            { "Drzwi308", "0a" },
            { "Drzwi307A", "0a" },
            { "Drzwi307B", "0a" },
            { "Drzwi302", "0a" },
            { "Drzwi307", "0a" },
            { "Drzwi306", "0a" },
            { "Drzwi304", "0a" },
            { "Drzwi305", "0a" },
            { "Drzwi303", "0a" },
            { "Drzwi13", "0b" },
            { "Drzwi14", "0b" },
            { "Drzwi15", "0b" },
            { "Drzwi10", "0b" },
            { "Drzwi9", "0b" },
            { "Drzwi8", "0b" },
            { "Drzwi7", "0b" },
            { "Drzwi6", "0b" },
            { "Drzwi5", "0b" },
            { "Drzwi21", "0b" },
            { "Drzwi22", "0b" },
            { "Drzwi23", "0b" },
            { "Drzwi24", "0b" },
            { "Drzwi25", "0b" },
            { "Drzwi20", "0b" },
            { "Drzwi19", "0b" },
            { "Drzwi17", "0b" },
            { "Drzwi26", "0b" },
            { "Drzwi27", "0b" },
        };


        Transform closestToPerson = FindClosestWaypoint(person.position);
        Transform closestToTarget = FindClosestWaypoint(target.position);
        if (closestToPerson != null && closestToTarget != null)
        {
            List<Transform> path;
            if (pietro != ostatniePietro)
            {
                Transform nearestCorridor = FindNearestCorridor();
                if (nearestCorridor != null)
                {
                    // Find path from person to the nearest corridor on the current floor
                    List<Transform> pathToCorridor = FindShortestPathDijkstra(closestToPerson, nearestCorridor);
                    // Find path from the nearest corridor to the target on the new floor
                    Transform targetCorridor = FindNearestCorridorToTarget();
                    List<Transform> pathFromCorridorToTarget = FindShortestPathDijkstra(targetCorridor, closestToTarget);

                    // Combine paths
                    path = new List<Transform>();
                    path.AddRange(pathToCorridor);
                    path.AddRange(pathFromCorridorToTarget);
                }
                else
                {
                    // Fallback to direct path if corridor is not found
                    path = FindShortestPathDijkstra(closestToPerson, closestToTarget);
                }
            }
            else
            {
                path = FindShortestPathDijkstra(closestToPerson, closestToTarget);
            }

            if (path.Count > 0)
            {
                DrawPathWithLineRenderer(path);
            }
        }
        /*if (closestToPerson != null && closestToTarget != null)
        {
            List<Transform> path = FindShortestPathDijkstra(closestToPerson, closestToTarget);
            if (path.Count > 0)
            {
                DrawPathWithLineRenderer(path);
            }
        }*/
    }
    private Transform FindNearestCorridorToTarget()
    {
        List<string> currentFloorCorridors = GetCorridorsForFloor(pietro);
        Transform closestCorridor = null;
        float minDistance = float.MaxValue;

        foreach (string corridorName in currentFloorCorridors)
        {
            GameObject corridorObject = GameObject.Find(corridorName);
            if (corridorObject != null)
            {
                float distance = Vector3.Distance(target.position, corridorObject.transform.position);
                if (distance < minDistance)
                {
                    minDistance = distance;
                    closestCorridor = corridorObject.transform;
                }
            }
        }
        Debug.Log("Najbliższy korytarz " + closestCorridor);
        return closestCorridor;
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
    private void InitializeCorridors()
    {
        groundFloorCorridors = new List<string>
        {
            "Korytarz7",
            "Korytarz14",
            "Korytarz22",
            "Korytarz24",
            "Korytarz25"
        };

        firstFloorCorridors = new List<string>
        {
            "Korytarz8",
            "Korytarz10",
            "Korytarz14",
            "Korytarz15",
            "Korytarz16"
        };

        secondFloorCorridors = new List<string>
        {
            "Korytarz3",
            "Korytarz4"
        };
    }
    private Transform FindNearestCorridor()
    {
        List<string> currentFloorCorridors = GetCorridorsForFloor(ostatniePietro);
        Transform closestCorridor = null;
        float minDistance = float.MaxValue;

        foreach (string corridorName in currentFloorCorridors)
        {
            GameObject corridorObject = GameObject.Find(corridorName);
            if (corridorObject != null)
            {
                float distance = Vector3.Distance(person.position, corridorObject.transform.position);
                if (distance < minDistance)
                {
                    minDistance = distance;
                    closestCorridor = corridorObject.transform;
                }
            }
        }
        return closestCorridor;
    }
    private List<string> GetCorridorsForFloor(int floor)
    {
        switch (floor)
        {
            case 0:
                return groundFloorCorridors;
            case 1:
                return firstFloorCorridors;
            case 2:
                return secondFloorCorridors;
            default:
                return new List<string>();
        }
    }
    public async void LoginProcess(DateTime selectedDate)
    {
        
        try
        {
            string token = PlayerPrefs.GetString("token");
            if (token == "testowe" || SceneManager.GetActiveScene().name == "ToTheClassroom" || SceneManager.GetActiveScene().name == "ImportantPlaces" || SceneManager.GetActiveScene().name == "MapaTSwobodny")
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
                var currentDate = DateTime.Now;
                var currentTime = DateTime.Now.TimeOfDay;

                string nearestLessonCode = "";
                string nearestLessonSubject = "";
                DateTime nearestLessonStart = DateTime.MaxValue;
                bool isLessonCurrentlyHappening = false;

                foreach (var lesson in sortedLessons)
                {
                    try
                    {
                        if (lesson.Visible)
                        {
                            var startTime = TimeSpan.Parse(lesson.TimeSlot.Start);
                            var endTime = TimeSpan.Parse(lesson.TimeSlot.End);

                            var lessonStartDateTime = currentDate.Add(startTime);
                            var lessonEndDateTime = currentDate.Add(endTime);


                            if (currentDate.Add(currentTime) >= lessonStartDateTime && currentDate.Add(currentTime) < lessonEndDateTime)
                            {
                                nearestLessonCode = lesson.Room.Code;
                                nearestLessonSubject = lesson.Subject.Name;
                                isLessonCurrentlyHappening = true;
                                string doorName = "Drzwi" + nearestLessonCode;
                                GameObject door = GameObject.Find(doorName);
                                RectTransform doorTransform = door.GetComponent<RectTransform>();
                                GetComponent<LineCreator>().target = doorTransform;
                                GetComponent<LineCreator>().SetWaypoints(allWaypoints);
                                break; 
                            }

                            else if (currentDate.Add(currentTime) < lessonStartDateTime && lessonStartDateTime < nearestLessonStart)
                            {
                                nearestLessonStart = lessonStartDateTime;
                                nearestLessonCode = lesson.Room.Code;
                                nearestLessonSubject = lesson.Subject.Name;
                            }
                        }
                    }
                    catch (System.Exception ex)
                    {
                        Debug.LogError($"Wystąpił wyjątek: {ex.Message}");
                    }
                }

                if (!isLessonCurrentlyHappening && !string.IsNullOrEmpty(nearestLessonCode) && nearestLessonStart > currentDate.Add(currentTime))
                {
                    string doorName = "Drzwi" + nearestLessonCode;
                    GameObject door = GameObject.Find(doorName);
                    if (door != null)
                    {
                        RectTransform doorTransform = door.GetComponent<RectTransform>();
                        GetComponent<LineCreator>().target = doorTransform;
                        GetComponent<LineCreator>().SetWaypoints(allWaypoints);
                    }
                    else
                    {
                        Debug.LogError($"Drzwi o nazwie {doorName} nie zostały znalezione.");
                    }
                }
                else if (string.IsNullOrEmpty(nearestLessonCode))
                {
                    Debug.Log("Nie znaleziono lekcji spełniającej kryteria.");
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
    public bool CheckIfLineExist()
    {
        if(lineRenderer != null)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public void ClearLine()
    {
        if (lineRenderer != null)
        {
            lineRenderer.positionCount = 0;
        }
    }


}