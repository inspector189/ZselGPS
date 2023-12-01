using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;
using System.Collections.Generic;


public class GPSMap2 : MonoBehaviour
{
    // Unity object representing the person on the map.
    public GameObject personObject;

    // Map dimensions and scaling factors
    private float mapWidth = 3557f; // Unity units
    private float mapHeight = 2789.9f; // Unity units
    private Vector2 mapOrigin = new Vector2(2, -60.8f); // Unity units
    private float realMapWidth = 10527f; // meters, adjust if needed
    private float realMapHeight = 7443f; // meters, adjust if needed

    // Store the last 10 location readings
    private Queue<Vector2> locationReadings = new Queue<Vector2>();
    private int maxReadings = 10;

    void Start()
    {
        // Start location service before querying location
        StartCoroutine(StartLocationService());
    }

    private IEnumerator StartLocationService()
    {
        // Check if user has location service enabled
        if (!Input.location.isEnabledByUser)
        {
            Debug.Log("Location services are not enabled by the user");
            yield break;
        }

        Input.location.Start();

        // Wait until service initializes
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // Service didn't initialize in 20 seconds
        if (maxWait < 1)
        {
            Debug.Log("Timed out");
            yield break;
        }

        // Connection has failed
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            Debug.Log("Unable to determine device location");
            yield break;
        }

        // Access granted and location value could be retrieved
        Debug.Log("Location: " + Input.location.lastData.latitude + " " +
                  Input.location.lastData.longitude);

        // Start the update loop
        StartCoroutine(UpdateLocation());
    }

    private IEnumerator UpdateLocation()
    {
        while (true)
        {
            UpdatePersonPosition(Input.location.lastData.latitude, Input.location.lastData.longitude);
            yield return new WaitForSeconds(0.2f);
        }
    }

    private void UpdatePersonPosition(float latitude, float longitude)
    {
        // Convert latitude and longitude to unity world space
        Vector2 unityPosition = ConvertGPSToUnity(latitude, longitude);

        // Add this reading to the queue
        if (locationReadings.Count >= maxReadings)
        {
            locationReadings.Dequeue(); // Remove the oldest reading
        }
        locationReadings.Enqueue(unityPosition); // Add the new reading

        // Calculate the average position
        Vector2 averagePosition = Vector2.zero;
        foreach (Vector2 pos in locationReadings)
        {
            averagePosition += pos;
        }
        averagePosition /= locationReadings.Count;

        // Set the person object's position
        personObject.transform.position = new Vector3(averagePosition.x, averagePosition.y, 0);
    }

    private Vector2 ConvertGPSToUnity(float latitude, float longitude)
    {
        // Replace these with the GPS coordinates of your map's origin
        float originLatitude = 0.0f;
        float originLongitude = 0.0f;

        // Calculate the offset from the origin
        float latOffset = (latitude - originLatitude) * (realMapHeight / Mathf.Abs(Mathf.Cos(Mathf.Deg2Rad * latitude) * 111320f));
        float lonOffset = (longitude - originLongitude) * (realMapWidth / 111320f);

        // Scale this offset according to the Unity map size
        float unityLat = latOffset * (mapHeight / realMapHeight);
        float unityLon = lonOffset * (mapWidth / realMapWidth);

        // Adjust by the map's origin in Unity
        return new Vector2(unityLon + mapOrigin.x, unityLat + mapOrigin.y);
    }

    void OnApplicationQuit()
    {
        // Stop the location service if it's running
        if (Input.location.isEnabledByUser)
        {
            Input.location.Stop();
        }
    }
}






/*using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;


public class GPSMap2 : MonoBehaviour
{
    const double r = 6371000.0f;
    const double origin_lati = 52.668395f;
    const double origin_longi = 19.042718f;

    private Gyroscope gyro;
    private bool gyroEnabled;
    public GameObject person;
    public Toggle tgl;
    public TextMeshProUGUI slidertext;
    public TextMeshProUGUI precyzjatext;
    public TextMeshProUGUI wysokosctext;
    public Image mapa;
    public Sprite parter;
    public Sprite pietro1;
    public Sprite pietro2;
    public Slider slider;

    private float updateInterval = 0.1f;
    private float timeBetweenLocationUpdates = 0.2f;
    private float timeSinceLastLocationUpdate = 0.0f;


    private AveragePosition avg = new AveragePosition();
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
                Debug.Log(Input.location.isEnabledByUser);
                if (Input.location.isEnabledByUser)
                {
                    Input.location.Start();
                    yield return new WaitUntil(() => Input.location.status == LocationServiceStatus.Running);
                    float latitude = Input.location.lastData.latitude;
                    float longitude = Input.location.lastData.longitude;
                    float timeWeight = Mathf.Clamp01(1.0f - timeSinceLastLocationUpdate / timeBetweenLocationUpdates);
                    float accuracy = Input.location.lastData.horizontalAccuracy;
                    float wysokosc2 = Input.location.lastData.altitude;


                    precyzjatext.text = "Precyzja: " + accuracy;
                    wysokosctext.text = "Wysokoœæ: " + wysokosc2;
                    if (tgl.isOn)
                    {
                        float wysokosc = slider.value;
                        slider.enabled = true;
                        if (wysokosc >= 56 && wysokosc < 59)
                        {
                            mapa.sprite = parter;
                        }
                        else if (wysokosc >= 59 && wysokosc < 62)
                        {
                            mapa.sprite = pietro1;
                        }
                        else if (wysokosc >= 62 && wysokosc <= 65)
                        {
                            mapa.sprite = pietro2;
                        }

                    }
                    else
                    {
                        float wysokosc = Input.location.lastData.altitude;
                        slider.enabled = false;
                        if (wysokosc >= 56 && wysokosc < 59)
                        {
                            mapa.sprite = parter;
                        }
                        else if (wysokosc >= 59 && wysokosc < 62)
                        {
                            mapa.sprite = pietro1;
                        }
                        else if (wysokosc >= 62 && wysokosc <= 65)
                        {
                            mapa.sprite = pietro2;
                        }

                    }


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

        slidertext.text = (slider.value).ToString();

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
    private Vector3 CalcPosition()
    {
        Vector2 act = avg.GetAveragePosition();
        double rlong = 111200.0f;
        double ralt = Math.Cos(Math.PI * act.y / 180.0f) * Math.PI * r / 180.0f;
        Vector2 dorigin = new Vector2(((float)((act.x - origin_longi) * ralt)), ((float)((act.y - origin_lati) * rlong)));
        Vector2 unityPosition = new Vector2(dorigin.x, dorigin.y) / 50;
        return person.transform.TransformPoint(unityPosition);
    }

} */