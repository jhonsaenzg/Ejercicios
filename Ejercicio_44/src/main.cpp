#include <Arduino.h>
#include <iostream>

void setup() {
  Serial.begin(115200);
  char cad1[] ="esto es una cadena";
  char cad2[] =" de ejemplo";
  char cad3[30];

  strcpy(cad3,cad1);

  strcat(cad3,cad2);

  Serial.println(cad3);
}

void loop() {
  
}