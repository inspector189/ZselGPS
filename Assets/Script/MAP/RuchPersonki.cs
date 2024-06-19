using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class RuchPersonki : MonoBehaviour
{
    public float initialVelocity = 0f;
    private float velocityA = 0f;
    private float distance = 0f;
    private float timeInterval = 1f;
    private float elapsedTime = 0f;
    private Vector3 accelerometerValue;
    private float timer = 0f;
    [SerializeField]
    public TextMeshProUGUI textX;
    [SerializeField]
    public TextMeshProUGUI textY;
    [SerializeField]
    public TextMeshProUGUI textZ;
    [SerializeField]
    public TextMeshProUGUI textV;
    private float updateTimer = 0f;
    private float locationUpdateTimer = 0f;
    private float locationUpdateInterval = 1f;
    [SerializeField]
    private GameObject personInterpolated;
    private float initialPositionY;
    private const float gravityY = -9.81f; // Przyspieszenie ziemskie na osi Y
    public Vector2 startPosition;
    private List<float> accXList = new List<float>();
    private List<float> accYList = new List<float>();
    private List<float> accZList = new List<float>();
    float averageAccX;
    float averageAccY;
    float averageAccZ;
    public float speed = 5f;
    private float predictedPositionY;
    private Vector3 lastAcceleration;
    private float lastTime;
    private float ySpeed;
    [SerializeField]
    private RectTransform person;
    [SerializeField]
    private Button buttonAcc;
    private float interval = 1.0f; // Zaktualizowano na 1 sekund�

    private bool isMoving = false;
    private bool isGPSActive = false; // Nowe pole do zarz�dzania stanem GPS Movement
    private float initialCompassDirection;

    // Nowe pola na teksty przycisk�w
    private string startButtonText = "Start Acceleration";
    private string stopButtonText = "Stop Acceleration";

    void Update()
    {
        updateTimer += Time.deltaTime;
        if (updateTimer >= 1.0f)
        {
            updateTimer = 0f;

            if (isMoving)
            {
                float x = Input.acceleration.x;
                float y = Input.acceleration.y;
                float z = Input.acceleration.z;

                accXList.Add(x);
                accYList.Add(y);
                accZList.Add(z);

                CalculateAndDisplayAverages();
                ClearLists();
            }

            if (isGPSActive)
            {
                GPSMovement();
            }
        }

        Debug.Log("Accuracy: " + PlayerPrefs.GetInt("sum10Accuracy"));
    }

    private void Start()
    {
        startPosition = person.anchoredPosition;

        lastAcceleration = Input.acceleration;
        lastTime = Time.time;
        initialPositionY = person.anchoredPosition.y;

        // Upewnij si�, �e kompas jest w��czony
        Input.compass.enabled = true;

        // Ustaw pocz�tkowy tekst przycisku
        buttonAcc.GetComponentInChildren<TextMeshProUGUI>().text = startButtonText;

        // Dodanie obs�ugi przycisku
        buttonAcc.onClick.AddListener(OnButtonAccClicked);
    }

    private void OnButtonAccClicked()
    {
        isMoving = !isMoving;
        if (isMoving)
        {
            // Zapisz pocz�tkowy kierunek kompasu
            initialCompassDirection = Input.compass.trueHeading;
            buttonAcc.GetComponentInChildren<TextMeshProUGUI>().text = stopButtonText;
            isGPSActive = false; // Wy��cz GPS Movement, gdy jest aktywna akceleracja
        }
        else
        {
            buttonAcc.GetComponentInChildren<TextMeshProUGUI>().text = startButtonText;
            isGPSActive = true; // W��cz GPS Movement, gdy akceleracja jest zatrzymana
        }
    }

    void CalculateAndDisplayAverages()
    {
        averageAccX = CalculateAverage(accXList);
        averageAccY = CalculateAverage(accYList);
        averageAccZ = CalculateAverage(accZList);

        textX.text = averageAccX.ToString("F2");
        textY.text = averageAccY.ToString("F2");
        textZ.text = averageAccZ.ToString("F2");

        Vector3 currentAcceleration = new Vector3(averageAccX, averageAccY, averageAccZ);

        // Oblicz czas od ostatniej klatki
        float deltaTime = Time.time - lastTime;

        // Zresetuj pr�dko�� na chwil� do 0
        ySpeed = 0;

        // Oblicz pr�dko�� wzd�u� osi Y
        ySpeed += (currentAcceleration.y) * interval * 100;

        // Zmie� kierunek pr�dko�ci w zale�no�ci od znaku przyspieszenia
        if (ySpeed > 0)
        {
            // Przemieszczaj si� w g�r�
            predictedPositionY = person.anchoredPosition.y + Mathf.Abs(ySpeed) * interval;
        }
        else if (ySpeed == 0)
        {
            predictedPositionY = person.anchoredPosition.y;
        }
        else
        {
            // Przemieszczaj si� w d�
            predictedPositionY = person.anchoredPosition.y - Mathf.Abs(ySpeed) * interval;
        }

        // Sprawd� aktualny kierunek kompasu
        float currentCompassDirection = Input.compass.trueHeading;
        float directionDifference = Mathf.DeltaAngle(initialCompassDirection, currentCompassDirection);

        if (Mathf.Abs(directionDifference) >= 90 && Mathf.Abs(directionDifference) <= 180)
        {
            // Zmien kierunek na przeciwny
            ySpeed = -ySpeed;
        }

        Debug.Log("Przewidywana pr�dko�� Y: " + ySpeed);
        Debug.Log("Przewidywana pozycja Y: " + predictedPositionY);

        person.anchoredPosition = new Vector2(person.anchoredPosition.x, predictedPositionY);
        Debug.Log("Pr�dko�� wzd�u� osi Y: " + ySpeed);
        textV.text = ySpeed.ToString("F2");

        // Zaktualizuj ostatnie przyspieszenie i czas
        lastAcceleration = currentAcceleration;
        lastTime = Time.time;
    }

    float CalculateAverage(List<float> values)
    {
        if (values.Count == 0)
            return 0f;

        float sum = 0f;
        foreach (float value in values)
        {
            sum += value;
        }
        return sum / values.Count;
    }

    void ClearLists()
    {
        accXList.Clear();
        accYList.Clear();
        accZList.Clear();
    }

    void GPSMovement()
    {
        LocationInfo currentLocation = Input.location.lastData;

        Vector3 newPosition2 = new Vector3(currentLocation.latitude, currentLocation.longitude, 0);
        personInterpolated.transform.position = Vector3.Lerp(personInterpolated.transform.position, newPosition2, Time.deltaTime);

        if (PlayerPrefs.GetInt("sum10Accuracy") == 0)
        {
            double x2 = 19.04371892765748;
            double x1 = 19.041285353040706;
            double y2 = 52.66901856963243;
            double y1 = 52.6685644858482;
            double yp1 = 59;
            double yp2 = 331;
            double xp1 = 2572;
            double xp2 = 3367;
            float x3 = currentLocation.longitude;
            float y3 = currentLocation.latitude;
            double SkalaX = (x2 - x1) / (xp2 - xp1) * 335500;
            double xp3 = xp1 + (x3 - x1) / (x2 - x1) * SkalaX * (xp2 - xp1);
            double SkalaY = (y2 - y1) / (yp2 - yp1) * 450000;
            double yp3 = yp1 + (y3 - y1) / (y2 - y1) * SkalaY * (yp2 - yp1);
            personInterpolated.transform.position = Vector3.zero;
            personInterpolated.transform.position = new Vector3((float)xp3, (float)yp3, 0);
        }
    }
}