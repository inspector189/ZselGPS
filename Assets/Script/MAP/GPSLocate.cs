using System.Collections;
using System.Collections.Generic;
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
    private int a=0;
    private float timeBetweenLocationUpdates = 0.5f;
    private float timeSinceLastLocationUpdate = 0.0f;

    private void Start()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                Permission.RequestUserPermission(Permission.FineLocation);
            }
        }

        StartCoroutine(StartGPS());
    }

    private IEnumerator StartGPS()
    {
        while (true)
        {
            if (timeSinceLastLocationUpdate >= timeBetweenLocationUpdates)
            {
                if (Input.location.isEnabledByUser)
                {
                    Input.location.Start(1f, 0.1f);
                    yield return new WaitUntil(() => Input.location.status == LocationServiceStatus.Running);
                    latitudeValue.text = Input.location.lastData.latitude.ToString();
                    PlayerPrefs.SetFloat("latitudeValue", Input.location.lastData.latitude);
                    longitudeValue.text = Input.location.lastData.longitude.ToString();
                    PlayerPrefs.SetFloat("longitudeValue", Input.location.lastData.longitude);
                    float wysokosc = Input.location.lastData.altitude;
                    altitudeValue.text = wysokosc.ToString();
                    horizontalAccuracyValue.text = Input.location.lastData.horizontalAccuracy.ToString();

                    a = a + 1;
                    kontrolka.text = a.ToString();

                    Input.location.Stop(); 
                    timeSinceLastLocationUpdate = 0.0f;
                }
            }

            timeSinceLastLocationUpdate += Time.deltaTime;
            yield return null;
        }
    }

}
