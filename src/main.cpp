#include <Arduino.h>
#include <SoftwareSerial.h>

void moveForward();
void moveBackward();
void moveRight();
void moveLeft();
void moveStop();
int velocity=180;
const int motorpin1=3;
const int motorpin2=5;
const int motorpin3=6;
const int motorpin4=9;
int state='g';
void setup() {
  // put your setup code here, to run once:
  Serial.println("Welcome to Kevin's RC Car!");
  Serial.begin(9600);
  pinMode(motorpin1, OUTPUT);
  pinMode(motorpin2, OUTPUT);
  pinMode(motorpin3, OUTPUT);
  pinMode(motorpin4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){ 
  state = Serial.read();
  }
  if (state=='w'){
    Serial.println(state);
    moveForward();
  }
  if (state=='a'){
    Serial.println(state);
    moveLeft();
  }
  if (state=='s'){
    Serial.println(state);
    moveBackward();
  }
  if (state=='d'){
    Serial.println(state);
    moveRight();
  }
  if (state=='e'){
    Serial.println(state);
    velocity+=10;
  }
  if (state=='x'){
    Serial.println(state);
    moveStop();
  }
}

void moveForward(){
  analogWrite(motorpin1, 0);
  analogWrite(motorpin2, velocity);
  analogWrite(motorpin3, 0);
  analogWrite(motorpin4, velocity);
}
void moveBackward(){
  analogWrite(motorpin1, velocity);
  analogWrite(motorpin2, 0);
  analogWrite(motorpin3, velocity);
  analogWrite(motorpin4, 0);
}
void moveRight(){
  analogWrite(motorpin1, 0);
  analogWrite(motorpin2, velocity);
  analogWrite(motorpin3, velocity);
  analogWrite(motorpin4, 0);
}
void moveLeft(){
  analogWrite(motorpin1, velocity);
  analogWrite(motorpin2, 0);
  analogWrite(motorpin3, 0);
  analogWrite(motorpin4, velocity);
}
void moveStop(){
  analogWrite(motorpin1, 0);
  analogWrite(motorpin2, 0);
  analogWrite(motorpin3, 0);
  analogWrite(motorpin4, 0);
}