/*
Test_Mercury_Switch.ino - Basic example of library features.
Created by Miguel Rosales, May, 29, 2015.
*/

#include <MercurySwitch.h>
MercurySwitch mSwitch;
int led = 13; //LED on Arduino Uno board
int dataPin = 7; //"S" pin on mercury switch connected to pin 7 on arduino board


//Setup functions
void setup() {
  // put your setup code here, to run once:
mSwitch.begin(dataPin);
Serial.begin(9600);
pinMode(led, OUTPUT);
}


//Test sensor by turning arduino on board led on and off
void loop() {
  // put your main code here, to run repeatedly:
  if(mSwitch.getData() != HIGH){
    digitalWrite(led, HIGH);
  }
  else{
   digitalWrite(led, LOW); 
  }
}
