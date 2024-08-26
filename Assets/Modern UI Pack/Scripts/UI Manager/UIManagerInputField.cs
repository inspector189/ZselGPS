using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace Michsky.MUIP
{
    [ExecuteInEditMode]
    public class UIManagerInputField : MonoBehaviour
    {
        [Header("Settings")]
        [SerializeField] private UIManager UIManagerAsset;
        public bool overrideColors = false;
        public bool overrideFonts = false;

        [Header("Resources")]
        [SerializeField] private TextMeshProUGUI mainText;
        [SerializeField] private TextMeshProUGUI placeholderText;
        [SerializeField] private Image filledImage;
        [SerializeField] private Image backgroundImage;

        void Awake()
        {
            if (UIManagerAsset == null)
            {
                UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
                if (UIManagerAsset == null)
                {
                    Debug.LogError("UIManagerAsset could not be found or loaded.");
                    return;
                }
            }

            this.enabled = true;

            if (UIManagerAsset.enableDynamicUpdate == false)
            {
                UpdateInputField();
                this.enabled = false;
            }
        }

        void Update()
        {
            if (UIManagerAsset == null) { return; }
            if (UIManagerAsset.enableDynamicUpdate == true) { UpdateInputField(); }
            if ((mainText.text).Length > 1)
            {
                placeholderText.text = "";
            }
            else
            {
                placeholderText.text = "Wpisz nazwę sali lub numer...";
            }
        }

        void UpdateInputField()
        {
            if (UIManagerAsset == null) return;
            if (overrideColors == false)
            {
                if (UIManagerAsset.inputFieldColor != null)
                {
                    if (mainText != null)
                    {
                        mainText.color = new Color(UIManagerAsset.inputFieldColor.r, UIManagerAsset.inputFieldColor.g, UIManagerAsset.inputFieldColor.b, mainText.color.a);
                    }

                    if (placeholderText != null)
                    {
                        placeholderText.color = new Color(UIManagerAsset.inputFieldColor.r, UIManagerAsset.inputFieldColor.g, UIManagerAsset.inputFieldColor.b, placeholderText.color.a);
                    }

                    if (filledImage != null)
                    {
                        filledImage.color = new Color(UIManagerAsset.inputFieldColor.r, UIManagerAsset.inputFieldColor.g, UIManagerAsset.inputFieldColor.b, filledImage.color.a);
                    }

                    if (backgroundImage != null)
                    {
                        backgroundImage.color = new Color(UIManagerAsset.inputFieldColor.r, UIManagerAsset.inputFieldColor.g, UIManagerAsset.inputFieldColor.b, backgroundImage.color.a);
                    }
                }
            }

            if (overrideFonts == false && UIManagerAsset.inputFieldFont != null)
            {
                if (mainText != null)
                {
                    mainText.font = UIManagerAsset.inputFieldFont;
                }

                if (placeholderText != null)
                {
                    placeholderText.font = UIManagerAsset.inputFieldFont;
                }
            }
        }
    }
}