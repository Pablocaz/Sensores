
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   //rojo izq
  digitalWrite(8, HIGH);   //Verde der
  delay(5000);
  digitalWrite(8, LOW); //verde der
  digitalWrite(9, HIGH);   //amarillo der
  delay(1000);
  digitalWrite(9, LOW); //amarillo der
  digitalWrite(13, LOW); //rojo izq
  digitalWrite(11, HIGH);   //verde izq
  digitalWrite(10, HIGH);   //rojo der
  delay(5000);         
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);   //amarillo izq
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
}
