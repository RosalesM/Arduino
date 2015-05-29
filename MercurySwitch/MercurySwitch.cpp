/*
MercurySwitch.cpp - Library for Keyes Mercury Switch/Tilt sensor.
Created by Miguel Rosales, May 29, 2015.
*/
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

//Return switch state
int MercurySwitch::getData(){
	return digitalRead(dataPin);
}

//Set switch state
void MercurySwitch::setData(int newData){
	data = newData;
}

