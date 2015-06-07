/*
Tilt.h
Basic arduino library for Keyes tilt sensor
Created by Miguel Rosales, June 07, 2015.
*/
#ifndef Tilt_h
#define Tilt_h

#include "Arduino.h"

class Tilt
{
public:
Tilt();
void begin(uint8_t newDataPin);
bool isTilting();



private:
	uint8_t dataPin;

};	

#endif