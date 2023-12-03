using System;
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
    private bool gyroEnabled;
    private Gyroscope gyro;
    public GameObject person;
    public Toggle tgl;
    public TextMeshProUGUI slidertext;
    public Image mapa;
    public Sprite parter;
    public Sprite pietro1;
    public Sprite pietro2;
    public Slider slider;
    private float updateInterval = 0.1f;
    private float timeBetweenLocationUpdates = 0.2f;
    private float timeSinceLastLocationUpdate = 0.0f;
    private Vector3 lastPosition;
    private Vector3 lastVelocity;
    private Vector3 currentAcceleration;
    public TextMeshProUGUI precyzjaTekst;
    Vector2 lastGPSPosition = Vector2.zero;
    bool usingGPS = false;
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
                    float accuracy = Input.location.lastData.horizontalAccuracy;

                    PlayerPrefs.SetFloat("accuracy", accuracy);
                    float timeWeight = Mathf.Clamp01(1.0f - timeSinceLastLocationUpdate / timeBetweenLocationUpdates);

                    precyzjaTekst.text = "Precyzja: " + (Input.location.lastData.horizontalAccuracy).ToString();

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
    void Update()
    {

        slidertext.text = (slider.value).ToString();

        gyroEnabled = SystemInfo.supportsGyroscope;
        if (gyroEnabled)
        {
            Quaternion gyroAttitude = gyro.attitude;
            float gyroYaw = gyroAttitude.eulerAngles.z;

            person.transform.rotation = Quaternion.Euler(0, 0, gyroYaw);
        }
    }
    private Vector2 CalcPosition()
    {

        Vector2 act = avg.GetAveragePosition();
        float accuracy = PlayerPrefs.GetFloat("accuracy");
        if (accuracy <= 5)
        {
            double rlong = 111200.0f;

            double ralt = Math.Cos(Math.PI * act.y / 180.0f) * Math.PI * r / 180.0f;

            Vector2 dorigin = new Vector2(((float)((act.x - origin_longi) * ralt) + 700), ((float)((act.y - origin_lati) * rlong)));
            lastGPSPosition = dorigin / 50f;
            usingGPS = true;

            return lastGPSPosition;
        }
        else
        {/*
            double rlong = 111200.0f;

            double ralt = Math.Cos(Math.PI * act.y / 180.0f) * Math.PI * r / 180.0f;

            Vector2 dorigin = new Vector2(((float)((act.x - origin_longi) * ralt) + 700), ((float)((act.y - origin_lati) * rlong)));

            person.transform.position = dorigin/50f;

            Vector3 currentVelocity = (person.transform.position - lastPosition) / Time.deltaTime;

            if (Time.deltaTime > 0)
            {
                currentAcceleration = (currentVelocity - lastVelocity) / Time.deltaTime;
            }
            else
            {
                currentAcceleration = Vector2.zero;
            }

            lastPosition = person.transform.position;
            lastVelocity = currentVelocity;

            // Tutaj możesz wykorzystać currentAcceleration lub currentVelocity do symulacji ruchu kropki na mapie
            Vector2 simulatedMapPosition = new Vector2(currentVelocity.x, currentVelocity.y); // Przykładowe użycie prędkości dla pozycji kropki

            return simulatedMapPosition;*/

            double rlong = 111200.0f;

            double ralt = Math.Cos(Math.PI * act.y / 180.0f) * Math.PI * r / 180.0f;

            Vector2 dorigin = new Vector2(((float)((act.x - origin_longi) * ralt) + 700), ((float)((act.y - origin_lati) * rlong)));

            Vector3 currentAcceleration = Input.acceleration; // Pobierz dane przyspieszenia
            // Stała opisująca czułość interpolacji - możesz dostosować ją do potrzeb
            float interpolationFactor = 0.001f;

            // Interpolacja liniowa na podstawie danych z akcelerometru
            Vector2 interpolatedPosition = Vector2.zero;

            // Aktualizacja interpolowanej pozycji na podstawie danych z akcelerometru
            interpolatedPosition.x += currentAcceleration.x * interpolationFactor;
            interpolatedPosition.y += currentAcceleration.y * interpolationFactor;

            dorigin.x += interpolatedPosition.x;
            dorigin.y += interpolatedPosition.y;
            interpolatedPosition /= 50f;
            if (usingGPS)
            {
                // Użyj ostatniej dokładnej pozycji GPS jako punktu odniesienia dla interpolacji
                interpolatedPosition += lastGPSPosition;
                Debug.Log(interpolatedPosition);
            }

            // Skalowanie interpolowanej pozycji (jeśli to konieczne)
             // Możesz dostosować skalowanie do swoich potrzeb

            return dorigin / 50;
        }
    }

    private AveragePosition avg = new AveragePosition();
}