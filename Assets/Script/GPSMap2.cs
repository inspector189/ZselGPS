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
    public RectTransform personRect2; // Persona - która jest ukryta i ma na celu pokazać prawidłową pozycję użytkownika
    public RectTransform personRect; // Persona - która jest odkryta i jej pozycja jest już przekształcona - interpolacja
    public List<RectTransform> supportArea;
    // Tablica - index numeracja
    public List<RectTransform> parterList; // Lista obiektów do sprawdzenia
    public List<RectTransform> pietro1List; // Lista obiektów do sprawdzenia
    public List<RectTransform> pietro2List; // Lista obiektów do sprawdzenia
    public List<GameObject> texts;
    public List<GameObject> floorGOs;
    public GameObject RedneredMap;
    public GameObject BrakPolaczenia;
    public GameObject Spinner;
    private float updateInterval = 0.1f;
    private float timeBetweenLocationUpdates = 0.2f;
    private float timeSinceLastLocationUpdate = 0.0f;
    const double r = 6371000.0f; //średni promień równika - 6371 km / tu w metrach
    const double origin_lati = 52.668395f;  //współrzędne środka obszaru szkoły (tak +/- nie są dokładne)
    const double origin_longi = 19.042718f;  // -||-
    private Gyroscope gyro;
    public Image mapa;
    public List<Sprite> floorSprites;
    public TextMeshProUGUI precyzjaTekst;
    public TextMeshProUGUI wysokoscTekst;
    public TextMeshProUGUI informacja;
    public TextMeshProUGUI informacja2;
    Vector2 lastGPSPosition = Vector2.zero;
    private Floor floor;
    private AveragePosition avg = new AveragePosition();
    void Start()
    {
        InitializeUI(false);

        Permissions();

        Input.location.Start(1f, 0.1f);

        floor = new Floor(floorGOs, floorSprites, supportArea, mapa, parterList, pietro1List, pietro2List, CalcPosition);
    }
    void Update() // Wykonuje się z każdą klatką na sekundę
    {
        int savedFloor = PlayerPrefs.GetInt("liczba");
        floor.SetFloor(savedFloor);
        floor.UpdatePosition(personRect2, personRect);

        GyroData();
    }
    void FixedUpdate() // Wykonuje się co 0.2s
    {
        if (Input.location.isEnabledByUser)
        {

            if (Input.location.status != LocationServiceStatus.Running) //-odpada
            {
                if (Input.location.status != LocationServiceStatus.Initializing)
                {
                    Input.location.Start(1f, 0.1f);
                }
            }

            if (Input.location.status == LocationServiceStatus.Running)
            {
                GPSData();

                UpdateUI(true);

                    personRect2.transform.position = CalcPosition();
                    if (PlayerPrefs.GetInt("pietro") == 2)
                    {
                        if (floor.IsColliding(personRect2, supportArea[1]))
                        {
                            if (!parterList.Contains(personRect2))
                            {
                                Vector2 newPosition = floor.FindClosestEdgePosition(personRect2);
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
                    if (PlayerPrefs.GetInt("pietro") == 0 || PlayerPrefs.GetInt("pietro") == 1)
                    {
                        if (floor.IsColliding(personRect2, supportArea[0]))
                        {

                            if (!parterList.Contains(personRect2))
                            {
                                Vector2 newPosition = floor.FindClosestEdgePosition(personRect2);
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
                
            }
        }
        else
        {
            UpdateUI(false);
        }
    }
    public Vector2 CalcPosition()
    {
        Vector2 act = avg.GetAveragePosition();
        float accuracy = PlayerPrefs.GetFloat("accuracy");
        double rlong = 111200.0f; // Jeden stopień łuku południka ma długość ok. 111,2 km lub 111200 metrów.
        double ralt = Math.Cos(Math.PI * act.y / 180.0f) * Math.PI * r / 180.0f; // funkcja radiany
        Vector3 lastDirection = Vector3.zero;
        if (PlayerPrefs.GetInt("sum10Accuracy") == 0)
        {
            InitializeUI(true);
            Vector2 geoOffset = new Vector2(((float)((act.x - origin_longi) * ralt) + 700), ((float)((act.y - origin_lati) * rlong))); //wzór na przekształcenie długości/szerokości geograficznej na odległość w metrach na powierzchni Ziemi
            lastGPSPosition = geoOffset / 50f; //geoOffset - przesunięcie geograficzne w skrócie

            return lastGPSPosition;
        }
        else
        {
            Vector2 geoOffset = new Vector2(((float)((act.x - origin_longi) * ralt) + 700), ((float)((act.y - origin_lati) * rlong))); //wzór na przekształcenie długości/szerokości geograficznej na odległość w metrach na powierzchni Ziemi
            Vector2 currentPosition = new Vector2(personRect.transform.position.x, personRect.transform.position.y);
            Vector2 targetPosition = geoOffset / 50f;

            float interpolationFactor = 1f;
            Vector2 newPosition = Vector2.Lerp(currentPosition, targetPosition, interpolationFactor); // interpolacja bezpośrednio w tej metodzie

            return newPosition;
        }
    }
    
    #region DaneIPermisje
    private void Permissions()
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
    }
    private void GyroData()
    {
        if (SystemInfo.supportsGyroscope)
        {
            Quaternion gyroAttitude = gyro.attitude;
            float gyroYaw = gyroAttitude.eulerAngles.z;
            personRect.transform.rotation = Quaternion.Euler(0, 0, gyroYaw);
        }
    }
    private void GPSData()
    {
        float latitude = Input.location.lastData.latitude; // szerokosc geograficzna
        float longitude = Input.location.lastData.longitude; //dlugosc geograficzna
        float accuracy = Input.location.lastData.horizontalAccuracy; //precyzja
        double lastUpdateTime = Input.location.lastData.timestamp; //czas ostatniej up.
        double timeSinceLastUpdate = Time.time - lastUpdateTime; // czas od ostatniego up.
        PlayerPrefs.SetFloat("accuracy", accuracy);
        float timeWeight = Mathf.Clamp01(1.0f - timeSinceLastLocationUpdate / timeBetweenLocationUpdates);
        avg.AddWeightedPosition(new Vector2(longitude, latitude), timeWeight);
        avg.AddPosition(new Vector2(Input.location.lastData.longitude, Input.location.lastData.latitude));
        avg.AddMeasurement(accuracy);
    }
    #endregion

    #region UI
    private void InitializeUI(bool isConnected2)
    {
        if(!isConnected2)
        {
            RedneredMap.SetActive(false);
            BrakPolaczenia.SetActive(true);
        }
        else 
        {
            RedneredMap.SetActive(true); 
            BrakPolaczenia.SetActive(false); 
            informacja.text = "";
        }
       
    }
    private void UpdateUI(bool isConnected)
    {
        if (isConnected)
        {
            precyzjaTekst.text = "Precyzja: " + (Input.location.lastData.horizontalAccuracy).ToString();
            wysokoscTekst.text = "Wysokość: " + (Input.location.lastData.altitude).ToString();
            if (BrakPolaczenia.activeSelf)
            {
                float sredniaPrecyzja = PlayerPrefs.GetFloat("sredniaPrecyzja");
                Spinner.SetActive(true);
                int sredniaPrecyzjaRound = Mathf.RoundToInt(sredniaPrecyzja);
                informacja.text = "Szukanie lokalizacji...";
                informacja2.color = Color.white;
                informacja2.text = $"Aktualna precyzja pomiaru:\n {sredniaPrecyzjaRound}m \n";
            }
        }
        else
        {
            Spinner.SetActive(false);
            informacja.text = "";
            informacja2.color = Color.red;
            informacja2.text = "Brak dostępu do lokalizacji!";
        }
    }
    #endregion
}
