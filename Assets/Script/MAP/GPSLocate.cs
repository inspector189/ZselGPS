using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Android;

public class GPSLocate : MonoBehaviour
{
    public TextMeshProUGUI latitudeValue;
    public TextMeshProUGUI longitudeValue;
    public TextMeshProUGUI altitudeValue;
    public TextMeshProUGUI horizontalAccuracyValue;
    public TextMeshProUGUI timestampValue;
    public TextMeshProUGUI kontrolka;
    private int a = 0;
    private float timeBetweenLocationUpdates = 0.5f;
    private float timeSinceLastLocationUpdate = 0.0f;

    private void Start()
    {
        RequestLocationPermission();
        StartCoroutine(StartGPS());
    }

    private void RequestLocationPermission()
    {
#if UNITY_ANDROID
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
        }
#elif UNITY_IOS
        // Na iOS nie musimy rêcznie ¿¹daæ uprawnieñ, poniewa¿ s¹ one zarz¹dzane przez system przy pierwszym dostêpie do lokalizacji.
#endif
    }

    private IEnumerator StartGPS()
    {
        if (!Input.location.isEnabledByUser)
        {
            kontrolka.text = "Lokalizacja jest wy³¹czona przez u¿ytkownika.";
            yield break;
        }

        Input.location.Start(1f, 0.1f);

        // Czekaj, a¿ us³uga GPS bêdzie dzia³aæ
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        if (Input.location.status == LocationServiceStatus.Failed)
        {
            kontrolka.text = "Nie mo¿na uruchomiæ us³ugi lokalizacji.";
            yield break;
        }
        else
        {
            while (true)
            {
                if (timeSinceLastLocationUpdate >= timeBetweenLocationUpdates)
                {
                    if (Input.location.status == LocationServiceStatus.Running)
                    {
                        latitudeValue.text = Input.location.lastData.latitude.ToString();
                        PlayerPrefs.SetFloat("latitudeValue", Input.location.lastData.latitude);
                        longitudeValue.text = Input.location.lastData.longitude.ToString();
                        PlayerPrefs.SetFloat("longitudeValue", Input.location.lastData.longitude);
                        altitudeValue.text = Input.location.lastData.altitude.ToString();
                        horizontalAccuracyValue.text = Input.location.lastData.horizontalAccuracy.ToString();

                        a++;
                        kontrolka.text = a.ToString();

                        timeSinceLastLocationUpdate = 0.0f;
                    }
                }

                timeSinceLastLocationUpdate += Time.deltaTime;
                yield return null;
            }
        }
    }
}

