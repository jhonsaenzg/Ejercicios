#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

void tiempo (int, int&,int&,int&);

void setup() {
  Serial.begin(115200);
  int horas,min,seg;

  int totalseg = captureInteger("Ingrese el numero total de segundos: ");

  tiempo (totalseg,horas,min,seg);

  Serial.println("Tiempo equivalente a la cantidad de segundos digitados:");
  Serial.println("horas " + String(horas));
  Serial.println("minutos " + String(min));
  Serial.println("Segundos " + String(seg));

}
void loop() {
  // Bucle principal si es necesario
}

void tiempo (int totalseg, int& horas, int& min, int& seg)
{
  horas = totalseg / 3600;
  totalseg %= 3600;
  min = totalseg /60;
  seg = totalseg %60;

}