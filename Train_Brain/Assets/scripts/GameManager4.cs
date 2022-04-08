using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class GameManager4 : MonoBehaviour
{
    public void Rematch(){

      SceneManager.LoadScene("PlayScene"); 
   }
   public void Exit(){

      SceneManager.LoadScene("MainMenu"); 
   }
}