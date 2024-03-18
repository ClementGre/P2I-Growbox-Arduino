float tension = 0;


void Brightness_setup() {
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void Brightness_loop() {
  tension = analogRead(A1);
  Serial.println(tension);
}
