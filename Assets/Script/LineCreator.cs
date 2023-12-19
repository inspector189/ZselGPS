using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class LineCreator : MonoBehaviour
{
    public GameObject object1;
    public GameObject object2;
    public List<RectTransform> waypoints;
    private LineRenderer lineRenderer;

    void Start()
    {
        lineRenderer = gameObject.AddComponent<LineRenderer>();
        lineRenderer.material = new Material(Shader.Find("Sprites/Default"));
        lineRenderer.widthMultiplier = 0.02f;
        lineRenderer.startColor = Color.blue;
        lineRenderer.endColor = Color.blue;

        lineRenderer.sortingLayerName = "Foreground";
        lineRenderer.sortingOrder = 1;

        DrawOptimalPath();
    }

    void DrawOptimalPath()
    {
        List<Vector3> pathPoints = FindShortestPathThroughWaypoints();
        lineRenderer.positionCount = pathPoints.Count;
        lineRenderer.SetPositions(pathPoints.ToArray());
    }

    List<Vector3> FindShortestPathThroughWaypoints()
    {
        var shortestPath = new List<Vector3>();
        var bestDistance = float.MaxValue;

        // Sprawdzanie wszystkich permutacji waypoints
        foreach (var permutation in GetPermutations(waypoints, waypoints.Count))
        {
            var path = new List<Vector3> { object1.transform.position };
            var currentDistance = 0f;
            var lastPos = object1.transform.position;

            foreach (var waypoint in permutation)
            {
                var distance = Vector3.Distance(lastPos, waypoint.position);
                currentDistance += distance;
                path.Add(waypoint.position);
                lastPos = waypoint.position;
            }

            currentDistance += Vector3.Distance(lastPos, object2.transform.position);
            path.Add(object2.transform.position);

            if (currentDistance < bestDistance)
            {
                bestDistance = currentDistance;
                shortestPath = path;
            }
        }

        return shortestPath;
    }

    // Generator permutacji listy
    IEnumerable<IEnumerable<T>> GetPermutations<T>(IEnumerable<T> list, int length)
    {
        if (length == 1) return list.Select(t => new T[] { t });

        return GetPermutations(list, length - 1)
            .SelectMany(t => list.Where(e => !t.Contains(e)),
                        (t1, t2) => t1.Concat(new T[] { t2 }));
    }
}