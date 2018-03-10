#include <Arduino.h>
#include <TimerOne.h>
#include <UltraSonicSensor.h>
#include <Pins.h>

// UltraSonicSensor variables:
UltraSonicSensor rightSensor;
UltraSonicSensor leftSensor;


void setup() {
  Timer1.initialize(2000000);

  //Ultrasonic Sensor
  pinMode(RIGHTTRIGGERPIN, OUTPUT); // Sets the trigPin as an Output
  pinMode(RIGHTECHOPIN, INPUT); // Sets the echoPin as an Input
  pinMode(LEFTTRIGGERPIN, OUTPUT); // Sets the trigPin as an Output
  pinMode(LEFTECHOPIN, INPUT); // Sets the echoPin as an Input

  //LEDs
  pinMode(LEFTLEDPIN, OUTPUT);
  pinMode(RIGHTLEDPIN, OUTPUT);

  Serial.begin(9600); // Starts the serial communication
}

void loop() {

int rightS = rightSensor.distanceFromWall(RIGHTTRIGGERPIN,RIGHTECHOPIN);
int leftS = leftSensor.distanceFromWall(LEFTTRIGGERPIN,LEFTECHOPIN);

if(30 <= rightS && 31 >= rightS){
  digitalWrite(RIGHTLEDPIN, HIGH);
}else{
  digitalWrite(RIGHTLEDPIN, LOW);
}

if(9 <= leftS && 20 >= leftS){
  digitalWrite(LEFTLEDPIN, HIGH);
}else{
  digitalWrite(LEFTLEDPIN, LOW);
}

Serial.print(rightS);
Serial.print("|");
Serial.println(leftS);
delay(100);
}
