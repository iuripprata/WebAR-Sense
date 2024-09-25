using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ToggleObjects : MonoBehaviour
{
    [SerializeField] public GameObject[] objectsToActivate; // Objects to activate
    [SerializeField] public GameObject[] objectsToDeactivate; // Objects to deactivate

    // This method is triggered when the button is pressed
    public void Toggle()
    {
        // Activate specified objects
        foreach (GameObject obj in objectsToActivate)
        {
            obj.SetActive(true);
        }

        // Deactivate specified objects
        foreach (GameObject obj in objectsToDeactivate)
        {
            obj.SetActive(false);
        }
    }
}