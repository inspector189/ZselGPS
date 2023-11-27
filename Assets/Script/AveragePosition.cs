using System.Collections;
using System.Collections.Generic;
using System.Threading;
using TMPro;
using UnityEngine;

public class AveragePosition
{
    //Klasa wylicza œredni¹ pozycjê GPS z ostatnich maxAver pomiarów
    const int maxAver = 10;

    //standardowo pomiar jest dodawany na koniec listy i gdy liczba elementów przekracza maxAver usuwany jest pierwszy element z kolejki
    //sumPosition jest powiêkszany o dodawany element i gdy z kolejki jest usuwany element to jest pomniejszany o usuwany element
    //Przyspiesza to dzia³anie programu lecz pewnym czasie powstaj¹ b³êdy zaokr¹gleñ. Dlatego po maxCount operacji ca³a kolejka jest przeliczana
    const int maxCount = 1000;
    public AveragePosition avgPosition;
    private int lastRecalculateFrame = 0;
    private float totalWeight = 0.0f;
    const int maxRecalculateFrameCount = 1000;
    const int maxAverageMeasurements = 10;


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
        foreach (Vector2 v in positions)
        {
            sumPosition += v;
        }
        count = 0;
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
        //dodajemy do sumy aktualn¹ pozycjê
        sumPosition += pos;
        positions.Enqueue(pos);

        if (positions.Count > maxAverageMeasurements)
        {
            Vector2 removedPos = positions.Dequeue();
            sumPosition -= removedPos;
        }
        RecalculateQueueIfNeeded();
        //positions.Clear();
        //gdy licznik przekroczy max count przeliczamy ca³¹ kolejkê aby unikn¹æ b³êdów zaokr¹gleñ
        count++;
        if (count > maxCount)
        {
            sumPosition = Vector2.zero;
            foreach (Vector2 v in positions)
            {
                sumPosition += v;
            }
            count = 0;
        }
    }



    public Vector2 GetAveragePosition()
    {
        if (positions.Count > 0) //pamiêtaj cholero nie dziel przez zero
            return sumPosition / positions.Count;

        return Vector2.zero;
    }

    private int count = 0;
    Queue<Vector2> positions = new Queue<Vector2>();

    Vector2 sumPosition = new Vector2(0.0f, 0.0f);

}
