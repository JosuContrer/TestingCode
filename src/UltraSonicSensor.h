#ifndef UltraSonicSensor_h
#define UltraSonicSensor_h

#include "Arduino.h"

class UltraSonicSensor{
public:
  UltraSonicSensor();
  int distanceFromWall(int trigPin, int echoPin);

private:
  // defines variables
  long duration;
  int distance;


};

#endif
