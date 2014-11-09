/*
TestMotors.ino - Simple example of basic library features.
Created by Miguel Rosales, November 9, 2014.
*/

#include <Rover.h>
Rover myRover;
void setup(){
  myRover.begin();
}

void loop(){
  //Drive forward
  myRover.moveForward(128);
  delay(3000); //Wait 3 seconds
  
  //Drive backwards
  myRover.moveReverse(128);
  delay(3000);
  
  //Drive left
  myRover.moveLeft(128,128);
  delay(3000);
  
  //Drive right
  myRover.moveRight(128,128);
  delay(3000);
  
  //Stop moving
  myRover.moveStop();
  delay(3000);
  
  //Start at half speed then go to full speed
  myRover.moveForward(128);
  delay(3000);
  myRover.setBothSpeed(255,255);
  delay(3000);
}
