#include <Arduino.h>
int soilHumidity_port = A1;
int brightness_port = A2;
int waterLevel_port = A3;

void setup() {
  SoilHumidity_setup(soilHumidity_port);
  Brightness_setup(brightness_port);
  WaterLevel_setup(waterLevel_port);
  temperature_humidity_setup();
  O2_setup();
  CO2_setup();
  
  Serial.begin(9600);
}

void loop() {

  SoilHumidity_loop();
  Brightness_loop();
  WaterLevel_loop();
  temperature_print();
  humidity_print();
  O2_print();
  CO2_print();

  delay(1000);
  }
