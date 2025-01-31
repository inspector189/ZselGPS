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
using UnityEngine.Rendering;

public class LineCreator : MonoBehaviour
{
    public ChooseImportantPlace chooseImportantPlace;
    public RectTransform targetRectTransform;
    private string symbol = "wloclawek";
    public int pietro;
    public int ostatniePietro;
    public RectTransform person; // Pozycja obiektu reprezentującego użytkownika
    public RectTransform target = null; // Pozycja wybranego celu
    public RectTransform Realtarget;
    public List<Transform> allWaypoints = new List<Transform>(); // Wszystkie waypointy w sieci
    public Transform CorridorsGroundF;
    public Transform CorridorsFirstF;
    public Transform CorridorsSecondF;

    private LineRenderer lineRenderer; // Komponent LineRenderer do rysowania linii
    public Color lineColor = Color.blue; // Kolor linii
    public float lineWidth = 0.01f; // Szerokość linii
    private RectTransform[] corridors;
    private List<string> groundFloorCorridors;
    private List<string> firstFloorCorridors;
    private List<string> secondFloorCorridors;
    private RectTransform previousTarget;

    [SerializeField]
    private RectTransform leftPartBuilding;
    [SerializeField]
    private RectTransform rightPartBuilding;

    public int pomocnicza = 0;
    public int pomocnicza2 = 0;
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
        pomocnicza2 = PlayerPrefs.GetInt("personPietro", 0);
        ClearLine();

    }
    public void SetTarget(RectTransform targetRectTransform)
    {
        if (target != null && target != previousTarget) 
        {
            previousTarget = target;
        }
        target = targetRectTransform;
        Debug.Log("Target ustawiony na: " + target);
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

        Realtarget = chooseImportantPlace.TargetReturn();
        
        if(target != null)
        {
            ClearLineOnFloorChange();
            FindAndDrawPath();
        }
    }
    public void ClearLineOnFloorChange()
    {
        if (PlayerPrefs.GetInt("checkifFloorChange") == 1)
        {
            int currentFloor = PlayerPrefs.GetInt("personPietro");
            int targetFloor = PlayerPrefs.GetInt("pietroPomieszczenia");

            if (currentFloor == targetFloor && Realtarget != null)
            {
                target = Realtarget;
                
            }  
           
            PlayerPrefs.SetInt("checkifFloorChange", 0);
            
        }
    }
    public RectTransform GetNearestStairs(RectTransform[] stairsArray, int pietroPomieszczenia)
    {
        if (pietroPomieszczenia == 0)
        {
            RectTransform nearestStairs = FindNearestStairsObject(stairsArray);
            return nearestStairs;
        }
        else if (pietroPomieszczenia == 1)
        {
            RectTransform nearestStairs = FindNearestStairsObject(stairsArray);
            return nearestStairs;
        }
        else if (pietroPomieszczenia == 2)
        {
            RectTransform nearestStairs = FindNearestStairsObject(stairsArray);
            return nearestStairs;
        }
        return null;
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
        FindAndDrawPath(); 
    }
    private bool IsRectTransformOverlapping(RectTransform rect1, RectTransform rect2)
    {
        Vector3[] corners1 = new Vector3[4];
        rect1.GetWorldCorners(corners1);

        Vector3[] corners2 = new Vector3[4];
        rect2.GetWorldCorners(corners2);

        return RectTransformUtility.RectangleContainsScreenPoint(rect2, corners1[0]) ||
               RectTransformUtility.RectangleContainsScreenPoint(rect2, corners1[1]) ||
               RectTransformUtility.RectangleContainsScreenPoint(rect2, corners1[2]) ||
               RectTransformUtility.RectangleContainsScreenPoint(rect2, corners1[3]);
    }
    public void FindAndDrawPath()
    {
        if (person == null || target == null || allWaypoints.Count == 0)
        {
            return;
        }

        if((IsRectTransformOverlapping(person, leftPartBuilding) && IsRectTransformOverlapping(Realtarget, rightPartBuilding)))
        {
            int currentFloor = PlayerPrefs.GetInt("personPietro");
            int targetFloor = PlayerPrefs.GetInt("pietroPomieszczenia");
            RectTransform[] stairsArray = SelectArrayStairsForFloor(currentFloor);
            if (currentFloor == targetFloor)
            {
                if(currentFloor == 0)
                {
                    target = GetNearestStairs(stairsArray, currentFloor);
                }
                else
                {
                    target = Realtarget;
                }
            }
            else
            {
                if(currentFloor == 0)
                {
                    target = GetNearestStairs(stairsArray, currentFloor);
                }
                else
                {
                    foreach (RectTransform nearestStair in stairsArray)
                    {
                        if (IsRectTransformOverlapping(nearestStair, rightPartBuilding))
                        {
                            target = nearestStair;
                        }
                    }
                }
            }
        }
        else if ((IsRectTransformOverlapping(person, rightPartBuilding) && IsRectTransformOverlapping(Realtarget, leftPartBuilding)))
        {
            int currentFloor = PlayerPrefs.GetInt("personPietro");
            int targetFloor = PlayerPrefs.GetInt("pietroPomieszczenia");
            RectTransform[] stairsArray = SelectArrayStairsForFloor(currentFloor);
            if (currentFloor == targetFloor)
            {
                if (currentFloor == 0)
                {
                    target = GetNearestStairs(stairsArray, currentFloor);
                }
                else
                {
                    target = Realtarget;
                }
            }
            else
            {
                if (currentFloor == 0 || currentFloor == 2)
                {
                    target = GetNearestStairs(stairsArray, currentFloor);
                }
                else if(currentFloor == 1)
                {
                    foreach (RectTransform nearestStair in stairsArray)
                    {
                        if (IsRectTransformOverlapping(nearestStair, leftPartBuilding))
                        {
                            target = nearestStair;
                            Debug.Log(" W foreachu: " + target.name);
                            break;
                        }
                    }
                    Debug.Log(" PO foreachu: " + target.name);
                }
            }
        }
        else if ((IsRectTransformOverlapping(person, leftPartBuilding) && IsRectTransformOverlapping(Realtarget, leftPartBuilding)) ||
                  (IsRectTransformOverlapping(person, rightPartBuilding) && IsRectTransformOverlapping(Realtarget, rightPartBuilding)))
        {
            int currentFloor = PlayerPrefs.GetInt("personPietro");
            int targetFloor = PlayerPrefs.GetInt("pietroPomieszczenia");
            if (currentFloor == targetFloor)
            {
               target = Realtarget;
            }
            else
            {
                RectTransform[] stairsArray = SelectArrayStairsForFloor(currentFloor);
                target = GetNearestStairs(stairsArray, currentFloor);
            }
        }
        //Draw
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
    public RectTransform[] SelectArrayStairsForFloor(int currentFloor)
    {
        currentFloor = PlayerPrefs.GetInt("personPietro");
        string[] corridorNames;

        switch (currentFloor)
        {
            case 0:
                corridorNames = new string[]
                {
                "Korytarz7",
                "Korytarz14",
                "Korytarz22",
                "Korytarz24",
                "Korytarz25"
                };
                break;
            case 1:
                corridorNames = new string[]
                {
                "Korytarz8",
                "Korytarz10",
                "Korytarz14",
                "Korytarz15",
                "Korytarz16"
                };
                break;
            case 2:
                corridorNames = new string[]
                {
                "Korytarz3",
                "Korytarz4"
                };
                break;
            default:
                return null; 
        }

        corridors = new RectTransform[corridorNames.Length];
        for (int i = 0; i < corridorNames.Length; i++)
        {
            GameObject corridorObject = GameObject.Find(corridorNames[i]);
            if (corridorObject != null)
            {
                corridors[i] = corridorObject.GetComponent<RectTransform>();
            }
            else
            {
                Debug.LogWarning($"Nie znaleziono obiektu o nazwie {corridorNames[i]}");
                corridors[i] = null;
            }
        }

        return corridors;
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
    private List<string> SetTransformChildName(Transform parent)
    {
        List<string> listToAdd = new List<string>();
        foreach (Transform child in parent.GetComponentInChildren<Transform>())
        {
            if (child != parent)
            {
                listToAdd.Add(child.name);
            }
        }
        return listToAdd;
    }
    private List<string> GetCorridorsForFloor(int floor)
    {
        switch (floor)
        {
            case 0:
                groundFloorCorridors = SetTransformChildName(CorridorsGroundF);
                return groundFloorCorridors;
            case 1:
                firstFloorCorridors = SetTransformChildName(CorridorsFirstF);
                return firstFloorCorridors;
            case 2:
                secondFloorCorridors = SetTransformChildName(CorridorsSecondF);
                return secondFloorCorridors;
            default:
                return new List<string>();
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