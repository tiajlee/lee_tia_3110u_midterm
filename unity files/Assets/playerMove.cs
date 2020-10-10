using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerMove : MonoBehaviour { 

    public GameObject player;
     public CharacterController player_control;

    // Start is called before the first frame update

 
    private void Start()
     {
    player_control = player.GetComponent<CharacterController>();
    }


    // Update is called once per frame
    void Update()
    {

  

            if (Input.GetKey(KeyCode.A)) // backwards
          { 
              player_control.Move(new Vector3(0, 0, 12 * Time.deltaTime));
              Debug.Log("Hello");
          }
          if (Input.GetKey(KeyCode.D)) // forwards
          {
              player_control.Move(new Vector3(0, 0, -12 * Time.deltaTime));
          }


          if (Input.GetKey(KeyCode.S)) // right
          {
              player_control.Move(new Vector3(-12 * Time.deltaTime, 0, 0 ));
          }
          if (Input.GetKey(KeyCode.W)) // left
          {
              player_control.Move(new Vector3(12 * Time.deltaTime, 0, 0));
          }

       // if (controller.isGrounded) // check if player is on ground or has fallen
      //  {
            // do nothing
     //   }
//else
  //      {
            // go to checkpoint
    //    }

    }
}
