using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckerForAudio : MonoBehaviour
{
    private DistanceChecker distanceChecker;
    private LineCreator lineCreator;
    private Transform person;
    private Transform Realtarget;
    private List<ImportantPlace> importantPlaces;

    private void Start()
    {
        distanceChecker = FindObjectOfType<DistanceChecker>();
        lineCreator = FindObjectOfType<LineCreator>();

        if (lineCreator != null)
        {
            person = lineCreator.person;
            importantPlaces = lineCreator.importantPlaces;
        }

        if (distanceChecker == null)
        {
            Debug.LogError("Brak DistanceChecker w scenie!");
        }
    }

    public void CheckDistanceToStairs()
    {
        if (person == null) return;

        int currentFloor = PlayerPrefs.GetInt("personPietro");
        int targetFloor = PlayerPrefs.GetInt("pietroPomieszczenia");
        if (targetFloor == 0 || targetFloor == -1) return;

        RectTransform[] stairsArray = lineCreator.SelectArrayStairsForFloor(currentFloor);
        if (currentFloor != targetFloor)
        {
            if (stairsArray == null || stairsArray.Length == 0) return;

            RectTransform nearestStairs = lineCreator.FindNearestStairsObject(stairsArray);

            if (nearestStairs != null)
            {
                Vector3 personPosition2D = new Vector3(person.position.x, person.position.y, 0);
                Vector3 stairsPosition2D = new Vector3(nearestStairs.position.x, nearestStairs.position.y, 0);
                float distance = Vector3.Distance(personPosition2D, stairsPosition2D);

                if (distance < 0.3f)
                {
                    distanceChecker.PlaySoundWhenStairs(distance, currentFloor, targetFloor);
                }
            }
        }
    }

    public void CheckDistanceToTarget()
    {
        Realtarget = lineCreator.Realtarget;
        if (person == null || Realtarget == null) return;

        foreach (ImportantPlace place in importantPlaces)
        {
            if (place.door == Realtarget)
            {
                CheckDistanceToImportantPlaces();
                return; 
            }
        }

        int currentFloor = PlayerPrefs.GetInt("personPietro");
        int targetFloor = PlayerPrefs.GetInt("pietroPomieszczenia");

        if (currentFloor == targetFloor)
        {
            Vector3 personPosition2D = new Vector3(person.position.x, person.position.y, 0);
            Vector3 targetPosition2D = new Vector3(Realtarget.position.x, Realtarget.position.y, 0);
            float distance = Vector3.Distance(personPosition2D, targetPosition2D);

            if (distance < 0.2f)
            {
                distanceChecker.PlaySoundWhenUserIsOnLocation(distance, currentFloor, targetFloor);
            }
        }
    }

    public void CheckDistanceToImportantPlaces()
    {
        if (person == null || importantPlaces == null || importantPlaces.Count == 0 || distanceChecker.isSoundPlaying)
            return;

        int currentFloor = PlayerPrefs.GetInt("personPietro");

        foreach (ImportantPlace place in importantPlaces)
        {
            if (currentFloor == place.floor)
            {
                Vector3 personPosition2D = new Vector3(person.position.x, person.position.y, 0);
                Vector3 placePosition2D = new Vector3(place.door.position.x, place.door.position.y, 0);
                float distance = Vector3.Distance(personPosition2D, placePosition2D);
                Debug.Log($"Odleglosc do {place.name}: " + distance);

                if (distance < 0.3f)
                {
                    Debug.Log($"Postac jest blisko {place.name}!");
                    distanceChecker.PlaySoundForPlace(place);
                    break;
                }
            }
        }
    }
}

