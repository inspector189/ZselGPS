using UnityEngine;
using System.Collections.Generic;

public class LineCreator : MonoBehaviour
{
    public GameObject object1;
    public GameObject object2;
    public List<GameObject> drawableAreas; // Lista obszarów, na których można rysować linię

    private LineRenderer blueLineRenderer;
    private LineRenderer grayLineRenderer;
    private Vector3 initialPosition1;

    void Start()
    {
        // Inicjalizacja niebieskiego LineRenderer
        blueLineRenderer = gameObject.AddComponent<LineRenderer>();
        SetupLineRenderer(blueLineRenderer, Color.blue, 0.025f);

        // Inicjalizacja szarego LineRenderer
        grayLineRenderer = new GameObject("GrayLine").AddComponent<LineRenderer>();
        SetupLineRenderer(grayLineRenderer, Color.gray, 0.025f);
        grayLineRenderer.enabled = false;

        // Zapisanie początkowej pozycji object1
        initialPosition1 = object1.transform.position;
    }

    void Update()
    {
        if (object1 != null && object2 != null)
        {
            Vector3 object1Pos = object1.transform.position;
            Vector3 object2Pos = object2.transform.position;

            if (IsLineInDrawableArea(object1Pos, object2Pos))
            {
                // Aktualizacja niebieskiej linii
                blueLineRenderer.SetPosition(0, new Vector3(object1Pos.x, object1Pos.y, 0));
                blueLineRenderer.SetPosition(1, new Vector3(object2Pos.x, object2Pos.y, 0));

                // Oblicz środek między object1 i object2
                Vector3 middlePoint = (object1Pos + object2Pos) / 2;

                // Aktualizacja szarej linii
                grayLineRenderer.enabled = true;
                grayLineRenderer.SetPosition(0, new Vector3(initialPosition1.x, initialPosition1.y, 0));
                grayLineRenderer.SetPosition(1, new Vector3(middlePoint.x, middlePoint.y, 0));
            }
        }
    }

    private bool IsLineInDrawableArea(Vector3 start, Vector3 end, int checks = 10)
    {
        for (int i = 0; i <= checks; i++)
        {
            Vector3 point = Vector3.Lerp(start, end, i / (float)checks);
            if (!IsInDrawableArea(point))
            {
                return false;
            }
        }
        return true;
    }

    private bool IsInDrawableArea(Vector3 position)
    {
        foreach (var area in drawableAreas)
        {
            RectTransform rectTransform = area.GetComponent<RectTransform>();
            if (rectTransform != null)
            {
                Vector3 localPos = rectTransform.InverseTransformPoint(position);
                if (rectTransform.rect.Contains(localPos))
                {
                    return true;
                }
            }
        }
        return false;
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
