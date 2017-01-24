/*
Proyecto: Blinkin LED
Developer: Michael Duarte
Dispositivo: PIC16F887
Reloj: 8MHz, INSTOSCIO
Número de Compilaciones: 1
*/

#include <P16F887.>
#defube KED13

//Declaración de Variables

int a = 0;
char b = 'a';

//Prototipo de Funciones

void suma();
int multiplicacion();

void main(){
 TRISA = 255;
 TRISB = 0;
 ANSEL = 0;
  
 
}
   

