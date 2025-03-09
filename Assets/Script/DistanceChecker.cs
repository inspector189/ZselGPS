using System.Collections;
using UnityEngine;
using static LineCreator;

public class DistanceChecker : MonoBehaviour
{
    private LineCreator lineCreator;
    [SerializeField]
    private AudioManager audioManager;
    public bool isSoundPlaying = false;
    private void Start()
    {
        lineCreator = FindObjectOfType<LineCreator>(); 
        if (lineCreator == null)
        {
            Debug.LogError("Brak obiektu LineCreator w scenie!");
        }
    }

    public void PlaySoundWhenStairs(float shortestDistance, int currentFloor, int targetFloor)
    {
        if (shortestDistance < 0.3f && !isSoundPlaying && lineCreator.CalculateLineLength() < 0.3f)
        {
            isSoundPlaying = true;  

            if (targetFloor > currentFloor)
            {
                audioManager.PlayAudio("WejdzPoSchodach");
            }
            else if (targetFloor < currentFloor)
            {
                audioManager.PlayAudio("ZejdzPoSchodach");
            }

            StartCoroutine(ResetSoundFlag());
        }
    }
    public void PlaySoundWhenUserIsOnLocation(float shortestDistance, int currentFloor, int targetFloor)
    {
        if(shortestDistance < 0.2f && !isSoundPlaying && lineCreator.CalculateLineLength() < 0.2f)
        {
            isSoundPlaying = true;
            if(targetFloor == currentFloor)
            {
                audioManager.PlayAudio("JestesNaMiejscu");
            }
        }
        StartCoroutine(ResetSoundFlag());
    }
    private IEnumerator ResetSoundFlag()
    {
        yield return new WaitForSeconds(10f);  
        isSoundPlaying = false;  
    }
    public void PlaySoundForPlace(ImportantPlace place)
    {
        if (isSoundPlaying) return; 

        isSoundPlaying = true;

        string audioClipName = place.name;
        audioManager.PlayAudio(audioClipName);

        Debug.Log($"Odtwarzanie dźwięku dla: {place.name}");

        StartCoroutine(ResetSoundFlag());
    }
}
