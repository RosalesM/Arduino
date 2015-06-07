/*
Tilt.cpp
Basic arduino library for Keyes tilt sensor
Created by Miguel Rosales, June 07, 2015.
*/
#include "Arduino.h"
#include "Tilt.h"

//Constructor
Tilt::Tilt(){}

//Initialization
void Tilt::begin(uint8_t newDataPin){
	dataPin = newDataPin;
	pinMode(dataPin, INPUT);
}

//Check if sensor is tilting
bool Tilt::isTilting(){
	int data = digitalRead(dataPin);
	if(data == HIGH){
		return true;
	}
	else{
		return false;
	}
}