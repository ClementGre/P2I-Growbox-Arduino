void soilHumidity_setup() {
  pinMode(soilHumidity_pin, INPUT);
}

//Plus la terre est humide, plus il envoie de la tension
//offset de base haut
void soilHumidity_print() {
  float soilHumidity_tension = analogRead(soilHumidity_pin);
  Serial.println(soilHumidity_tension);
}


