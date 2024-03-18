float resistance = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  resistance = analogRead(A1);
  
  Serial.println(resistance);
  delay(300);
}
