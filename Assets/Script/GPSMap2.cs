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

        Debug.Log(origin_longi + " " + origin_lati);

        if(dorigin.x < 0 && dorigin.y < 0) // lewy dolny (pracownie itd)
        {
            Vector2 unityPosition = new Vector2(dorigin.x, dorigin.y);

            return mapa.transform.TransformPoint(unityPosition);
        }

        if (dorigin.x > 0 && dorigin.y < 0) // prawy górny (basen itd)
        {
            Vector2 unityPosition = new Vector2(dorigin.x * 15.7f, (dorigin.y) + 650);

            return mapa.transform.TransformPoint(unityPosition);
        }
        if (dorigin.x < 0 && dorigin.y > 0) // lewy górny (hala itd)
        {
            Vector2 unityPosition = new Vector2(dorigin.x, dorigin.y);

            return mapa.transform.TransformPoint(unityPosition);
        }
        if (dorigin.x > 0 && dorigin.y > 0) 
        {
            Vector2 unityPosition = new Vector2(dorigin.x, dorigin.y);

            return mapa.transform.TransformPoint(unityPosition);
        }


        Vector2 unityPosition2 = new Vector2(dorigin.x, dorigin.y);

        return mapa.transform.TransformPoint(unityPosition2);


    }

}