using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class AudioManager : MonoBehaviour
{
    [SerializeField]
    private AudioSource audioSource;
    public void PlayAudio(string fileName)
    {
        AudioClip clip = Resources.Load<AudioClip>(fileName);
        if(clip != null)
        {
            audioSource.clip = clip;
            audioSource.Play();
        }
        else
        {
            Debug.LogError("Nie znaleziono pliku dźwiękowego!");
        }
    }
}
