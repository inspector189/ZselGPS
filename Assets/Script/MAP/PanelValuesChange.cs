using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PanelValuesChange : MonoBehaviour
{
    public void valueChange()
    {
        GameObject localGameObject = gameObject;
        GameObject tytulSaliObject = GameObject.Find("TitleRoom");
        TextMeshProUGUI textMesh = tytulSaliObject.GetComponent<TextMeshProUGUI>();
        textMesh.text = localGameObject.name;
        Debug.Log(textMesh.text);

    }
}
