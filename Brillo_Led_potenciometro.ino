int BRILLO;
int LED = 3;
int POT = 0; // entradas analogicas no requiere inicializacion


void setup() {
  pinMode(LED, OUTPUT);
}


void loop() {
  BRILLO = analogRead(POT) / 4; // se divide por 4, porque LED es digital
                               //y va de 0-5 volts en 255 divisiones 
                               //por otro lado BRILLO es analogica y esta va de 0-5 votls
                               //en 1023 divisiones, para ello se divide por 4
  analogWrite(LED, BRILLO);
}
