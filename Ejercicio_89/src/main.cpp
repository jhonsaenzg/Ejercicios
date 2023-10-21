#include <Arduino.h>
#include <DataCapture.h>
#include <stdlib.h>

void pedirdatos() ;
void ordenararreglo(int *, int);
void mostrar(int *, int);

int nelementos;
int *elemento;

using namespace DataCapture;

void setup() {
      Serial.begin(115200);
      pedirdatos();
      ordenararreglo(elemento,nelementos);
      mostrar(elemento,nelementos);

      delete[] elemento;

}
void loop() {
  // Tu código del bucle principal si es necesario
}

void pedirdatos () {
     nelementos = captureInteger ("digite número de elementos en el arreglo: ") ;

     elemento = new int [nelementos];
     for( int i =0; i < nelementos; i++) {
           *(elemento+i) = captureInteger("Digite un número" + String(i)) ;

     } 
}

void ordenararreglo(int *elemento, int nelementos)
{
      int aux;
      for(int i = 0; i<nelementos;i++){
         for(int j=0; j<nelementos-1;j++){
            if(*(elemento + j)> *(elemento+j+1)){
                  aux = *(elemento+j);
                  *(elemento+j) = *(elemento+j+1);
                  *(elemento+j+1) = aux;
            }
         }

      }
}

void mostrar(int *elemento, int nelementos)
{
      Serial.println("Mostrar arreglo ordenado");
      for(int i=0;i<nelementos; i++){
            Serial.println(String(*(elemento + i)));
      }
}