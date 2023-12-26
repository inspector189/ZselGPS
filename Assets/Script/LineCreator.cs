using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class LineCreator : MonoBehaviour
{
    public Transform person; // Pozycja obiektu reprezentującego użytkownika
    public RectTransform target; // Pozycja wybranego celu
    public List<Transform> allWaypoints = new List<Transform>(); // Wszystkie waypointy w sieci

    private LineRenderer lineRenderer; // Komponent LineRenderer do rysowania linii
    public Color lineColor = Color.blue; // Kolor linii
    public float lineWidth = 0.01f; // Szerokość linii

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
    }
    public void buttonClicked()
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

    private void Update()
    {
        FindAndDrawPath();
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
