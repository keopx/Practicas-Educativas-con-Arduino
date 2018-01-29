/**
 * Luz alterna
 *
 * En esta práctica se va a programar el código encargado de encender y apagar 
 * de forma alterna 2 diodos led conectados a los pines 12 y 13 de nuestra placa 
 * de arduino. Deberán encenderse y apagarse con una frecuencia de 1 segundo.
 *
 * @author Miguel Ángel Abellán
 * @company Programo Ergo Sum
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0
 */

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
}

void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
}