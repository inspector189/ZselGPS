using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LightText : MonoBehaviour
{
    public TextMeshProUGUI TextLght;

    private AndroidJavaObject sensorManager;
    private AndroidJavaObject lightSensor;
    private LightSensorEventListener sensorEventListener;

    void Start()
    {
        // Sprawdź, czy sensor światła jest dostępny
        if (CheckLightSensorAvailability())
        {
            // Inicjalizuj sensor światła
            InitializeLightSensor();
        }
        else
        {
            Debug.LogError("Brak wsparcia dla sensora światła na tym urządzeniu.");
        }
    }

    void Update()
    {
        // Pobierz wartość światła
        float lightIntensity = GetLightIntensity();
        
        // Zaktualizuj tekst i wyświetl w konsoli
        TextLght.text = lightIntensity.ToString();
        Debug.Log("Light Intensity: " + lightIntensity.ToString());
        // Tutaj możesz użyć wartości lightIntensity zgodnie z Twoimi potrzebami
    }

    bool CheckLightSensorAvailability()
    {
        // Sprawdź, czy urządzenie obsługuje sensor światła
        AndroidJavaClass sensorManagerClass = new AndroidJavaClass("android.hardware.SensorManager");
        AndroidJavaObject context = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity");
        AndroidJavaObject lightSensor = sensorManagerClass.Call<AndroidJavaObject>("getDefaultSensor", 5); // 5 to kod dla sensora światła

        return lightSensor != null;
    }

    void InitializeLightSensor()
    {
        // Inicjalizuj sensor światła
        sensorManager = new AndroidJavaClass("android.hardware.SensorManager").Call<AndroidJavaObject>("getSystemService", "sensor");
        lightSensor = sensorManager.Call<AndroidJavaObject>("getDefaultSensor", 5); // 5 to kod dla sensora światła
        sensorEventListener = new LightSensorEventListener(this);

        // Zarejestruj listenera sensora światła
        sensorManager.Call("registerListener", sensorEventListener, lightSensor, 3); // 3 to częstotliwość odświeżania sensora
    }

    float GetLightIntensity()
    {
        // Pobierz wartość światła za pomocą API Androida
        // (aktualna wartość jest przechowywana w obiekcie LightSensorEventListener)
        return sensorEventListener.GetCurrentLightValue();
    }
}

class LightSensorEventListener : AndroidJavaProxy
{
    private float currentLightValue;
    private LightText lightText;

    public LightSensorEventListener(LightText lightText) : base("android.hardware.SensorEventListener")
    {
        this.lightText = lightText;
    }

    public void onAccuracyChanged(AndroidJavaObject sensor, int accuracy)
    {
        // Niepotrzebne w tym przypadku
    }

    public void onSensorChanged(AndroidJavaObject eventValues)
    {
        // Pobierz wartość światła z eventValues
        currentLightValue = eventValues.Call<float>("values", 0);
    }

    public float GetCurrentLightValue()
    {
        return currentLightValue;
    }
}
