#include <Adafruit_Si7021.h>

Adafruit_Si7021 sensor;

void temperature_humidity_setup() {
    sensor = Adafruit_Si7021();
    sensor.begin();
}

float temperature_fetch() {
    return sensor.readTemperature();
}

float humidity_fetch() {
    return Serial.print(sensor.readHumidity());
}

void temperature_print() {
    Serial.print("Temperature: ");
    Serial.print(temperature_fetch());
    Serial.println(" °C");
}

void humidity_print() {
    Serial.print("Humidity: ");
    Serial.print(humidity_fetch());
    Serial.println(" %");
}

