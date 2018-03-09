/*
 * This prevents this header to be included more then once in the complier proccess
 * If not defined in the comlier already then defines
 */
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
