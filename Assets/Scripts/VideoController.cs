using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class VideoController : MonoBehaviour
{
    [SerializeField] public GameObject videoObject;
    [SerializeField] private GameObject placeholderObject;

    void Awake() 
    {
        VideoPlayer videoPlayer = videoObject.GetComponent<VideoPlayer>();

        // Set the video source and URL
        videoPlayer.source = VideoSource.Url;
        videoPlayer.url = "./StreamingAssets/VideoOld.mp4";

        // Mute the video by default

        // Prepare the video
        videoPlayer.Prepare();
    }

    // Start is called before the first frame update
    void Start()
    {
        VideoPlayer videoPlayer = videoObject.GetComponent<VideoPlayer>();

        // Play the video
        videoPlayer.Play();
    }

    // Update is called once per frame
    void Update()
    {
        VideoPlayer videoPlayer = videoObject.GetComponent<VideoPlayer>();

        // Show or hide the placeholder object based on video playback
        if (videoPlayer.isPlaying && videoPlayer.time > 1) { // 1 second delay
            placeholderObject.SetActive(false);
        } else {
            placeholderObject.SetActive(true);
        }
    }
}
