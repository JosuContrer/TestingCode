#include <Arduino.h>
#include <TimerOne.h>
#include <UltraSonicSensor.h>
#include <Pins.h>

// defines pins numbers
// UltraSonicSensor variables:
UltraSonicSensor rightSensor;
UltraSonicSensor leftSensor;


void setup() {
  Timer1.initialize(2000000);
  pinMode(RIGHTTRIGGERPIN, OUTPUT); // Sets the trigPin as an Output
  pinMode(RIGHTECHOPIN, INPUT); // Sets the echoPin as an Input
  pinMode(LEFTTRIGGERPIN, OUTPUT); // Sets the trigPin as an Output
  pinMode(LEFTECHOPIN, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}

void loop() {

rightSensor.distanceFromWall(RIGHTTRIGGERPIN,RIGHTECHOPIN);
leftSensor.distanceFromWall(LEFTTRIGGERPIN, LEFTECHOPIN);

}
