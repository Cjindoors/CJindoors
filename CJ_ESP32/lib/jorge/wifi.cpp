#include <Arduino.h>
#include "wifi.h"

wifi::wifi(byte pin){
    _pin = pin; 
    pinMode(_pin, INPUT);
}

float wifi::coneccionWifi(){
    float vBat = 0.0; 
    for(int i = 0; i < 100; i++){
        vBat += (analogRead(_pin)/4095.0)*4.2;
    }
    
    return vBat/100; 
}

