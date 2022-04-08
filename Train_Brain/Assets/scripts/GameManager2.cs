
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class GameManager2 : MonoBehaviour
{

   public void PopupYes(){

      SceneManager.LoadScene("MainMenu"); 
   }
   
    public Board mBoard;
   public PieceManager mPieceManager;


    void Start()
    {    

           // Create the board
                mBoard.Create();
        
        
        //   Create pieces

        mPieceManager.Setup(mBoard);
    }
 
}
