using UnityEngine;
using System.Collections.Generic;

public class WaypointCreator : MonoBehaviour
{
    public List<RectTransform> KorytarzeParter;
    public List<RectTransform> KorytarzePietro;
    public List<RectTransform> KorytarzePietro2;
    public GameObject waypointParent;
    public GameObject waypointPrefab;
    private int currentFloor;
    public LineCreator waypointManager;
   public List<GameObject> createdWaypoints = new List<GameObject>();

    private void Update()
    {
        int newFloor = PlayerPrefs.GetInt("pietro");
        if (newFloor != currentFloor)
        {
            currentFloor = newFloor;
            SwitchFloor();
        }
    }

    private void SwitchFloor()
    {
         DisableAllWaypoints();
        List<RectTransform> currentFloorCorridors = GetCurrentFloorCorridors();
        CreateWaypointsForCorridors(currentFloorCorridors);
        
        // Stwórz listę Transform z Twoich stworzonych waypoints
        List<Transform> transformWaypoints = new List<Transform>();
        foreach (GameObject waypointObject in createdWaypoints)
        {
            transformWaypoints.Add(waypointObject.transform);
        }

        // Przekaż listę Transform do LineCreator
        waypointManager.SetWaypoints(transformWaypoints);
    }

    private void DisableAllWaypoints()
    {
        foreach (GameObject waypoint in createdWaypoints)
        {
            Destroy(waypoint);
        }
        createdWaypoints.Clear();
    }

    public List<RectTransform> GetCurrentFloorCorridors()
    {
        switch (currentFloor)
        {
            case 0: return KorytarzeParter;
            case 1: return KorytarzePietro;
            case 2: return KorytarzePietro2;
            default: return null;
        }
    }

    public void CreateWaypointsForCorridors(List<RectTransform> corridors)
{
    foreach (RectTransform corridor in corridors)
    {
        Vector3 corridorSize = corridor.rect.size;
        int numWaypoints = 0;

        if (PlayerPrefs.GetInt("pietro") == 0)
        {
            
    bool useXAxis = false;

    if (corridorSize.x > corridorSize.y)
    {
        numWaypoints = Mathf.FloorToInt(corridorSize.x / 20);
        useXAxis = true;
    }
    else
    {
        numWaypoints = Mathf.FloorToInt(corridorSize.y / 20);
    }

    for (int i = 0; i < numWaypoints; i++)
    {
        Vector3 startPoint;

        if (useXAxis)
        {
            float posX = Mathf.Lerp(-0.5f, 0.5f, (float)i / (numWaypoints - 1));
            startPoint = corridor.TransformPoint(new Vector3(posX * corridorSize.x, 0, 0));
        }
        else
        {
            float posY = Mathf.Lerp(-0.5f, 0.5f, (float)i / (numWaypoints - 1));
            startPoint = corridor.TransformPoint(new Vector3(0, posY * corridorSize.y, 0));
        }

        GameObject newWaypoint = Instantiate(waypointPrefab, startPoint, Quaternion.identity, waypointParent.transform);
        newWaypoint.transform.localScale = new Vector3(1f, 1f, 1f);
        createdWaypoints.Add(newWaypoint);
    }
        }
        else // Dla pięter 1 i 2
        {
            numWaypoints = Mathf.FloorToInt(Mathf.Max(corridorSize.x, corridorSize.y) / 20);
            bool useXAxis = corridorSize.x > corridorSize.y;

            for (int i = 0; i < numWaypoints; i++)
            {
                Vector3 startPoint;

                if (useXAxis)
                {
                    float posX = Mathf.Lerp(-0.5f, 0.5f, (float)i / (numWaypoints - 1));
                    startPoint = corridor.TransformPoint(new Vector3(posX * corridorSize.x, 0, 0));
                }
                else
                {
                    float posY = Mathf.Lerp(-0.5f, 0.5f, (float)i / (numWaypoints - 1));
                    startPoint = corridor.TransformPoint(new Vector3(0, posY * corridorSize.y, 0));
                }

                GameObject newWaypoint = Instantiate(waypointPrefab, startPoint, Quaternion.identity, waypointParent.transform);
                newWaypoint.transform.localScale = new Vector3(1f, 1f, 1f);
                createdWaypoints.Add(newWaypoint);
            }
        }
    }
      
}

}
  

