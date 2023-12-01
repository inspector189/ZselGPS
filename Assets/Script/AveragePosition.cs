using System.Collections.Generic;
using UnityEngine;

public class AveragePosition
{
    const int maxAver = 10;
    const int maxCount = 1000;
    private int lastRecalculateFrame = 0;
    private float totalWeight = 0.0f;
    const int maxRecalculateFrameCount = 1000;
    const int maxAverageMeasurements = 10;
    private int count = 0; // Zmienna count powinna byæ zadeklarowana raz
    private Queue<Vector2> positions = new Queue<Vector2>(); // Kolejka positions powinna byæ zadeklarowana raz
    private Vector2 sumPosition = new Vector2(0.0f, 0.0f); // Zmienna sumPosition powinna byæ zadeklarowana raz

    public void AddWeightedPosition(Vector2 pos, float weight)
    {
        sumPosition += pos * weight;
        totalWeight += weight;
    }

    public Vector2 GetWeightedAveragePosition()
    {
        if (totalWeight > 0)
            return sumPosition / totalWeight;

        return Vector2.zero;
    }

    private void RecalculateQueue()
    {
        sumPosition = Vector2.zero;
        totalWeight = 0.0f; // Dodano resetowanie totalWeight podczas przeliczania kolejki
        foreach (Vector2 v in positions)
        {
            sumPosition += v;
            totalWeight += 1; // Dodano zwiêkszanie totalWeight dla ka¿dej pozycji
        }
        count = 0; // Resetowanie count jest konieczne, aby unikn¹æ ponownego przeliczania
    }

    private void RecalculateQueueIfNeeded()
    {
        if (Time.frameCount - lastRecalculateFrame > maxRecalculateFrameCount)
        {
            RecalculateQueue();
            lastRecalculateFrame = Time.frameCount;
        }
    }

    public void AddPosition(Vector2 pos)
    {
        sumPosition += pos;
        positions.Enqueue(pos);
        totalWeight += 1; // Zwiêkszanie totalWeight przy dodawaniu nowej pozycji

        if (positions.Count > maxAverageMeasurements)
        {
            Vector2 removedPos = positions.Dequeue();
            sumPosition -= removedPos;
            totalWeight -= 1; // Zmniejszanie totalWeight przy usuwaniu pozycji
        }

        RecalculateQueueIfNeeded();

        count++;
        if (count > maxCount)
        {
            RecalculateQueue();
        }
    }

    public Vector2 GetAveragePosition()
    {
        if (positions.Count > 0)
            return sumPosition / positions.Count;

        return Vector2.zero;
    }
}
