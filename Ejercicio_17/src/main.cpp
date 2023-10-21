#include <Arduino.h>
#include <DataCapture.h>

void setup() {
Serial.begin(115200);
int numero = DataCapture::captureInteger("Digite un numero: ");

int unidades = numero %10; numero /= 10;
int decenas = numero%10; numero /= 10;
int centenas = numero%10; numero /= 10;
int millar = numero %10; numero /= 10;

switch (millar)
{
    case 1: Serial.println("M");break;
    case 2: Serial.println("MM");break;
    case 3: Serial.println("MM");break;
}
switch (centenas)
{
    case 1: Serial.println("C");break;
    case 2: Serial.println("CC");break;
    case 3: Serial.println("CCC");break;
    case 4: Serial.println("CD");break;
    case 5: Serial.println("D");break;
    case 6: Serial.println("DC");break;
    case 7: Serial.println("DCC");break;
    case 8: Serial.println("DCCC");break;
    case 9: Serial.println("DM");break;
}
switch (decenas)
{
    case 1: Serial.println("X");break;
    case 2: Serial.println("XX");break;
    case 3: Serial.println("XXX");break;
    case 4: Serial.println("XL");break;
    case 5: Serial.println("L");break;
    case 6: Serial.println("LX");break;
    case 7: Serial.println("LXX");break;
    case 8: Serial.println("LXX");break;
    case 9: Serial.println("XC");break;
}
switch (unidades)
{
    case 1: Serial.println("I");break;
    case 2: Serial.println("II");break;
    case 3: Serial.println("III");break;
    case 4: Serial.println("IV");break;
    case 5: Serial.println("V");break;
    case 6: Serial.println("VI");break;
    case 7: Serial.println("VII");break;
    case 8: Serial.println("VIII");break;
    case 9: Serial.println("IX");break;
} 
//Serial.println("El nuevo valor de y" + String(y));
}

void loop() {

}