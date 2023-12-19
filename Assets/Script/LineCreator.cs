using UnityEngine;
using System.Collections.Generic;

public class LineCreator : MonoBehaviour
{
    public Transform person; // Obiekt reprezentujący Person
    public Transform destination; // Cel podróży, np. drzwi

    public List<Transform> waypoints; // Lista waypointów

    private LineRenderer lineRenderer; // Komponent do rysowania linii

    void Start()
    {
        lineRenderer = gameObject.GetComponent<LineRenderer>();
        if (lineRenderer == null)
        {
            lineRenderer = gameObject.AddComponent<LineRenderer>();
            lineRenderer.material = new Material(Shader.Find("Sprites/Default"));
        }

        lineRenderer.startWidth = 0.02f; // Szerokość linii
        lineRenderer.endWidth = 0.02f;
        lineRenderer.startColor = Color.blue; // Ustawienie koloru na niebieski
        lineRenderer.endColor = Color.blue;

        DrawShortestPath();
    }

    void DrawShortestPath()
    {
        if (person == null || destination == null || waypoints.Count == 0)
            return;

        List<Transform> shortestPath = FindShortestPath(person, destination);
        DrawPath(shortestPath);
    }

    List<Transform> FindShortestPath(Transform start, Transform end)
    {
        List<Transform> path = new List<Transform>();

        Transform current = start;
        path.Add(current);

        while (current != end)
        {
            current = GetClosestWaypoint(current, end);
            path.Add(current);
        }

        return path;
    }

    Transform GetClosestWaypoint(Transform current, Transform target)
    {
        Transform closest = null;
        float minDistance = Mathf.Infinity;

        foreach (Transform waypoint in waypoints)
        {
            if (waypoint != current)
            {
                float distance = Vector3.Distance(waypoint.position, current.position);
                if (distance < minDistance)
                {
                    minDistance = distance;
                    closest = waypoint;
                }
            }
        }

        return closest;
    }

    void DrawPath(List<Transform> path)
    {
        if (path.Count < 2)
            return;

        lineRenderer.positionCount = path.Count;
        for (int i = 0; i < path.Count; i++)
        {
            lineRenderer.SetPosition(i, path[i].position);
        }
    }
}
