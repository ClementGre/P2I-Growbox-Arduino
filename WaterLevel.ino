float resistance = 0;

void WaterLevel_setup() {
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void WaterLevel_print() {
  resistance = analogRead(A1);
  Serial.println(resistance);
}
