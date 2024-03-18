#include <Arduino.h>

void setup() {
    temperature_humidity_setup();
    O2_setup();
    CO2_setup();

    Serial.begin(9600);
}

void loop() {

    temperature_print();
    humidity_print();
    O2_print();
    CO2_print();

    delay(1000);
}
