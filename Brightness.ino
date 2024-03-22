//Plus c'est lumineux, plus la tension est faible
void brightness_setup() {
  pinMode(brightness_pin, INPUT);
}

void brightness_print() {
  float brightness_tension = analogRead(brightness_pin);
  Serial.println(brightness_tension);
}
