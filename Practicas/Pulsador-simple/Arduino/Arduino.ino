/**
 * Pulsador simple
 *
 * En esta práctica vamos a programar un interruptor para encender un
 * led en un momento dado.
 *
 * @author Miguel Ángel Abellán
 * @company Programo Ergo Sum
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0
 */

// Se definen las variables de tipo entero
int ledPin = 13;
int interruptorPin = 2;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos el pin en modo salida
  pinMode(ledPin, OUTPUT);
  pinMode(interruptorPin, INPUT);
}

//Este código se ejecuta en bucle repetidamente
void loop() {

  // Lectura del pin del interruptor
  if (digitalRead(interruptorPin) == HIGH) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}