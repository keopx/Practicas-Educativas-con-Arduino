/**
 * Movimiento de un servomotor
 * 
 * En esta práctica el servomotor se mueve desde su posición origen a 
 * su posición final en ángulos de 10° repetidamente.
 * 
 * @author Miguel Ángel Abellán
 * @company Programo Ergo Sum
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0
 */

// Importamos la librería del servomotor
#include <Servo.h>

// Definimos la variable de tipo servo
Servo servomotor;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos los pines en modo salida
  servomotor.attach(9);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  for(int i=0; i<=180; i+=10){
    servomotor.write(i);
    delay(100);
  }
  for(int i=180; i>=0; i-=10){
    servomotor.write(i);
    delay(100);
  }
}
