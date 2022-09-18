

/*******************************



*******************************/


#include <Arduino.h>

#include <led_hal.h>

//-------------------------------------

 void led_hal::begin(uint8 pinValue, uint8 logicOnValue){


     pinMode(pinValue, OUTPUT);

     _pin = pinValue;
     _logicOn = logicOnValue;



 }      //end function
 //-------------------------------------------

        void led_hal::ledOn(void){




    if(_logicOn == 1)
    {


        digitalWrite(_pin, 1);



    }
    else
    {
        
        digitalWrite(_pin, 0);


    }
    




 }      //end function
 //-------------------------------------------

        void led_hal::ledOff(void){


if(_logicOn == 0)
    {


        digitalWrite(_pin, 1);



    }
    else
    {
        
        digitalWrite(_pin, 0);


    }
    


 }      //end function
 //-------------------------------------------






  
