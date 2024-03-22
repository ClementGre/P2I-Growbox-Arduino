#include <Adafruit_Si7021.h>
/*
Le capteur est super sensible, dès qu'on met un peu d'eau il renvoie rapidement des valeurs proches du max (1023)
On devra sûrement faire juste une valeur seuil (ou plutôt une moyenne sur 30 minutes qui donne une idée)
*/
Adafruit_Si7021 sensor;

void temperatureHumidity_setup() {
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

