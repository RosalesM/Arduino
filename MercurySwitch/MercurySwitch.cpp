#include "Arduino.h"
#include "MercurySwitch.h"

//Constructor
MercurySwitch::MercurySwitch(){}

//Initialization Function
void MercurySwitch::begin(int newDataPin){
dataPin = newDataPin;
pinMode(dataPin, INPUT);
data = 0;
}

int MercurySwitch::getData(){
	return digitalRead(dataPin);
}

void MercurySwitch::setData(int newData){
	data = newData;
}

