#include <Arduino.h>
#include <TimerOne.h>
#include <UltraSonicSensor.h>

/*
* Ultrasonic Sensor HC-SR04 and Arduino Tutorial
*
* Crated by Dejan Nedelkovski,
* www.HowToMechatronics.com
*
*/
// defines pins numbers
// UltraSonicSensor variables:
const int trigPin = 9;
const int echoPin = 10;
UltraSonicSensor uSensor;


void setup() {
  Timer1.initialize(2000000);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}

void loop() {

uSensor.distanceFromWall(trigPin,echoPin);

}
