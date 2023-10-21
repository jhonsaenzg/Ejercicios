#include <Arduino.h>
#include <DataCapture.h>

int sumar (int);

void setup() {
  Serial.begin(115200);

  int nelementos;

  do
  {
    nelementos = DataCapture::captureInteger("Digite el numero de elementos: ");
  } while (nelementos <= 0);

  Serial.print("La suma de los elementos es: ");
  Serial.println(sumar(nelementos));
  
}
void loop() {
  // bucle principal si es necesario
}

int sumar (int n)
{
  int suma = 0;

  if (n==1)
  {
    suma = 1;
  }
  else
  {
    suma = n + sumar (n-1);
  }
  return suma;
}