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