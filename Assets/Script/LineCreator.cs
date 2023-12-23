using UnityEngine;
using System.Collections.Generic;
using SVS.AI;

public class LineCreator : MonoBehaviour
{
    public Transform person;
    public Transform destination;
    public List<RectTransform> KorytarzePietro;
    private LineRenderer lineRenderer;
    public WaypointCreator waypointCreator;
    private Vector3 personPosition;
    private Vector3 destinationPosition;

    private void Start()
    {
        lineRenderer = GetComponent<LineRenderer>();
        lineRenderer.positionCount = 0; // Wyczyszczenie istniejących punktów
        lineRenderer.startWidth = 0.02f; // Szerokość linii
        lineRenderer.endWidth = 0.02f;
        lineRenderer.startColor = Color.blue; // Ustawienie koloru na niebieski
        lineRenderer.endColor = Color.blue;

        // Pobranie pozycji początkowej
        personPosition = person.position;
        destinationPosition = destination.position;
    }

    private void Update()
    {
        // Aktualizacja pozycji obiektów Person i Destination
        personPosition = person.position;
        destinationPosition = destination.position;

        if (KorytarzePietro != null && KorytarzePietro.Count > 0 && waypointCreator != null)
        {
            List<RectTransform> corridors = waypointCreator.GetCurrentFloorCorridors();
            waypointCreator.CreateWaypointsForCorridors(corridors); // Wywołanie metody generującej waypointy

            List<GameObject> waypoints = waypointCreator.createdWaypoints; // Pobranie listy waypointów

            List<Vector3> path = new List<Vector3>();
            foreach (GameObject waypoint in waypoints)
            {
                path.Add(waypoint.transform.position); // Dodanie pozycji waypointu do ścieżki
            }

            Debug.Log("Path count: " + (path != null ? path.Count : 0));
            if (path != null && path.Count > 0)
            {
                DrawPath(path);
            }
            else
            {
                lineRenderer.positionCount = 0; // Wyczyszczenie linii, gdy nie ma ścieżki
            }
        }
        else
        {
            Debug.LogError("KorytarzePietro list or waypointCreator is not assigned or empty. Please assign and ensure waypoints are generated.");
        }
    }

    private void DrawPath(List<Vector3> path)
    {
        lineRenderer.positionCount = path.Count;
        for (int i = 0; i < path.Count; i++)
        {
            lineRenderer.SetPosition(i, path[i]);
        }
    }
}
