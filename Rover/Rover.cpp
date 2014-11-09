/*
Rover.cpp - Library for DFRobot Rover and l298p based arduino motor shields.
Created by Miguel Rosales, November 9, 2014.
*/

#include "Arduino.h"
#include "Rover.h"

//Constructor
Rover::Rover(){}

//Allow pins allocated for the motors 
//to send signals out to the motors
void Rover::begin(int newMotor1PWM, int newMotor2PWM, int newMotor1Direction, int newMotor2Direction){
 motor1PWM = newMotor1PWM;
 motor2PWM = newMotor2PWM;
 motor1Direction = newMotor1Direction;
 motor2Direction = newMotor2Direction;
 pinMode(motor1PWM, OUTPUT);
 pinMode(motor2PWM, OUTPUT);
 pinMode(motor1Direction, OUTPUT);
 pinMode(motor2Direction, OUTPUT);
}//End begin

//default values for DFRobot Rover
void Rover::begin(){
motor1PWM = 6;
motor2PWM = 5;
motor1Direction = 8;
motor2Direction = 7;
pinMode(motor1PWM, OUTPUT);
pinMode(motor2PWM, OUTPUT);
pinMode(motor1Direction, OUTPUT);
pinMode(motor2Direction, OUTPUT);
}//End begin

//Set the speed of motor 1
//0-255 0 = OFF 255 = Max Speed 
void Rover::setMotor1Speed(int newMotor1PWM){
 analogWrite(motor1PWM, newMotor1PWM); 
}//End setMotor1Speed

//Set the speed of motor 2
//0-255 0 = OFF 255 = Max Speed 
void Rover::setMotor2Speed(int newMotor2PWM){
 analogWrite(motor2PWM, newMotor2PWM);
}//End setMotor2Speed

//Set the speed of both motors
//0-255 0 = OFF 255 = Max Speed
void Rover::setBothSpeed(int newMotor1PWM, int newMotor2PWM){
 setMotor1Speed(newMotor1PWM);
 setMotor2Speed(newMotor2PWM);
}//End setBothSpeed

//Stop movement of rover
void Rover::moveStop(){
 setBothSpeed(0,0);
}//End moveStop

//Move the rover forward
//0-255 0 = OFF 255 = Max Speed
void Rover::moveForward(int motorPWM){
 setBothSpeed(motorPWM, motorPWM);
 digitalWrite(motor1Direction, LOW);
 digitalWrite(motor2Direction, LOW);
}//End moveForward

//Move the rover backwards
//0-255 0 = OFF 255 = Max Speed
void Rover::moveReverse(int motorPWM){
 setBothSpeed(motorPWM, motorPWM);
 digitalWrite(motor1Direction, HIGH);
 digitalWrite(motor2Direction, HIGH);
}//End moveReverse

//Turn the rover left
//0-255 0 = OFF 255 = Max Speed
void Rover::moveLeft(int newMotor1PWM, int newMotor2PWM){
 setBothSpeed(newMotor1PWM, newMotor2PWM);
 digitalWrite(motor1Direction, HIGH);
 digitalWrite(motor2Direction, LOW);
}//End moveLeft

//Turn the rover right
//0-255 0 = OFF 255 = Max Speed
void Rover::moveRight(int newMotor1PWM, int newMotor2PWM){
 setBothSpeed(newMotor1PWM, newMotor2PWM);
 digitalWrite(motor1Direction, LOW);
 digitalWrite(motor2Direction, HIGH);
}//End moveRight