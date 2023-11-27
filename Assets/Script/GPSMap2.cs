using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;


public class GPSMap2 : MonoBehaviour
{
    //œredni promieñ ziemi w metrach    
    const double r = 6371000.0f;
    //punkty odniesienia w których znajduje siê punkt pocz¹tkowy obiektu
    const double origin_lati = 52.668395f;
    const double origin_longi = 19.042718f;
    private bool gyroEnabled;
    private Gyroscope gyro;
    public GameObject person;

    private float updateInterval = 0.1f;
    private float timeBetweenLocationUpdates = 0.2f;
    private float timeSinceLastLocationUpdate = 0.0f;

    // Start is called before the first frame update
    void Start()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                Permission.RequestUserPermission(Permission.FineLocation);
            }
        }
        Input.compass.enabled = true;


        if (SystemInfo.supportsGyroscope)
        {
            gyro = Input.gyro;
            gyro.enabled = true;
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
                    Input.location.Start();
                    yield return new WaitUntil(() => Input.location.status == LocationServiceStatus.Running);
                    float latitude = Input.location.lastData.latitude;
                    float longitude = Input.location.lastData.longitude;
                    float timeWeight = Mathf.Clamp01(1.0f - timeSinceLastLocationUpdate / timeBetweenLocationUpdates);

                    // Dodaj wa¿on¹ pozycjê do avg (AveragePosition)
                    avg.AddWeightedPosition(new Vector2(longitude, latitude), timeWeight);
                    avg.AddPosition(new Vector2(Input.location.lastData.longitude, Input.location.lastData.latitude));

                    Input.location.Stop();
                    yield return new WaitUntil(() => Input.location.status == LocationServiceStatus.Stopped);
                    if (timeSinceLastLocationUpdate >= updateInterval)
                    {
                        person.transform.position = CalcPosition();
                        timeSinceLastLocationUpdate = 0.0f;
                    }

                }
            }
            timeSinceLastLocationUpdate += Time.deltaTime;

            yield return null;
        }

    }
    // Update is called once per frame
    void Update()
    {


        gyroEnabled = SystemInfo.supportsGyroscope;
        if (gyroEnabled)
        {
            // Odczytaj dane z ¿yroskopu
            Quaternion gyroAttitude = gyro.attitude;
            float gyroYaw = gyroAttitude.eulerAngles.z;

            // Zaktualizuj kierunek kropki na podstawie ¿yroskopu
            person.transform.rotation = Quaternion.Euler(0, 0, gyroYaw);
        }

    }

    private Vector2 CalcPosition()
    {

        //Vector2 ret = new Vector2();


        //aktualne uœrednione po³o¿enie urz¹dzenia
        Vector2 act = avg.GetAveragePosition();

        //rozpiêtoœæ po³udnikowa w metrach na stopieñ szerokoœci geograficznej
        double rlong = 111200.0f;

        //rozpiêtoœæ równole¿nikowa w metrach na stopieñ d³ugoœci geograficznej
        double ralt = Math.Cos(Math.PI * act.y / 180.0f) * Math.PI * r / 180.0f;

        //przeskalowanie na odleg³oœci w metrach od punktów pocz¹tkowych;

        Vector2 dorigin = new Vector2(((float)((act.x - origin_longi) * ralt)), ((float)((act.y - origin_lati) * rlong)));


        return dorigin / 50f;
    }


    private AveragePosition avg = new AveragePosition();
}
