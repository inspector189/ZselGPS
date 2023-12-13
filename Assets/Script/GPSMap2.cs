using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;


public class GPSMap2 : MonoBehaviour
{
    public RectTransform personRect2;
    public GameObject person2;
    public RectTransform personRect; // Persona
    public RectTransform ObszarWsparcia; // Obszar wsparcia
    public RectTransform ObszarWsparcia2; // Obszar wsparcia
    public List<RectTransform> parterList; // Lista obiektów do sprawdzenia
    public List<RectTransform> pietro1List; // Lista obiektów do sprawdzenia
    public List<RectTransform> pietro2List; // Lista obiektów do sprawdzenia

    public GameObject parterGO;
    public GameObject pietro1GO;
    public GameObject pietro2GO;

    public GameObject texts0;
    public GameObject texts1;
    public GameObject texts2;

    const double r = 6371000.0f;
    const double origin_lati = 52.668395f;
    const double origin_longi = 19.042718f;
    private bool gyroEnabled;
    private Gyroscope gyro;
    public GameObject person;
    public Toggle tgl;
    public TextMeshProUGUI slidertext;
    float accX, accY, accZ;
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
    public TextMeshProUGUI wysokoscTekst;
    Vector2 lastGPSPosition = Vector2.zero;
    bool usingGPS = false;
    public TextMeshProUGUI informacja;
    public TextMeshProUGUI informacja2;
    public GameObject RedneredMap;
    public GameObject BrakPolaczenia;
    void Start()
    {
        RedneredMap.SetActive(false);
        BrakPolaczenia.SetActive(true);
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


        if(PlayerPrefs.GetInt("pietro") == 0)
        {
             PlayerPrefs.SetInt("liczba", 0);
             mapa.sprite = parter;
        }
        else
        {
            if(PlayerPrefs.GetInt("pietro") == 1)
            {
                PlayerPrefs.SetInt("liczba", 1);
                 mapa.sprite = pietro1;
            }
            else{
                if(PlayerPrefs.GetInt("pietro") == 2)
                {
                    PlayerPrefs.SetInt("liczba", 2);
                     mapa.sprite = pietro2;
                }
            }
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
                    float accuracy = Input.location.lastData.horizontalAccuracy;

                    PlayerPrefs.SetFloat("accuracy", accuracy);
                    float timeWeight = Mathf.Clamp01(1.0f - timeSinceLastLocationUpdate / timeBetweenLocationUpdates);

                    precyzjaTekst.text = "Precyzja: " + (Input.location.lastData.horizontalAccuracy).ToString();
                    wysokoscTekst.text = "Wysokość: " + (Input.location.lastData.altitude).ToString();

                    avg.AddWeightedPosition(new Vector2(longitude, latitude), timeWeight);
                    avg.AddPosition(new Vector2(Input.location.lastData.longitude, Input.location.lastData.latitude));
                    avg.AddMeasurement(accuracy);

                    float sredniaPrecyzja = PlayerPrefs.GetFloat("sredniaPrecyzja");
                    int sredniaPrecyzjaRound = Mathf.RoundToInt(sredniaPrecyzja);
                    informacja.text = "Szukanie lokalizacji...";
                    informacja2.text = $"Aktualna precyzja pomiaru:\n {sredniaPrecyzjaRound}m \n";

                    Input.location.Stop();
                    yield return new WaitUntil(() => Input.location.status == LocationServiceStatus.Stopped);
                    if (timeSinceLastLocationUpdate >= updateInterval)
                    {
                        person2.transform.position = CalcPosition();
                        if(PlayerPrefs.GetInt("pietro") == 2)
                        {
                            if (IsColliding(personRect2, ObszarWsparcia2))
                            {
                                    if (!parterList.Contains(personRect2))
                                    {
                                        Vector2 newPosition = FindClosestEdgePosition();
                                        if (newPosition != Vector2.zero)
                                        {
                                            Debug.Log("Najbliższa pozycja krawędzi dla persony: " + newPosition);
                                            personRect.position = new Vector3(newPosition.x, newPosition.y, personRect.position.z);
                                        }
                                    }
                                    else
                                    {
                                        personRect.position = CalcPosition();
                                    }
                            }
                            else
                            {
                                personRect.position = CalcPosition();
                            }
                        }
                        if(PlayerPrefs.GetInt("pietro") == 0 || PlayerPrefs.GetInt("pietro") == 1)
                        {
                            if (IsColliding(personRect2, ObszarWsparcia))
                            {

                                    if (!parterList.Contains(personRect2))
                                    {
                                        Vector2 newPosition = FindClosestEdgePosition();
                                        if (newPosition != Vector2.zero)
                                        {
                                            personRect.position = new Vector3(newPosition.x, newPosition.y, personRect.position.z);
                                        }
                                    }
                                    else
                                    {
                                        personRect.position = CalcPosition();
                                    }

                            }
                            else
                            {
                                personRect.position = CalcPosition();
                            }
                        }
                       
                        
                        

                        timeSinceLastLocationUpdate = 0.0f;
                    }

                }
            }
            timeSinceLastLocationUpdate += Time.deltaTime;

