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

        void begin(uint8_t pinValue, uint8_t logicOnValue);

        void ledOn(void);

        void ledOff(void);



private:


    uint8_t _pin;
    uint8_t _logicOn;


 }; 
