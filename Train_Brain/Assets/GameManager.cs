using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class GameManager : MonoBehaviour
{
    public void PlayButton(){
        SceneManager.LoadScene("PlayScene");  // for opening Mainscene
    }
        public void ScreenshotYes(){
      SceneManager.LoadScene("RulesScene");  // for opening rulescene
   }
        public void VideoYes(){
      SceneManager.LoadScene("VideoScene");  // for opening rulescene
       }
 
public void exit(){
        Application.Quit();  
    }
}
