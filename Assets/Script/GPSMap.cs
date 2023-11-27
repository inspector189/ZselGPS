using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System;
using UnityEngine.Android;
public class GPSMap : MonoBehaviour
{
    public RectTransform playerIcon;
    public Image mapImage;

    private float mapNorthLatitude = 52.669434f;
    private float mapSouthLatitude = 52.667059f;
    private float mapEastLongitude = 19.044703f;
    private float mapWestLongitude = 19.040594f;

    private float timeBetweenLocationUpdates = 0.2f; // Dodano kontrolê czêstotliwoœci aktualizacji
    private float timeSinceLastLocationUpdate = 0.0f;

    private bool gyroEnabled;
    private Gyroscope gyro;

    void Start()
    {
        // Request permission on Android
        if (Application.platform == RuntimePlatform.Android)
        {
            RequestLocationPermission();
        }

        // Start the location service
        StartCoroutine(StartLocationService());
        Input.compass.enabled = true;

        if (SystemInfo.supportsGyroscope)
        {
            gyro = Input.gyro;
            gyro.enabled = true;
        }
    }

    void Update()
    {

        if (Input.location.status == LocationServiceStatus.Running)
        {
            UpdatePlayerPosition();
            timeSinceLastLocationUpdate = 0.0f;
        }
        if (gyro != null)
        {
            Quaternion gyroAttitude = gyro.attitude;
            float gyroYaw = gyroAttitude.eulerAngles.z;

            playerIcon.rotation = Quaternion.Euler(0, 0, gyroYaw);
        }
    }

    private void RequestLocationPermission()
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
        }
    }

    private IEnumerator StartLocationService()
    {
        while (true)
        {
            if (timeSinceLastLocationUpdate >= timeBetweenLocationUpdates)
            {
                if (Input.location.isEnabledByUser)
                {
                    Input.location.Start(); // Start with desired accuracy and update distance
                    yield return new WaitUntil(() => Input.location.status == LocationServiceStatus.Running);
                    Vector2 mapPosition = ConvertGPSToMapCoordinates(Input.location.lastData.latitude, Input.location.lastData.longitude);
                    playerIcon.anchoredPosition = mapPosition; // Update the player's position on the map

                    Input.location.Stop();
                }

                
            }
            timeSinceLastLocationUpdate += Time.deltaTime;
            yield return null;
        }
        
    }

    private void UpdatePlayerPosition()
    {
        
    }

    private Vector2 ConvertGPSToMapCoordinates(float latitude, float longitude)
    {
        // Calculate the difference in position between the current GPS coordinate and the map's bounds
        float diffY = mapNorthLatitude - mapSouthLatitude;
        float diffX = mapEastLongitude - mapWestLongitude;

        float normalizedX = (longitude - mapWestLongitude) / diffX;
        float normalizedY = (latitude - mapSouthLatitude) / diffY;

        // Calculate the position on the map within the RectTransform bounds
        float mapX = Mathf.Lerp(0, mapImage.rectTransform.sizeDelta.x, normalizedX);
        float mapY = Mathf.Lerp(0, mapImage.rectTransform.sizeDelta.y, normalizedY);

        return new Vector2(mapX - mapImage.rectTransform.sizeDelta.x * 8.8f, mapY + mapImage.rectTransform.sizeDelta.y * 1.4f);
    }
}



