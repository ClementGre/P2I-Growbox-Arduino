float tension = 0;


void SoilHumidity_setup() {
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

//Plus la terre est humide, plus il envoie de la tension
//offset de base haut
void SoilHumidity_print() {
  tension = analogRead(A1);
  Serial.println(tension);
}


