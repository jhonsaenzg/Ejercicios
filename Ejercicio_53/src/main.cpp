#include <Arduino.h>


void setup() {
Serial.begin(115200);

  int a [] = {3,4,2,1,5};
  int i, dato;
  char band = 'F';

  dato =4;
  i=0;

  while ((band == 'F') && (i<5))
  {
      if(a[i] == dato)
      {
        band ='V';
      }
      i++;
  }
  if(band == 'F'){
    Serial.println("El dato a busacar no esta en el arreglo");
  }
  else if (band == 'V'){
    Serial.println("El numero ha sido encontrado en la pocision: " + String(i-1));
  }


}

void loop() {

}
