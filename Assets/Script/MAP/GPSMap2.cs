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
    [SerializeField] private GameObject renderedMap;
    [SerializeField] private GameObject noneConnection;
    [SerializeField] private GameObject spinner;
    [SerializeField] private List<GameObject> texts;
    private float timeBetweenLocationUpdates = 0.2f;
    private float timeSinceLastLocationUpdate = 0.0f;
    public Gyroscope gyro;
    [SerializeField] private Image map;
    [SerializeField] private TextMeshProUGUI searchLocalization;
    [SerializeField] private TextMeshProUGUI precision;
    [SerializeField] private List<Floor> floors;
    private Vector2 lastPosition;
    [SerializeField] private float waitTime = 0.02f;
    private Vector2 velocity = new Vector2(0, 0);
    Vector3 coordinates = new Vector3(52.668395f, 19.042718f, 0f); // Przykładowe współrzędne geograficzne

    private AveragePosition avg = new AveragePosition();

    void Start()
    {
        InitializeUI(false);
        Permissions();
        StartCoroutine(StartGPS());
    }

    void Update()
    {
        GyroData();
        int savedFloor = GetCurrentFloorLvl();
        floors[savedFloor].CalcPosition(personInterpolated, velocity, lastPosition);
    }

    public void SetCurrentFloorLvl(int savedFloor)
    {
        PlayerPrefs.SetInt("liczba", savedFloor);
        floors[savedFloor].SetFloor(savedFloor, personInterpolated, avg, velocity, coordinates, lastPosition);
    }

    public static int GetCurrentFloorLvl()
    {
        return PlayerPrefs.GetInt("liczba");
    }

    private IEnumerator StartGPS()
    {
        if (!Input.location.isEnabledByUser)
        {
            UpdateUI(false);
            yield break;
        }

        Input.location.Start(1f, 0.1f);

        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        if (Input.location.status == LocationServiceStatus.Failed)
        {
            UpdateUI(false);
            yield break;
        }
        else
        {
            while (true)
            {
                if (Input.location.status == LocationServiceStatus.Running)
                {
                    GPSData();
                    UpdateUI(true);
                    InitializeUI(true);
                    int savedFloor = GetCurrentFloorLvl();
                    TextsVisible(savedFloor);
                }
                else
                {
                    UpdateUI(false);
                }

                yield return new WaitForSeconds(waitTime);
                System.GC.Collect();
            }
        }
    }

    #region Dane
    private void GyroData()
    {
        if (SystemInfo.supportsGyroscope)
        {
            Quaternion gyroAttitude = Input.gyro.attitude;
            float gyroYaw = gyroAttitude.eulerAngles.z;
            personInterpolated.eulerAngles = new Vector3(0, 0, gyroYaw);
        }
    }

    private void GPSData()
    {
        float latitude = Input.location.lastData.latitude;
        float longitude = Input.location.lastData.longitude;
        float accuracy = Input.location.lastData.horizontalAccuracy;
        double lastUpdateTime = Input.location.lastData.timestamp;
        double timeSinceLastUpdate = Time.time - lastUpdateTime;

        PlayerPrefs.SetFloat("accuracy", accuracy);
        float timeWeight = Mathf.Clamp01(1.0f - timeSinceLastLocationUpdate / timeBetweenLocationUpdates);

        // avg.AddWeightedPosition(new Vector2(longitude, latitude), timeWeight);
        // avg.AddPosition(new Vector2(longitude, latitude));
        // avg.AddMeasurement(accuracy);
    }
    #endregion

    #region Permisje 
    private void Permissions()
    {
#if UNITY_ANDROID
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
        }
#elif UNITY_IOS
        // Na iOS uprawnienia do lokalizacji są zarządzane przez system i nie wymagają ręcznego żądania
#endif

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
        if (!isConnected)
        {
            renderedMap.SetActive(false);
            noneConnection.SetActive(true);
        }
        else
        {
            renderedMap.SetActive(true);
            noneConnection.SetActive(false);
            searchLocalization.text = "";
        }
    }

    private void TextsVisible(int floorIndex)
    {
        foreach (var textObject in texts)
        {
            textObject.SetActive(false);
        }
        if (floorIndex >= 0 && floorIndex < texts.Count)
        {
            texts[floorIndex].SetActive(true);
        }
    }

    private void UpdateUI(bool isConnected)
    {
        if (isConnected)
        {
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
            precision.text = "Usługi lokalizacyjne są wyłączone. Proszę je włączyć.";
        }
    }
    #endregion
}
