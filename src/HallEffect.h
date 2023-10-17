#ifndef HALL_EFFECT_H
#define HALL_EFFECT_H

#include <Arduino.h>

class HallEffect {
public:
  HallEffect(int sensorPin);

  bool isMagnetDetected();

private:
  int sensorPin;
};

#endif
