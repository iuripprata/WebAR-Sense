using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActivateObject : MonoBehaviour
{
   public GameObject video;
   public GameObject propostas;
   /*public GameObject botão;
   public GameObject combo;*/

   public void openVideo()
   {
      video.gameObject.SetActive(true);
      propostas.gameObject.SetActive(false);
      /*coffee.gameObject.SetActive(false);
      combo.gameObject.SetActive(false);*/
   }
   public void openPropostas()
   {
      video.gameObject.SetActive(false);
      propostas.gameObject.SetActive(true);
      /*coffee.gameObject.SetActive(false);
      combo.gameObject.SetActive(false);*/
   }
   public void openCoffee()
   {
      video.gameObject.SetActive(false);
      propostas.gameObject.SetActive(false);
      /*coffee.gameObject.SetActive(true);
      combo.gameObject.SetActive(false);*/
   }
   public void openCombo()
   {
      video.gameObject.SetActive(false);
      propostas.gameObject.SetActive(false);
      /*coffee.gameObject.SetActive(false);
      combo.gameObject.SetActive(true);*/
   }
}
