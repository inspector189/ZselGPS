using UnityEngine;
using TMPro;
using UnityEngine.InputSystem;

public class LightText : MonoBehaviour
{
    public TextMeshProUGUI lightLevelText;
    private LightSensor lightSensor;

    void Start()
    {
        lightSensor = LightSensor.current;
        if (lightSensor == null)
        {
            Debug.Log("Light sensor not available.");
            return;
        }

        InputSystem.EnableDevice(lightSensor);
    }

    void Update()
    {
        if (lightSensor != null && lightSensor.enabled)
        {
            float lightLevel = lightSensor.lightLevel.ReadValue();

            if (lightLevelText != null)
            {
                lightLevelText.text = lightLevel.ToString("F2");
            }

            Debug.Log("Light Level: " + lightLevel);
        }
    }

    private void OnDestroy()
    {
        if (lightSensor != null)
        {
            InputSystem.DisableDevice(lightSensor);
        }
    }
}
