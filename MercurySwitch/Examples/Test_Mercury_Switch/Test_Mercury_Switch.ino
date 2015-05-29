#include <MercurySwitch.h>
MercurySwitch mSwitch;
int led = 13;
int dataPin = 7;

void setup() {
  // put your setup code here, to run once:
mSwitch.begin(dataPin);
Serial.begin(9600);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(mSwitch.getData() != HIGH){
    digitalWrite(led, HIGH);
  }
  else{
   digitalWrite(led, LOW); 
  }
}
