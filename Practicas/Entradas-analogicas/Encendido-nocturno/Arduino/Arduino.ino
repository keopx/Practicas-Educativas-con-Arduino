/**
 * Encendido nocturno
 *
 * En esta práctica tenemos que programar utilizando un sensor LDR
 * el encendido nocturno de un led.
 *
 * @author Miguel Ángel Abellán
 * @company Programo Ergo Sum
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0
 */

// Se definen las variables de tipo entero
int ledPin = 13;
int ldrPin = 0;
int limite = 500;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos el pin en modo salida
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  // Lectura del pin del interruptor
  if (analogRead(ldrPin) > limite) {
    digitalWrite(ledPin, LOW);
  }
  else {
    digitalWrite(ledPin, HIGH);
  }
}
