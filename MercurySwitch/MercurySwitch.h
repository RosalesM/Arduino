/*
MercurySwitch.h - Library for Keyes Mercury Switch/Tilt sensor.
Created by Miguel Rosales, May 29, 2015.
*/
#ifndef MercurySwitch_h
#define MercurySwitch_h

#include "Arduino.h"

class MercurySwitch
{
	public:
	MercurySwitch();
	void begin(int newDataPin);
	int getData();
	void setData(int newData);
	
	private:
	int data;
	int dataPin;
}; //End Class

#endif