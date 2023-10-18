#include <Arduino.h>
#include <Wire.h>
#include "PinDefinitions.h"
#include "StatusIndicator.h"
#include "HallEffect.h"
#include "Buzzer.h"
#include "ADXL345.h"
#include "LPS22.h"

const int LED_HIGH_VALUE = 240;

HallEffect hallEffect(PinDefs.HALL_EFFECT);

StatusIndicator statusIndicator(PinDefs.STATUS_LED_RED, PinDefs.STATUS_LED_GREEN, PinDefs.STATUS_LED_BLUE);

ADXL345 accel;

#define WIRE Wire1

LPS22 lps;


void setup() {
  Serial.begin(9600);
  Serial.println("Init");
  PinDefs.setupPins();

  statusIndicator.off();

  Serial.println("Accel Init");
  accel.begin();

  Serial.println("LPS Init");
  lps.begin();

  lps.setDataRate(LPS22_RATE_10_HZ);
}

void loop() {
  //print out the acceleration data
  sensors_event_t event = accel.getEvent();
  Serial.print("X: "); Serial.print(event.acceleration.x); Serial.print("  ");
  Serial.print("Y: "); Serial.print(event.acceleration.y); Serial.print("  ");
  Serial.print("Z: "); Serial.print(event.acceleration.z); Serial.print("  ");Serial.print("m/s^2 ");
  
  //print out the altitude data
  Serial.print("\tAltitude: "); Serial.print(lps.readAltitude()); Serial.println("m");
  delay(100);
}
