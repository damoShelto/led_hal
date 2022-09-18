/*****************************************
 * 
 * led_hal.h
 * 
 * 23/04/19
 * 
 * 
 * 
 * functions to turn the led on/off
 * 
 * 
 * /*****************************************/


#include <Arduino.h>


 class led_hal{



public:

        void begin(uint8 pinValue, uint8 logicOnValue);

        void ledOn(void);

        void ledOff(void);



private:


    uint8 _pin;
    uint8 _logicOn;


 }; 
