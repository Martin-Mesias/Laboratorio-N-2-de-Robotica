void setup() {  // se define los pins
  pinMode(3, OUTPUT); // se define el pin 3 como salida
}

void loop() {
  digitalWrite(3, HIGH); //enciende led
  delay(1000); //mantiene el led encendido 1000ms
  digitalWrite(3, LOW); //apaga el led
  delay(1000); //mantiene el led apagado 1000ms
}
