using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
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
    public TextMeshProUGUI wysokoscTekst;
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
               /*     PlayerPrefs.GetInt("liczba");
                    if (tgl.isOn)
                    {
                        float wysokosc = slider.value;
                        slider.enabled = true;
                        if (wysokosc >= 56 && wysokosc < 59)
                        {
                            parterGO.SetActive(true);
                            pietro1GO.SetActive(false);
                            pietro2GO.SetActive(false);
                            PlayerPrefs.SetInt("pietro", 0);
                            mapa.sprite = parter;
                        }
                        else if (wysokosc >= 59 && wysokosc < 62)
                        {
                            parterGO.SetActive(false);
                            pietro1GO.SetActive(true);
                            pietro2GO.SetActive(false);
                            PlayerPrefs.SetInt("pietro", 1);
                            mapa.sprite = pietro1;
                        }
                        else if (wysokosc >= 62 && wysokosc <= 65)
                        {
                            parterGO.SetActive(false);
                            pietro1GO.SetActive(false);
                            pietro2GO.SetActive(true);
                            PlayerPrefs.SetInt("pietro", 2);
                            mapa.sprite = pietro2;
                        }
                    }
                    else
                    {
                        float wysokosc = Input.location.lastData.altitude;
                        slider.enabled = false;
                        if (wysokosc >= 56 && wysokosc < 59)
                        {
                            parterGO.SetActive(true);
                            pietro1GO.SetActive(false);
                            pietro2GO.SetActive(false);
                            PlayerPrefs.SetInt("pietro", 0);
                            mapa.sprite = parter;
                        }
                        else if (wysokosc >= 59 && wysokosc < 62)
                        {
                            parterGO.SetActive(false);
                            pietro1GO.SetActive(true);
                            pietro2GO.SetActive(false);
                            PlayerPrefs.SetInt("pietro", 1);
                            mapa.sprite = pietro1;
                        }
                        else if (wysokosc >= 62 && wysokosc <= 65)
                        {
                            parterGO.SetActive(false);
                            pietro1GO.SetActive(false);
                            pietro2GO.SetActive(true);
                            PlayerPrefs.SetInt("pietro", 2);
                            mapa.sprite = pietro2;
                        }

                    } */

                    avg.AddWeightedPosition(new Vector2(longitude, latitude), timeWeight);
                    avg.AddPosition(new Vector2(Input.location.lastData.longitude, Input.location.lastData.latitude));

                    Input.location.Stop();
                    yield return new WaitUntil(() => Input.location.status == LocationServiceStatus.Stopped);
                    if (timeSinceLastLocationUpdate >= updateInterval)
                    {
                        person2.transform.position = CalcPosition();
                        if(PlayerPrefs.GetInt("pietro") == 2)
                        {
                            if (IsColliding(personRect2, ObszarWsparcia2))
                            {
                                Debug.Log("Obraz 1 jest zawarty w obrazie 2");
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
                                Debug.Log("Obraz 1 nie jest zawarty w obrazie 2");
                                personRect.position = CalcPosition();
                            }
                        }
                        if(PlayerPrefs.GetInt("pietro") == 0 || PlayerPrefs.GetInt("pietro") == 1)
                        {
                            if (IsColliding(personRect2, ObszarWsparcia))
                            {
                                Debug.Log("Obraz 1 jest zawarty w obrazie 2");

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
                                Debug.Log("Obraz 1 nie jest zawarty w obrazie 2");
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
        {

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