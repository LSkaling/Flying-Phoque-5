#include "PinDefinitions.h"
#include <Arduino.h>

PinDefinitions::PinDefinitions():
    STATUS_LED_RED(1),
    STATUS_LED_GREEN(0),
    STATUS_LED_BLUE(2),

    // IGNITER_1(4),
    // IGNITER_2(5),
    // IGNITER_3(6),

    // IGNITER_SENSE_1(16),
    // IGNITER_SENSE_2(15),
    // IGNITER_SENSE_3(14),

    SERVO_0(7),
    SERVO_1(8),
    SERVO_2(9),
    SERVO_3(10),
    SERVO_4(11),
    SERVO_5(12),

    BUZZER(13),
    HALL_EFFECT(22),
    ARM_SENSE(23)
{
    // Constructor
}

void PinDefinitions::setupPins() {
    pinMode(STATUS_LED_RED, OUTPUT);
    pinMode(STATUS_LED_GREEN, OUTPUT);
    pinMode(STATUS_LED_BLUE, OUTPUT);

    // pinMode(IGNITER_1, OUTPUT);
    // pinMode(IGNITER_2, OUTPUT);
    // pinMode(IGNITER_3, OUTPUT);

    // pinMode(IGNITER_SENSE_1, INPUT);
    // pinMode(IGNITER_SENSE_2, INPUT);
    // pinMode(IGNITER_SENSE_3, INPUT);

    pinMode(SERVO_0, OUTPUT);
    pinMode(SERVO_1, OUTPUT);
    pinMode(SERVO_2, OUTPUT);
    pinMode(SERVO_3, OUTPUT);
    pinMode(SERVO_4, OUTPUT);
    pinMode(SERVO_5, OUTPUT);

    pinMode(BUZZER, OUTPUT);

    pinMode(HALL_EFFECT, INPUT);

    pinMode(ARM_SENSE, INPUT);
}

PinDefinitions PinDefs;