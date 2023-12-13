using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using UnityEngine;

public class DateText : MonoBehaviour
{
    public TextMeshProUGUI dateText;
    void Update()
    {
        DateTime currentDate = DateTime.Now;

        string dayOfWeek = currentDate.ToString("dddd", new CultureInfo("pl-PL"));
        dayOfWeek = char.ToUpper(dayOfWeek[0]) + dayOfWeek.Substring(1);

        string dayOfMonth = currentDate.Day.ToString();

        string month = currentDate.ToString("MMMM", new CultureInfo("pl-PL"));

        string year = currentDate.Year.ToString();

        string formattedDate = $"{dayOfWeek}, {dayOfMonth} {month} {year}";

        dateText.text = formattedDate;
    }
}