            yield return null;
        }

    }
    Vector2 FindClosestEdgePosition()
    {
        Vector2 closestPosition = Vector2.zero;
        float minDistance = float.MaxValue;
        if(PlayerPrefs.GetInt("pietro") == 0)
        {
            foreach (var obj in parterList)
            {
                Vector2 closestPoint = ClosestPointOnRect(obj, personRect2.position);
                float distance = Vector2.Distance(personRect2.position, closestPoint);
                if (distance < minDistance)
                {
                    minDistance = distance;
                    closestPosition = closestPoint;
                }
            }
        }
        if (PlayerPrefs.GetInt("pietro") == 1)
        {
            foreach (var obj in pietro1List)
            {
                Vector2 closestPoint = ClosestPointOnRect(obj, personRect2.position);
                float distance = Vector2.Distance(personRect2.position, closestPoint);
                if (distance < minDistance)
                {
                    minDistance = distance;
                    closestPosition = closestPoint;
                }
            }
        }
        if (PlayerPrefs.GetInt("pietro") == 2)
        {
            foreach (var obj in pietro2List)
            {
                Vector2 closestPoint = ClosestPointOnRect(obj, personRect2.position);
                float distance = Vector2.Distance(personRect2.position, closestPoint);
                if (distance < minDistance)
                {
                    minDistance = distance;
                    closestPosition = closestPoint;
                }
            }
        }


        return closestPosition;
    }

    Vector2 ClosestPointOnRect(RectTransform rectTransform, Vector2 point)
    {
        Rect rect = GetWorldSpaceRect(rectTransform);
        float x = Mathf.Clamp(point.x, rect.xMin, rect.xMax);
        float y = Mathf.Clamp(point.y, rect.yMin, rect.yMax);

        return new Vector2(x, y);
    }

    bool IsColliding(RectTransform rect1, RectTransform rect2)
    {
        Rect rect1Bounds = GetWorldSpaceRect(rect1);
        Rect rect2Bounds = GetWorldSpaceRect(rect2);

        return rect1Bounds.Overlaps(rect2Bounds);
    }

    Rect GetWorldSpaceRect(RectTransform rectTransform)
    {
        // Pobierz pozycję i rozmiar RectTransform w globalnej przestrzeni
        Vector2 sizeDelta = rectTransform.sizeDelta;
        Vector2 position = rectTransform.position;

        float width = sizeDelta.x * rectTransform.lossyScale.x;
        float height = sizeDelta.y * rectTransform.lossyScale.y;

        return new Rect(position.x - width * rectTransform.pivot.x,
                        position.y - height * rectTransform.pivot.y,
                        width, height);
    }

    void Update()
    {

       // slidertext.text = (slider.value).ToString();
         int savedFloor = PlayerPrefs.GetInt("liczba"); // Domyślnie 0, jeśli nie ma zapisanej wartości
        SetFloor(savedFloor);
        gyroEnabled = SystemInfo.supportsGyroscope;
        if (gyroEnabled)
        {
            Quaternion gyroAttitude = gyro.attitude;
            float gyroYaw = gyroAttitude.eulerAngles.z;

            person.transform.rotation = Quaternion.Euler(0, 0, gyroYaw);
        }

    }

 void SetFloor(int floorIndex)
    {
        if (floorIndex == 0)
        {
            SetFloorVisuals(true, false, false);
            PlayerPrefs.SetInt("pietro", 0);
             mapa.sprite = parter;
        }
        else if (floorIndex == 1)
        {
            SetFloorVisuals(false, true, false);
            PlayerPrefs.SetInt("pietro", 1);
             mapa.sprite = pietro1;
        }
        else if (floorIndex == 2)
        {
            SetFloorVisuals(false, false, true);
            PlayerPrefs.SetInt("pietro", 2);
             mapa.sprite = pietro2;
        }
    }
     void SetFloorVisuals(bool parterActive, bool pietro1Active, bool pietro2Active)
    {
        parterGO.SetActive(parterActive);
        pietro1GO.SetActive(pietro1Active);
        pietro2GO.SetActive(pietro2Active);
    }
        private Vector2 CalcPosition()
    {

            Vector2 act = avg.GetAveragePosition();
            float accuracy = PlayerPrefs.GetFloat("accuracy");
             double rlong = 111200.0f;
            double ralt = Math.Cos(Math.PI * act.y / 180.0f) * Math.PI * r / 180.0f;
             Vector3 lastDirection = Vector3.zero;
        if (PlayerPrefs.GetInt("sum10Accuracy") == 0)
        {
            RedneredMap.SetActive(true);
            BrakPolaczenia.SetActive(false);
            informacja.text = "";

            Vector2 dorigin = new Vector2(((float)((act.x - origin_longi) * ralt) + 700), ((float)((act.y - origin_lati) * rlong)));
            lastGPSPosition = dorigin / 50f;
            usingGPS = true;

            return lastGPSPosition;
        }
        else
         {   
        // Obliczenia na podstawie akcelerometru i kierunku kompasu
        Vector3 currentAcceleration = Input.acceleration;
        Vector3 acceleration = new Vector3(accX, accY, accZ);

        // ... (dodaj obliczenia na podstawie akcelerometru i kierunku kompasu)

        Vector3 velocityChange = acceleration * Time.deltaTime;
        Vector3 newVelocity = lastVelocity + velocityChange;

        lastVelocity = newVelocity;

        Vector3 newDirection = Vector3.zero;
        if (acceleration.sqrMagnitude >= 0.01f)
        {
            newDirection = acceleration.normalized;
            lastDirection = newDirection;
        }
        else
        {
            newDirection = lastDirection;
        }

        Vector3 displacement = newVelocity * Time.deltaTime * newDirection.magnitude;

        // Przypisz przemieszczenie do obiektu person (o ile to wymagane)
        person.transform.Translate(displacement);

        Vector2 dorigin = new Vector2(((float)((act.x - origin_longi) * ralt) + 700), ((float)((act.y - origin_lati) * rlong)));

        Vector2 interpolatedPosition = Vector2.zero;
        float interpolationFactor = 0.001f;
        interpolatedPosition.x += currentAcceleration.x * interpolationFactor;
        interpolatedPosition.y += currentAcceleration.y * interpolationFactor;

        dorigin.x += interpolatedPosition.x;
        dorigin.y += interpolatedPosition.y;
        interpolatedPosition /= 50f;

        if (usingGPS)
        {
            interpolatedPosition += lastGPSPosition;
            Debug.Log(interpolatedPosition);
        }

        return dorigin / 50;
    }
    }

    private AveragePosition avg = new AveragePosition();
}