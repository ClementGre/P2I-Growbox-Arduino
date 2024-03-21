float waterLevel_resistance = 0;

void WaterLevel_setup(int port) {
  pinMode(port, INPUT);
  Serial.begin(9600);
}

void WaterLevel_loop() {
  waterLevel_resistance = analogRead(A1);
  Serial.println(waterLevel_resistance);
}
