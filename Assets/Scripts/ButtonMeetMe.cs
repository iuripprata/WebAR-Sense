using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonMeetMe : MonoBehaviour
{
    // Start is called before the first frame update
    public void OpenInsta(string btnLink)
    {
        Application.OpenURL(btnLink);
    }

}
