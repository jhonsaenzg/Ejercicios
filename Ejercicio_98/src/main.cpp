#include <Arduino.h>
#include <DataCapture.h>
#include <string.h>

using namespace DataCapture;

struct nodo
{
  int dato;
  nodo *sigiente;
};

void agregarpila(nodo *&,int);
void sacarpila(nodo *&, int &);

void setup() {
  Serial.begin(115200);
  nodo *pila =NULL;
  String rpt;
  int dato;
  do{
      dato = captureInteger("Digite un numero: ");
      agregarpila(pila,dato);

      rpt = captureString ("desea agregar otro elemeto a pila (s/n) " );

  } while ((rpt.equalsIgnoreCase("s")) || (rpt.equalsIgnoreCase("S")));

  Serial.println("Sacando a todos los elementos de la pila ");
  while (pila != NULL)
  {
    sacarpila(pila,dato);

      Serial.println(String(dato));
  }
  

}


void agregarpila(nodo *&pila,int n){
  nodo *nuevo_nodo = new nodo();
  nuevo_nodo ->dato = n;
  nuevo_nodo ->sigiente = pila;
  pila = nuevo_nodo;
  Serial.println(" elemento " + String(n)+ " ha sido agregado a PILA correctamente");
}

void sacarpila(nodo *& pila, int &n){
    nodo *aux= pila;
    n = aux ->dato;
    pila = aux ->sigiente;
    delete aux;
}

void loop() {
  // put your main code here,
}
