using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;


public class Kompasik : MonoBehaviour
{
    public GameObject Ikonka;
    private bool gyroEnabled;
    private Gyroscope gyro;
    // Start is called before the first frame update
    void Start()
    {
         if (SystemInfo.supportsGyroscope)
        {
            gyro = Input.gyro;
            gyro.enabled = true;
        }
    }

    // Update is called once per frame
    void Update()
    {
      
        gyroEnabled = SystemInfo.supportsGyroscope;
        if (gyroEnabled)
        {
            Quaternion gyroAttitude = gyro.attitude;
            float gyroYaw = gyroAttitude.eulerAngles.z;
             float rotatedAngle = gyroYaw + 180f;
             if (rotatedAngle > 360f) {
                rotatedAngle -= 360f;
            }
            Ikonka.transform.rotation = Quaternion.Euler(0, 0, rotatedAngle);
        }
    }
}
