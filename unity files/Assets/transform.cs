using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class transform : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
         void Update()
        {

            //   transform.position = new Vector3(0f, 0f, 0f);

            transform.position += transform.forward * Time.deltaTime;

            //transform.localScale += new Vector3(0.1F, 0, 0);

        }
    }

    // Update is called once per frame
    private void Update()
    {

        //   transform.position = new Vector3(0f, 0f, 0f);

        transform.position += transform.forward * Time.deltaTime;

        //transform.localScale += new Vector3(0.1F, 0, 0);

    }

}
