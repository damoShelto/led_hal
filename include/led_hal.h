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
 * v1.4
 *      add flash alternating LED function to alternate flashing between 
 *          two leds. Supply a pointer to the second LED
 * 
 * v1.3
 *      25/06/20
 *      -add fadeUp and fadeDown functionality
 *      -add .state() function to return the on/of state of the LED
 * 
 * v1.2
 *      22/05/19
 *      -add ledToggle functionality
 * 
 * /*****************************************/


#ifndef         __LED_HAL_H
#define         __LED_HAL_H


#include <Arduino.h>

//------------------------------------

 class led_hal{



public:

        void begin(uint8_t pinValue, uint8_t logicOnValue);

        void ledOn(void);

        void ledOff(void);

        void ledToggle(void);

        void fadeUp(void);

        void fadeDown(void);

        bool state(void);


        void flash(uint16_t counter, uint16_t delay_ms);

        /**
         * @brief flash alternating between one led and a second
         * 
         * @param counter   number of times to flah
         * @param delay_ms  delay for how long led is on
         * @param secLed    pointer to the second LED
         */
         void flash_alternating(uint16_t counter, uint16_t delay_ms, led_hal *secLed);


private:


    uint8_t _pin;
    uint8_t _logicOn;

        bool ledState;

 }; 
//------------------------------------
 #endif
