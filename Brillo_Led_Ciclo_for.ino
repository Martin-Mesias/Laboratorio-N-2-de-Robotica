int intensidad;
int LED = 3;


void setup() {
  pinMode(LED, OUTPUT);
}


void loop() {
  for( intensidad = 0; intensidad < 256; intensidad ++){ // en esta linea se establece la intenisidad nula, la cual se evalua y se incrementa en un valor por ciclo
                                                         // cuando sea igual a 256 se sale del ciclo
    analogWrite(LED,intensidad);
    delay(15);
    
  }
  for( intensidad = 255; intensidad >= 0; intensidad --){  // en esta linea se establece la intenisidad maxima(HIGH), la cual se evalua y se decrementa en un valor por ciclo
                                                          // cuando sea igual a 0 se sale del ciclo
    analogWrite(LED,intensidad);
    delay(15);
  }
}
