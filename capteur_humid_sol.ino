float tension = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  tension = analogRead(A1);
  
  Serial.println(tension);
  delay(300);
}

//Plus la terre est humide, plus il envoie de la tension
//offset de base haut 
