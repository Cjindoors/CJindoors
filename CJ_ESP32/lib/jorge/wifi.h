#ifndef datosESP_h
#define datosESP_h

#include <Arduino.h>

class voltaje{

    public:
        voltaje(byte pin);
        float medirVoltaje();
    private:
    
    byte _pin;

};

#endif