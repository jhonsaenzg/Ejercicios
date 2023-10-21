#include <Arduino.h>
#include <DataCapture.h>
using namespace DataCapture;

struct etapas 
{
  int horas;
  int minutos;
  int segundos;
}et[100];

void setup() {
  Serial.begin(115200);

  int horast=0,minutost=0,segundost=0;

  int n_etapas =captureInteger("Digite el numero de etapas: ");

  for(int i = 0; i < n_etapas; i++)
  {
    et[i].horas = captureInteger("horas: ");
    et[i].minutos = captureInteger("minutos: ");
    et[i].segundos = captureInteger("segundos: ");

    horast = horast + et[i].horas;
    minutost = minutost + et[i].minutos;
    if (minutost >= 60)
    {
      minutost = minutost -= 60;
      horast++;
    }
    segundost = segundost + et[i].segundos;
    if (segundost >= 60)
    {
      segundost  -= 60;
      minutost++;
    }

  }
  
  Serial.println("El timepo total es:");
  Serial.println("Horas: "+ String(horast));
  Serial.println("Minutos: "+ String(minutost));
  Serial.println("Segundos: "+ String(segundost));
  
}
void loop() {
  // Bucle principal si es necesario
}
