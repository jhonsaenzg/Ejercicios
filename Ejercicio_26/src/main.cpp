#include <Arduino.h>
#include <DataCapture.h>

int factorial = 1;

void setup() {
  Serial.begin(115200);

  int numero = DataCapture::captureInteger("Digite un numero");

  for(int i=1; i<= numero; i++){
    factorial = factorial * i;

  }

  Serial.println("El numero factorial es: " + String(factorial));
}

void loop() {
 
}
