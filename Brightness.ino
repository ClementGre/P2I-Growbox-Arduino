float brightness_tension = 0;

//Plus c'est lumineux, plus la tension est faible
void Brightness_setup(int port) {
  pinMode(port, INPUT);
  Serial.begin(9600);
}

void Brightness_loop() {
  brightness_tension = analogRead(A1);
  Serial.println(brightness_tension);
}
