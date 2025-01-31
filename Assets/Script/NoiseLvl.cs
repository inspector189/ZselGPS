using UnityEngine;
using UnityEngine.Android;
using System.Collections;
using TMPro;
using UnityEngine.UI;

public class NoiseLvl : MonoBehaviour
{
    private AudioClip recordedClip;
    private AudioSource audioSource;
    private bool isRecording = false;
    public TextMeshProUGUI text1;
    private float lastDbValue = 0f;
    private float smoothDbValue = 0f;
    private float smoothFactor = 0.1f;

    // Dodane zmienne
    public GameObject soundAndLight; // Obiekt, który będzie wyłączony, jeśli nie ma uprawnień
    private bool microphonePermissionGranted = false;

    // Standardowa wartość odniesienia ciśnienia akustycznego w mikrofonach (20 μPa)
    private const float referencePressure = 0.00002f;

    IEnumerator Start()
    {
        // Sprawdź, czy mikrofon jest dostępny
        while (Microphone.devices.Length == 0)
        {
            Debug.Log("Mikrofon niedostępny. Oczekiwanie...");
            yield return new WaitForSeconds(1);
        }

        // Poproś o uprawnienia do mikrofonu
        RequestMicrophonePermission();
        yield return StartCoroutine(WaitForMicrophonePermission());

        // Jeśli uzyskano dostęp do mikrofonu
        Debug.Log("Dostęp do mikrofonu uzyskany.");
        microphonePermissionGranted = true;

        // Dodaj komponent AudioSource do tego GameObjectu
        audioSource = gameObject.AddComponent<AudioSource>();

        // Poczekaj chwilę przed rozpoczęciem
        yield return new WaitForSeconds(1);

        // Rozpocznij nagrywanie
        StartRecording();
        
    }

    void Update()
    {
        int wybor = PlayerPrefs.GetInt("WybranaScena");
        if(wybor == 2)
        {
            // Sprawdzaj, czy są uprawnienia do mikrofonu
            if (!microphonePermissionGranted)
            {
                // Jeśli brak uprawnień, wyłącz obiekt i nie wykonuj dalszego kodu
                soundAndLight.SetActive(false);
                return;
            }
            else
            {
                // Jeśli uprawnienia są przyznane, włącz obiekt i kontynuuj
                soundAndLight.SetActive(true);
                GetDecibelLevel();
            }
        }
        else
        {
            soundAndLight.SetActive(false);
        }
        
    }

    void RequestMicrophonePermission()
    {
#if UNITY_ANDROID
        if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            Permission.RequestUserPermission(Permission.Microphone);
        }
#elif UNITY_IOS
        // Na iOS uprawnienia są obsługiwane automatycznie
#endif
    }

    IEnumerator WaitForMicrophonePermission()
    {
#if UNITY_ANDROID
        while (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            yield return null;
        }
        microphonePermissionGranted = true;
#elif UNITY_IOS
        yield return null;
#endif
    }

    public void StartRecording()
    {
        if (Microphone.IsRecording(null))
        {
            Debug.LogWarning("Już nagrywasz.");
            return;
        }

        int frequency = 44100; // Częstotliwość próbkowania
        int seconds = 1; // Czas nagrywania

        recordedClip = Microphone.Start(null, true, seconds, frequency);
        isRecording = true;
    }

    public void StopRecording()
    {
        if (Microphone.IsRecording(null))
        {
            Microphone.End(null);
            isRecording = false;
        }
        else
        {
            Debug.LogWarning("Nie nagrywasz w tym momencie.");
        }
    }

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

            // Oblicz RMS (Root Mean Square)
            float rmsValue = Mathf.Sqrt(sum / samples.Length);

            // Oblicz ciśnienie akustyczne (SPL)
            float spl = 20 * Mathf.Log10(rmsValue / referencePressure + Mathf.Epsilon);

            // Płynne przejście wartości dB
            smoothDbValue = Mathf.Lerp(smoothDbValue, spl, smoothFactor);
            smoothDbValue = Mathf.Round(smoothDbValue * 100) / 100;

            // Aktualizuj tekst tylko, gdy wartość się zmienia
            if (Mathf.Abs(smoothDbValue - lastDbValue) > 1f)
            {
                text1.text = smoothDbValue.ToString();
                lastDbValue = smoothDbValue;
                PlayerPrefs.SetFloat("db", smoothDbValue);
            }
        }
        else
        {
            // Jeśli nie nagrywasz, ale wartość dB zmieniła się, zaktualizuj tekst
            if (lastDbValue != 0f)
            {
                lastDbValue = 0f;
                text1.text = "0";
                PlayerPrefs.SetFloat("db", 0f);
            }
        }

        return 0f; // Zwróć 0, gdy nie nagrywasz
    }
}
