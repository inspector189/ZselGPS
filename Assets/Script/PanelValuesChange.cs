using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PanelValuesChange : MonoBehaviour
{
    public void valueChange()
    {
        Debug.Log("Widzi");
        GameObject localGameObject = gameObject;
        GameObject tytulSaliObject = GameObject.Find("TytulSali");
        TextMeshProUGUI textMesh = tytulSaliObject.GetComponent<TextMeshProUGUI>();
        textMesh.text = localGameObject.name;

    }
}
