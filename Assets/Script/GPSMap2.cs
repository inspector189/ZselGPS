using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;
using System;

public class GPSMap2 : MonoBehaviour
{
    [SerializeField] private RectTransform personReal; 
    [SerializeField] private RectTransform personInterpolated;
    [SerializeField] private GameObject redneredMap;
    [SerializeField] private GameObject noneConnection;
    [SerializeField] private GameObject spinner;
    [SerializeField] private List<GameObject> texts;
    private float timeBetweenLocationUpdates = 0.2f;
    private float timeSinceLastLocationUpdate = 0.0f;
    public Gyroscope gyro;
    [SerializeField] private Image map;
    [SerializeField] private TextMeshProUGUI precisionTexts;
    [SerializeField] private TextMeshProUGUI heightTexts;
    [SerializeField] private TextMeshProUGUI searchLocalization;
    [SerializeField] private TextMeshProUGUI precision;
    [SerializeField] private List<Floor> floors;
    [SerializeField] private float waitTime = 0.02f;
    private Vector2 velocity = new Vector2(0,0);
    Vector2 coordinates = new Vector2(52.668395f, 19.042718f); // Przykładowe współrzędne geograficzne

    
    private AveragePosition avg = new AveragePosition();
    void Start()
    {
        InitializeUI(false);
        Permissions();
        Input.location.Start(1f, 0.1f);
        StartCoroutine(StartGPS());
    }
    void Update() // Wykonuje się z każdą klatką na sekundę
    {
        GyroData();
    }
    public void SetCurrentFloorLvl(int savedFloor)
    {
        PlayerPrefs.SetInt("liczba", savedFloor);
        floors[savedFloor].SetFloor(savedFloor, personInterpolated, avg, velocity, coordinates);
    }
    public static int GetCurrentFloorLvl()
    {
        return PlayerPrefs.GetInt("liczba");
    }

    private IEnumerator StartGPS()
    {
        while (true) 
        {
            if (Input.location.isEnabledByUser)
            {
                if (Input.location.status != LocationServiceStatus.Running)
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
                    InitializeUI(true);
                    int savedFloor = GetCurrentFloorLvl();                                  
                    Vector2 lastPosition = personReal.position;
                    Debug.Log("Ostatnia pozycja personki to: " + lastPosition);
                    floors[savedFloor].UpdatePosition(personInterpolated, personReal, avg, velocity);
                    Debug.Log("A obecna pozycja personki to: " + personReal.position);
                    velocity = new Vector2(personReal.position.x, personReal.position.y) - lastPosition;
                    Debug.Log("Velocity jest równe: " + velocity);
                    TextsVisible(savedFloor);
                }
            }
            else
            {
                UpdateUI(false);
            }
            yield return new WaitForSeconds(waitTime);
        }
    }

    #region Dane
    private void GyroData()
    {
        if (SystemInfo.supportsGyroscope)
        {
            Quaternion gyroAttitude = gyro.attitude;
            float gyroYaw = gyroAttitude.eulerAngles.z;
            personInterpolated.eulerAngles = new Vector3(0, 0, gyroYaw);
          //  Debug.Log(personInterpolated.eulerAngles);
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
    #region Permisje 
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
    #endregion
    #region UI
    private void InitializeUI(bool isConnected)
    {
        if(!isConnected)
        {
            redneredMap.SetActive(false);
            noneConnection.SetActive(true);
        }
        else 
        {
            redneredMap.SetActive(true); 
            noneConnection.SetActive(false); 
            searchLocalization.text = "";
        }
    }
    private void TextsVisible(int floorIndex)
    {
        foreach (var textObject in texts)
        {
            textObject.SetActive(false);
            if (floorIndex >= 0 && floorIndex < texts.Count)
            {
                texts[floorIndex].SetActive(true);
            }
        } 
    }
    private void UpdateUI(bool isConnected)
    {
        if (isConnected)
        {
            precisionTexts.text = "Precyzja: " + (Input.location.lastData.horizontalAccuracy).ToString();
            heightTexts.text = "Wysokość: " + (Input.location.lastData.altitude).ToString();
            if (noneConnection.activeSelf)
            {
                float sredniaPrecyzja = PlayerPrefs.GetFloat("sredniaPrecyzja");
                spinner.SetActive(true);
                int sredniaPrecyzjaRound = Mathf.RoundToInt(sredniaPrecyzja);
                searchLocalization.text = "Szukanie lokalizacji...";
                precision.color = Color.white;
                precision.text = $"Aktualna precyzja pomiaru:\n {sredniaPrecyzjaRound}m \n";
            }
        }
        else
        {
            spinner.SetActive(false);
            searchLocalization.text = "";
            precision.color = Color.red;
            precision.text = "Brak dostępu do lokalizacji!";
        }
    }
    #endregion
}
