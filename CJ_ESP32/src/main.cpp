#include <Arduino.h>
#include "datos.h"

voltaje voltajeBat(33);


void setup() {
  Serial.begin(9600);

}

void loop() {

  float tension = voltajeBat.medirVoltaje();
  Serial.println(String(tension));
  delay(1000);
}