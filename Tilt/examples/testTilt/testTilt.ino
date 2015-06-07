/*
testTilt.ino - Basic example of library features.
Created by Miguel Rosales, June 07, 2015.
*/
#include <Tilt.h>

Tilt tiltSensor;
int led = 13; //arduino built in pin
int dataPin = 7; //Tilt sensor on pin 7

void setup() {
tiltSensor.begin(dataPin); //initialize tilt sensor
Serial.begin(9600);
pinMode(led, OUTPUT);
}

void loop() {
  if(tiltSensor.isTilting()){
    digitalWrite(led, HIGH); //Turn on LED if tilted
  }
  else{
     digitalWrite(led, LOW); //Turn off LED if not tilted
  }
}
