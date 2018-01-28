/**
 * Hola Mundo
 * 
 * En esta práctica se va a programar el primer programa que encenderá y 
 * apagará el led incorporado en la placa de Arduino con una frecuencia de 
 * 1 segundo.
 * 
 * @author Miguel Ángel Abellán
 * @company Programo Ergo Sum
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0
 */

void setup() {
  // Configuramos el pin en modo salida
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}