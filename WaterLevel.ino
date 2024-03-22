void waterLevel_setup() {
  pinMode(waterLevel_pin, INPUT);
}

void waterLevel_print() {
  float waterLevel_resistance = analogRead(waterLevel_pin);
  Serial.println(waterLevel_resistance);
}
