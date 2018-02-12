/**
 * Coche fantástico
 *
 * @author Miguel Ángel Abellán
 * @company Programo Ergo Sum
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0
 */

const byte led[] = {13, 12, 11, 10, 9, 8};

void setup() {
  for (int i=0; i<sizeof(led); i++) {
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  for (int i=0; i<sizeof(led); i++) {
    digitalWrite(led[i], HIGH);
    delay(100);
    digitalWrite(led[i], LOW);
  }
  for (int i=sizeof(led)-1; i>0; i--) {
    digitalWrite(led[i], HIGH);
    delay(100);
    digitalWrite(led[i], LOW);
  }
}