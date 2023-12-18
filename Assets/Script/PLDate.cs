using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using System.Globalization;
using System.Threading;

public class PLDate : MonoBehaviour
{
    public TextMeshProUGUI dateText;
    private DateTime selectedDate;

    void Start()
    {
        selectedDate = DateTime.Today;
        AdjustForWeekend();
        UpdateDateText();
    }

    private void AdjustForWeekend()
    {
        // Sprawdü, czy wybrana data jest sobotπ lub niedzielπ
        while (selectedDate.DayOfWeek == DayOfWeek.Saturday || selectedDate.DayOfWeek == DayOfWeek.Sunday)
        {
            selectedDate = selectedDate.AddDays(1);
        }
    }

    private void UpdateDateText()
    {
        CultureInfo ci = new CultureInfo("pl-PL");
        string dayOfWeek = ci.TextInfo.ToTitleCase(selectedDate.ToString("dddd", ci));
        string formattedDate = $"{dayOfWeek}, {selectedDate:dd.MM}";
        dateText.text = formattedDate;
        Debug.Log(formattedDate);
    }

    public void MinusDate()
    {
        selectedDate = selectedDate.AddDays(-1);
        AdjustForWeekend();
        UpdateDateText();
    }

    public void PlusDate()
    {
        selectedDate = selectedDate.AddDays(1);
        AdjustForWeekend();
        UpdateDateText();
    }
}
