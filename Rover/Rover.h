/*
Rover.cpp - Library for DFRobot Rover and l298p based arduino motor shields.
Created by Miguel Rosales, November 9, 2014.
*/

#ifndef Rover_h
#define Rover_h

#include "Arduino.h"

class Rover
{
public: 
Rover();
void begin(int newmotor1PWM, int newmotor2PWM, int newmotor1Direction, int newmotor2Direction);
void begin();
void setMotor1Speed(int newMotor1PWM);
void setMotor2Speed(int newMotor2PWM);
void setBothSpeed(int newMotor1PWM, int newMotor2PWM);
void moveStop();
void moveForward(int motorPWM);
void moveReverse(int motorPWM);
void moveLeft(int newMotor1PWM, int newMotor2PWM);
void moveRight(int newMotor1PWM, int newMotor2PWM);

private:
int motor1PWM;
int motor2PWM;
int motor1Direction;
int motor2Direction;

};//End Class

#endif