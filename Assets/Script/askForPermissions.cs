using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;

public class askForPermissions : MonoBehaviour
{
    void Start()
    {
        Permissions();
    }
    private void Permissions()
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
        }
    }
}
