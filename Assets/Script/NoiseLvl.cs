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
        #if UNITY_ANDROID
        if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            Permission.RequestUserPermission(Permission.Microphone);
        }
        #elif UNITY_IOS
        // Na iOSie uprawnienia są obsługiwane automatycznie, więc nie trzeba ich ręcznie żądać
        #endif
    }

    IEnumerator WaitForMicrophonePermission()
    {
        #if UNITY_ANDROID
        // Wait until the user grants or denies permission on Android
        while (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            yield return null;
        }
        #elif UNITY_IOS
        // Na iOS zakładamy, że uprawnienia są przyznane, więc nie musimy czekać
        yield return null;
        #endif
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

            // Calculate the average amplitude
            float averageAmplitude = sum / samples.Length;

            // Convert average amplitude to decibels
            float dbValue = 20 * Mathf.Log10(averageAmplitude / 32767.0f + Mathf.Epsilon);

            smoothDbValue = Mathf.Lerp(smoothDbValue, dbValue, smoothFactor);
            smoothDbValue = Mathf.Round(smoothDbValue * 100) / 100;
            // Update the text only if the value changes
            if (Mathf.Abs(smoothDbValue - lastDbValue) > 1f)
            {
                // Play the recorded audio if it's not already playing
                float referenceValue = 260f; // Adjust this value to your needs
                text1.text = (Mathf.Round((smoothDbValue + referenceValue) * 100) / 100).ToString();
                lastDbValue = smoothDbValue; // Update the last value
                PlayerPrefs.SetFloat("db", (Mathf.Round((smoothDbValue + referenceValue) * 100) / 100));
            }
        }
        else
        {
            // If not recording but dbValue changed, update the text
            if (lastDbValue != 0f)
            {
                lastDbValue = 0f;
                float referenceValue = 260f; // Adjust this value to your needs
                text1.text = (Mathf.Round((lastDbValue + referenceValue) * 100) / 100).ToString();
                PlayerPrefs.SetFloat("db", (Mathf.Round((lastDbValue + referenceValue) * 100) / 100));
            }
        }

        return 0f; // Return 0 if not recording or
    }
}
