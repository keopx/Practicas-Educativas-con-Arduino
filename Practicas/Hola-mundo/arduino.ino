/**
 * Hola Mundo
 * 
 * En este lección se va a programar el código encargado de encender y 
 * apagar el led situado junto el pin número 13 de nuestra placa de Arduino. 
 * Deberá encenderse y apagarse con una frecuencia de 1 segundo.
 * 
 * @author Miguel Ángel Abellán
 * @company Programo Ergo Sum
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0
 */

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}