float soilHumidity_tension = 0;


void SoilHumidity_setup(int port) {
  pinMode(port, INPUT);
  Serial.begin(9600);
}

//Plus la terre est humide, plus il envoie de la tension
//offset de base haut
void SoilHumidity_print() {
  soilHumidity_tension = analogRead(A1);
  Serial.println(soilHumidity_tension);
}


