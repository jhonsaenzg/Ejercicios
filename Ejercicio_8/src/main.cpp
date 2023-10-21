#include <Arduino.h>
#include <DataCapture.h>



void setup() {
  Serial.begin(115200);
  
  int x = DataCapture::captureInteger("Ingrese el valor de x:");
  int y = DataCapture::captureInteger("Ingrese el valor de y:");

  int aux = x;
  x = y;
  y = aux;

  Serial.println("El nuevo valor de x" + String(x));
  Serial.println("El nuevo valor de y" + String(y));

}

void loop() {
 
}