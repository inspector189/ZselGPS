using UnityEngine;
using UnityEngine.Android;
using System.Collections;
using TMPro;

public class NoiseLvl : MonoBehaviour
{
    private AudioClip recordedClip;
    private AudioSource audioSource;
    private bool isRecording = false;
    public TextMeshProUGUI text1;
    private float lastDbValue = 0f;
    private float smoothDbValue = 0f;
    private float smoothFactor = 0.1f;

    IEnumerator Start()
    {
        // Check if a microphone is available
        if (Microphone.devices.Length == 0)
        {
            Debug.LogError("No microphone detected.");
            yield break;
        }

        // Request and check microphone permissions
        RequestMicrophonePermission();
        yield return StartCoroutine(WaitForMicrophonePermission());

        Debug.Log("Microphone access granted.");

        // Add an AudioSource component to this GameObject
        audioSource = gameObject.AddComponent<AudioSource>();

        // Wait for a short delay before proceeding
        yield return new WaitForSeconds(1);

        // Start recording
        StartRecording();
    }

    void Update()
    {
        GetDecibelLevel();
    }

    void RequestMicrophonePermission()
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            Permission.RequestUserPermission(Permission.Microphone);
        }
    }

    IEnumerator WaitForMicrophonePermission()
    {
        // Wait until the user grants or denies permission
        while (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            yield return null;
        }
    }

    // Start recording audio (changed to public)
    public void StartRecording()
    {
        if (Microphone.IsRecording(null))
        {
            Debug.LogWarning("Already recording.");
            return;
        }

        int frequency = 44100; // Sample rate
        int seconds = 1; // Maximum recording duration

        recordedClip = Microphone.Start(null, true, seconds, frequency);
        isRecording = true;
    }

    // Stop recording audio
    public void StopRecording()
    {
        if (Microphone.IsRecording(null))
        {
            Microphone.End(null);
            isRecording = false;
        }
        else
        {
            Debug.LogWarning("Not currently recording.");
        }
    }

    // Get the current decibel level and play the recorded audio
    public float GetDecibelLevel()
    {
        if (isRecording && recordedClip != null)
        {
            float[] samples = new float[recordedClip.samples * recordedClip.channels];
            recordedClip.GetData(samples, 0);

            float sum = 0f;

            foreach (float sample in samples)
            {
                sum += sample * sample;
            }

            // Oblicz średnią amplitudę
            float averageAmplitude = sum / samples.Length;

            // Konwertuj średnią amplitudę na decybele
            float dbValue = 20 * Mathf.Log10(averageAmplitude / 32767.0f + Mathf.Epsilon);

            smoothDbValue = Mathf.Lerp(smoothDbValue, dbValue, smoothFactor);
            smoothDbValue = Mathf.Round(smoothDbValue * 100) / 100;
            // Aktualizuj tekst tylko wtedy, gdy wartość się zmieni
            if (Mathf.Abs(smoothDbValue - lastDbValue) > 1f)
            {
                // Play the recorded audio if it's not already playing
                float referenceValue = 260f; // Dostosuj tę wartość do swoich potrzeb
                Debug.Log(smoothDbValue + referenceValue);
                text1.text = (Mathf.Round((smoothDbValue + referenceValue) * 100) / 100).ToString();
                lastDbValue = smoothDbValue; // Zaktualizuj ostatnią wartość
            }
        }
        else
        {
            // Jeśli nie nagrywasz, ale wartość dbValue zmieniła się, zaktualizuj tekst
            if (lastDbValue != 0f)
            {
                lastDbValue = 0f;
                float referenceValue = 260f; // Dostosuj tę wartość do swoich potrzeb
                text1.text = (Mathf.Round((lastDbValue + referenceValue) * 100) / 100).ToString();
            }
        }

        return 0f; // Return 0 if not recording or
    }
}
