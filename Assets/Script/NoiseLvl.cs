using UnityEngine;
using UnityEngine.UI;
using System;
using TMPro;

public class NoiseLvl : MonoBehaviour
{
    public TextMeshProUGUI noiseLevelText;
    public float sensitivity = 1000f;
    public float referenceLevel = 0.1f;  // Poziom odniesienia (zmień według potrzeb)

    private AudioSource audioSource;
    private string microphoneName;
    private const int sampleSize = 256; // Rozmiar próbki do analizy

    void Start()
    {
        // Sprawdzamy, czy mikrofon jest dostępny
        if (Microphone.devices.Length == 0)
        {
            Debug.LogError("Mikrofon nie jest dostępny w tym urządzeniu.");
            return;
        }

        // Pobieramy nazwę mikrofonu
        microphoneName = Microphone.devices[0];

        // Inicjalizujemy mikrofon
        AudioClip microphoneAudio = Microphone.Start(microphoneName, true, 1, 44100);

        // Czekamy, aż mikrofon będzie gotowy
        while (!(Microphone.GetPosition(microphoneName) > 0)) { }

        audioSource = GetComponent<AudioSource>();
        audioSource.clip = microphoneAudio;
        audioSource.loop = true;
        // Nie chcemy odtwarzać dźwięku głośno w głośnikach
        audioSource.mute = true;
        audioSource.Play();
    }

    void Update()
    {
        // Pobieramy dane z mikrofonu
        float[] samples = new float[sampleSize];
        // Używamy GetSpectrumData zamiast GetOutputData dla lepszej analizy
        audioSource.GetSpectrumData(samples, 0, FFTWindow.BlackmanHarris);

        // Obliczamy średnią amplitudę dźwięku
        float sum = 0;
        for (int i = 0; i < samples.Length; i++)
        {
            sum += samples[i] * samples[i]; // Kwadrat wartości próbki
        }
        float rmsValue = Mathf.Sqrt(sum / samples.Length); // RMS

        // Obliczamy poziom hałasu w decybelach
        float noiseLevel = rmsValue > 0 ? 20 * Mathf.Log10(rmsValue / referenceLevel) : 0;
        noiseLevel = Mathf.Max(noiseLevel, 0); // Zapewniamy, że wartość dB nie jest ujemna

        // Wyświetlamy poziom hałasu jako tekst
        noiseLevelText.text = "Poziom hałasu: " + noiseLevel.ToString("F2") + " dB";
    }
}