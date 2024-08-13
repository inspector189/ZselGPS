using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowOrHideGrades : MonoBehaviour
{
    [SerializeField]
    private GameObject ListViewCustom;
    [SerializeField]
    private Button MoreSettingsBtn;

    private void Start()
    {
        if (MoreSettingsBtn != null)
        {
            MoreSettingsBtn.onClick.AddListener(OnButtonClicked);
        }
    }
    private void OnButtonClicked()
    {
        HideList();
    }

    public void ShowList()
    {
        ListViewCustom.SetActive(true);
    }

    private void HideList()
    {
        ListViewCustom.SetActive(false);
    }
}
