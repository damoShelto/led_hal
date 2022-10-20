

/*******************************

led_hal.cpp


v1.3
    see header file for details

*******************************/


#include <Arduino.h>

#include <led_hal.h>

//-------------------------------------

 void led_hal::begin(uint8_t pinValue, uint8_t logicOnValue){


     pinMode(pinValue, OUTPUT);

     _pin = pinValue;
     _logicOn = logicOnValue;

    ledOff();


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
    

ledState = 1;


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
    
ledState = 0;

 }      //end function
 //-------------------------------------------


void led_hal::ledToggle(void){


if(ledState == 1)
{
    ledOff();
}
else
{
    ledOn();
}


}      //end function
 //-------------------------------------------

void led_hal::fadeUp(void){


uint16_t ledOnTime, ledOffTime;


ledOff();

ledOffTime=1000;
ledOnTime = 1;


while(ledOffTime !=0)
{

    ledOff();

    ledOffTime--;
    delayMicroseconds(ledOffTime);


    ledOn();
    ledOnTime++;
    delayMicroseconds(ledOnTime);




}









}      //end function
 //-------------------------------------------


 void led_hal::fadeDown(void){




uint16_t ledOnTime, ledOffTime;


ledOn();

ledOnTime=1000;
ledOffTime = 1;


while(ledOnTime !=0)
{

    ledOn();

    ledOnTime--;
    delayMicroseconds(ledOnTime);


    ledOff();
    ledOffTime++;
    delayMicroseconds(ledOffTime);




}





}      //end function
 //-------------------------------------------

 bool led_hal::state(void){


     return ledState;



}      //end function
 //-------------------------------------------

 void led_hal::flash(uint16_t counter, uint16_t delay_ms){


while(counter){



    ledOn();
    delay(delay_ms);
    ledOff();
    delay(delay_ms);


    counter--;

}   //end while loop





}      //end function
 //-------------------------------------------


 void led_hal::flash_alternating(uint16_t counter, uint16_t delay_ms, led_hal *secLed){



while(counter){


    secLed->ledOff();
    ledOn();
    delay(delay_ms);
    ledOff();
    secLed->ledOn();
    delay(delay_ms);


    counter--;

}   //end while loop


secLed->ledOff();


 }




  


  
