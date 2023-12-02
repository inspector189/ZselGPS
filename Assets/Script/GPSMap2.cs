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

    public TextMeshProUGUI precyzjaTekst;

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

        double rlong = 111200.0f;

        double ralt = Math.Cos(Math.PI * act.y / 180.0f) * Math.PI * r / 180.0f;

        Vector2 dorigin = new Vector2(((float)((act.x - origin_longi) * ralt) + 700), ((float)((act.y - origin_lati) * rlong)));


        return dorigin / 50f;
    }

    private AveragePosition avg = new AveragePosition();
}