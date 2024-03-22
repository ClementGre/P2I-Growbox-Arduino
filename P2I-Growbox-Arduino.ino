#include <Arduino.h>

// temperatureHumidity on I2C
int soilHumidity_pin = A1;
int brightness_pin = A2;
int waterLevel_pin = A3;
int O2_pin = A4;

bool temperatureHumidity_enabled = true;
bool soilHumidity_enabled = false;
bool brightness_enabled = false;
bool waterLevel_enabled = false;
bool O2_enabled = true;

void setup() {
    if (temperatureHumidity_enabled) {
        temperatureHumidity_setup();
    }
    if (soilHumidity_enabled) {
        soilHumidity_setup();
    }
    if (brightness_enabled) {
        brightness_setup();
    }
    if (waterLevel_enabled) {
        waterLevel_setup();
    }
    if (O2_enabled) {
        O2_setup();
    }
  
    Serial.begin(9600);
}

void loop() {
    if (temperatureHumidity_enabled) {
        temperature_print();
        humidity_print();
    }
    if (soilHumidity_enabled) {
        soilHumidity_print();
    }
    if (brightness_enabled) {
        brightness_print();
    }
    if (waterLevel_enabled) {
        waterLevel_print();
    }
    if (O2_enabled) {
        O2_print();
    }

    delay(1000);
}
