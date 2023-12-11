using UnityEngine;

public class LineCreator : MonoBehaviour
{
    public GameObject object1;
    public GameObject object2;
    private LineRenderer blueLineRenderer;
    private LineRenderer grayLineRenderer;
    private Vector3 initialPosition1;
    private float previousLength;

    void Start()
    {
        // Inicjalizacja niebieskiego LineRenderer
        blueLineRenderer = gameObject.AddComponent<LineRenderer>();
        SetupLineRenderer(blueLineRenderer, Color.blue, 0.025f);

        // Inicjalizacja szarego LineRenderer
        grayLineRenderer = new GameObject("GrayLine").AddComponent<LineRenderer>();
        SetupLineRenderer(grayLineRenderer, Color.gray, 0.025f);
        grayLineRenderer.enabled = false;

        // Zapisanie pocz�tkowej pozycji object1
        initialPosition1 = object1.transform.position;

        // Ustawienie pocz�tkowej d�ugo�ci
        previousLength = Vector3.Distance(object1.transform.position, object2.transform.position);
    }
    Vector3 FindMiddlePoint(Vector3 point1, Vector3 point2)
    {
         // Oblicz środek pomiędzy point1 i point2
         Vector3 middlePoint = (point1 + point2) * 0.5f;
         return middlePoint;
    }
    void Update()
    {
       if (object1 != null && object2 != null)
    {
        // Znajdź środek korytarza
        Vector3 middlePoint = FindMiddlePoint(object1.transform.position, object2.transform.position);

        // Aktualizuj niebieską linię
        blueLineRenderer.SetPosition(0, new Vector3(object1.transform.position.x, object1.transform.position.y, 0));
        blueLineRenderer.SetPosition(1, new Vector3(object2.transform.position.x, object2.transform.position.y, 0));

        // Aktywuj i zaktualizuj szarą linię do środka korytarza
        grayLineRenderer.enabled = true;
        grayLineRenderer.SetPosition(0, initialPosition1);
        grayLineRenderer.SetPosition(1, new Vector3(middlePoint.x, middlePoint.y, 0));
    }
    }

    private void SetupLineRenderer(LineRenderer lineRenderer, Color color, float width)
    {
        lineRenderer.startWidth = width;
        lineRenderer.endWidth = width;
        lineRenderer.positionCount = 2;
        lineRenderer.material = new Material(Shader.Find("Sprites/Default"));
        lineRenderer.startColor = color;
        lineRenderer.endColor = color;
        lineRenderer.useWorldSpace = true;
    }
}

