#ifndef PIN_DEFINITIONS_H
#define PIN_DEFINITIONS_H

class PinDefinitions {
public:
    // Constructor
    PinDefinitions();

    // Digital Pins
    const int STATUS_LED_RED;
    const int STATUS_LED_GREEN;
    const int STATUS_LED_BLUE;

    const int IGNITER_1;
    const int IGNITER_2;
    const int IGNITER_3;

    const int IGNITER_SENSE_1;
    const int IGNITER_SENSE_2;
    const int IGNITER_SENSE_3;

    const int SERVO_0;
    const int SERVO_1;
    const int SERVO_2;
    const int SERVO_3;
    const int SERVO_4;
    const int SERVO_5;

    const int BUZZER;

    const int HALL_EFFECT;

    const int ARM_SENSE;

    void setupPins();
};

extern PinDefinitions PinDefs;

#endif