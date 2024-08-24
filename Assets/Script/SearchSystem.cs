using UnityEngine;
using TMPro;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

public class SearchSystem : MonoBehaviour
{
    public TMP_InputField searchInputField;
    public Transform listParent;

    private Dictionary<Transform, List<Transform>> categorizedItems = new Dictionary<Transform, List<Transform>>();

    void Start()
    {
        Transform currentCategory = null;
        foreach (Transform item in listParent)
        {
            if (item.name.StartsWith("Txt"))
            {
                currentCategory = item;
                categorizedItems[currentCategory] = new List<Transform>();
            }
            else if (currentCategory != null)
            {
                categorizedItems[currentCategory].Add(item);
            }
        }

        searchInputField.onValueChanged.AddListener(OnSearchValueChanged);
    }

    void OnSearchValueChanged(string searchQuery)
    {
        searchQuery = searchQuery.ToLower().Trim();

        foreach (var category in categorizedItems)
        {
            bool categoryVisible = false;

            foreach (var item in category.Value)
            {
                if (ShouldDisplayItem(item.name.ToLower(), searchQuery))
                {
                    item.gameObject.SetActive(true);
                    categoryVisible = true;
                }
                else
                {
                    item.gameObject.SetActive(false);
                }
            }

            category.Key.gameObject.SetActive(categoryVisible);
        }
    }

    bool ShouldDisplayItem(string itemName, string searchQuery)
    {
        if (string.IsNullOrEmpty(searchQuery))
        {
            return true;
        }

        List<string> keywords = new List<string> {
            "sala", "s", "sa", "sal",
            "numer", "n", "nu", "num", "nume",
            "pokój", "p", "po", "pok", "poko", "pokó", "pokoj",
            "obiekt", "o", "ob", "obi", "obie", "obiek",
            "room", "r", "ro", "roo",
            "number", "numb", "numbe"
            };

        if (itemName.Contains("biblioteka") && searchQuery.StartsWith("c"))
        {
            return true;
        }

        foreach (var keyword in keywords)
        {
            if (searchQuery.StartsWith(keyword))
            {
                string withoutKeyword = searchQuery.Substring(keyword.Length).Trim();
                string numberInKeyword = Regex.Match(withoutKeyword, @"\d+").Value;

                if (!string.IsNullOrEmpty(numberInKeyword) && (itemName == numberInKeyword || itemName.StartsWith(numberInKeyword)))
                {
                    return true;
                }

                if (string.IsNullOrEmpty(numberInKeyword) && Regex.IsMatch(itemName, @"\d"))
                {
                    return true;
                }
            }
        }

        if (searchQuery == "sala" && itemName.Contains("hala sportowa"))
        {
            return true;
        }

        if (Regex.IsMatch(searchQuery, @"^\d+$"))
        {
            if (itemName.StartsWith(searchQuery))
            {
                return true;
            }
        }

        if (itemName.Contains(searchQuery) && !Regex.IsMatch(itemName, @"^\d+$"))
        {
            return true;
        }

        return false;
    }
}