/*
using UnityEngine;
using System.Collections;

// A class to represent the player on the map
public class GPSMap : MonoBehaviour
{
    public GameObject playerIcon; // The icon that represents the player
    public Texture2D mapTexture; // The texture of the map

    private Gyroscope gyro;
    private bool gyroEnabled;
    private Quaternion rot;

    void Start()
    {
        // Enable and setup the gyroscope (if it's available)
        gyroEnabled = EnableGyro();

        // Set the map texture to a material (you might want to do this in the editor instead)
        gameObject.GetComponent<Renderer>().material.mainTexture = mapTexture;
    }

    void Update()
    {
        // Here you would get the GPS location and convert it to the map's coordinate system
        Vector2 mapPosition = ConvertGPSToMapCoordinates(); // You'll need to implement this conversion

        // Update the player's position on the map
        playerIcon.transform.position = new Vector3(mapPosition.x, mapPosition.y, 0);

        // If the gyroscope is enabled, use it to rotate the player's icon
        if (gyroEnabled)
        {
            playerIcon.transform.localRotation = GyroToUnity(Input.gyro.attitude);
        }
    }

    private bool EnableGyro()
    {
        if (SystemInfo.supportsGyroscope)
        {
            gyro = Input.gyro;
            gyro.enabled = true;
            return true;
        }
        return false;
    }

    private Quaternion GyroToUnity(Quaternion q)
    {
        return new Quaternion(q.x, q.y, -q.z, -q.w);
    }

    private Vector2 ConvertGPSToMapCoordinates()
    {
        // Implement the conversion from GPS coordinates to your map coordinates here
        // This is a placeholder for demonstration purposes
        return new Vector2(0, 0);
    }
}



using System.Collections;
using UnityEngine;
using UnityEngine.Android;
using System;
public class GPSMap : MonoBehaviour
{
    public GameObject person;
    public RectTransform mapRectTransform;

    private const double originLatitude = 52.668395f;
    private const double originLongitude = 19.042718f;

    private Gyroscope gyro;

    void Start()
    {
        person.transform.position = Vector3.zero;

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

    void Update()
    {
        if (gyro != null)
        {
            Quaternion gyroAttitude = gyro.attitude;
            float gyroYaw = gyroAttitude.eulerAngles.z;

            person.transform.rotation = Quaternion.Euler(0, 0, gyroYaw);
        }
    }

    private IEnumerator StartGPS()
    {
        while (true)
        {
            if (Input.location.isEnabledByUser)
            {
                Input.location.Start();
                yield return new WaitUntil(() => Input.location.status == LocationServiceStatus.Running);

                float latitude = Input.location.lastData.latitude;
                float longitude = Input.location.lastData.longitude;

                Input.location.Stop();
                yield return new WaitUntil(() => Input.location.status == LocationServiceStatus.Stopped);

                // Obliczenie ró¿nicy w metrach miêdzy aktualn¹ lokalizacj¹ a pocz¹tkow¹
                Vector2 deltaPosition = new Vector2(
                    (float)((longitude - originLongitude) * 111319.9 * Mathf.Cos((float)((latitude + originLatitude) / 2) * Mathf.Deg2Rad)),
                    (float)((latitude - originLatitude) * 110947.3)
                );

                // Zaktualizuj pozycjê mapy
                mapRectTransform.anchoredPosition = -deltaPosition;
            }

            yield return new WaitForSeconds(0.2f); // Poczekaj przed kolejnym sprawdzeniem lokalizacji
        }
    }
}
 * 
 *     private float updateInterval = 0.1f;
private float timeBetweenLocationUpdates = 0.02f;
private float timeSinceLastLocationUpdate = 0.0f;
public RectTransform mapRectTransform; // Ta zmienna przechowuje referencjê do mapy w UI
private float gpsToUIScaleFactor = 100f;
private Vector2 lastGPSPosition; // Zmienna do przechowywania ostatniej znanej pozycji GPS
const double r = 6371000.0f;
//punkty odniesienia w których znajduje siê punkt pocz¹tkowy obiektu
const double origin_lati = 52.668395f;
const double origin_longi = 19.042718f;
// ¯yroskop - kompas
private bool gyroEnabled;
private Gyroscope gyro;
//
void Start()
{
    person.transform.position = new Vector2(0, 0);

    //Sprawdzanie permisji na lokalizacjê
    if (Application.platform == RuntimePlatform.Android)
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
        }
    }
    //

    Input.compass.enabled = true;

    if (SystemInfo.supportsGyroscope)
    {
        gyro = Input.gyro;
        gyro.enabled = true;
    }
    StartCoroutine(StartGPS());
}


void Update()
{
    gyroEnabled = SystemInfo.supportsGyroscope;
    if (gyroEnabled)
    {
        // Odczytaj dane z ¿yroskopu
        Quaternion gyroAttitude = gyro.attitude;
        float gyroYaw = gyroAttitude.eulerAngles.z;

        // Zaktualizuj kierunek kropki na podstawie ¿yroskopu
        mapRectTransform.transform.rotation = Quaternion.Euler(0, 0, gyroYaw);
    }
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

                avg.AddWeightedPosition(new Vector2(longitude, latitude), timeWeight);
                avg.AddPosition(new Vector2(Input.location.lastData.longitude, Input.location.lastData.latitude));

                Input.location.Stop();
                yield return new WaitUntil(() => Input.location.status == LocationServiceStatus.Stopped);

                if (timeSinceLastLocationUpdate >= timeBetweenLocationUpdates)
                {
                    Vector2 currentPosition = avg.GetAveragePosition();
                    Vector2 deltaPosition = new Vector2(
                        ((float)((currentPosition.x - origin_longi) * (Math.Cos(Math.PI * currentPosition.y / 180.0f)) * Math.PI * r / 180.0f)) / 25f,
                        ((float)((currentPosition.y - origin_lati) * (111200.0f))) / 25f
                    );
                    if (timeSinceLastLocationUpdate >= updateInterval)
                    {
                        mapRectTransform.transform.position = CalcPosition();
                        timeSinceLastLocationUpdate = 0.0f;
                    }
                    mapRectTransform.anchoredPosition = -deltaPosition; // Zmiana pozycji mapy

                    timeSinceLastLocationUpdate = 0.0f;
                }
            }
        }
        timeSinceLastLocationUpdate += Time.deltaTime;
        yield return null;
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

    return dorigin / 25f;
}

private AveragePosition avg = new AveragePosition();
*/


