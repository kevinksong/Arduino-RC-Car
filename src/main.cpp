#include <Arduino.h>
void moveForward();
void moveBackward();
void moveRight();
void moveLeft();
void moveStop();
const int motorpin1=3;
const int motorpin2=5;
const int motorpin3=6;
const int motorpin4=9;
void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //moveForward();
   //moveBackward();
  //moveLeft();
   //moveRight();
}

void moveForward(){
  analogWrite(motorpin1, 0);
  analogWrite(motorpin2, 180);
  analogWrite(motorpin3, 0);
  analogWrite(motorpin4, 180);
}
void moveBackward(){
  analogWrite(motorpin1, 180);
  analogWrite(motorpin2, 0);
  analogWrite(motorpin3, 180);
  analogWrite(motorpin4, 0);
}
void moveRight(){
  analogWrite(motorpin1, 0);
  analogWrite(motorpin2, 180);
  analogWrite(motorpin3, 180);
  analogWrite(motorpin4, 0);
}
void moveLeft(){
  analogWrite(motorpin1, 180);
  analogWrite(motorpin2, 0);
  analogWrite(motorpin3, 0);
  analogWrite(motorpin4, 180);
}
void moveStop(){
  analogWrite(motorpin1, 0);
  analogWrite(motorpin2, 0);
  analogWrite(motorpin3, 0);
  analogWrite(motorpin4, 0);
}