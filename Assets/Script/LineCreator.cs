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

        // Zapisanie pocz¹tkowej pozycji object1
        initialPosition1 = object1.transform.position;

        // Ustawienie pocz¹tkowej d³ugoœci
        previousLength = Vector3.Distance(object1.transform.position, object2.transform.position);
    }

    void Update()
    {
        if (object1 != null && object2 != null)
        {
            Vector3 pos1 = object1.transform.position;
            Vector3 pos2 = object2.transform.position;

            // Aktualizacja niebieskiej linii
            blueLineRenderer.SetPosition(0, new Vector3(pos1.x, pos1.y, 0));
            blueLineRenderer.SetPosition(1, new Vector3(pos2.x, pos2.y, 0));

            // Sprawdzanie, czy dystans siê zmniejsza
            float currentLength = Vector3.Distance(pos1, pos2);
            if (currentLength < previousLength)
            {
                // Aktywacja i aktualizacja szarej linii
                grayLineRenderer.enabled = true;
                grayLineRenderer.SetPosition(0, initialPosition1);
                grayLineRenderer.SetPosition(1, new Vector3(pos1.x, pos1.y, 0));
            }

            previousLength = currentLength;
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

