/**
 * Medidor de distancia
 * 
 * @author Miguel Ángel Abellán
 * @company Programo Ergo Sum
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0
 */

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);

  digitalWrite(13, LOW);
}

void loop() {
  digitalWrite(13, HIGH);
  delayMicroseconds(10);
  digitalWrite(13, LOW);

  long tiempo;
  tiempo = pulseIn(12, HIGH);

  // Velocidad Sonido = 343 m/s
  float distancia = 34300*tiempo*0.000001;
  distancia = distancia / 2;

  Serial.print("Distancia: ");
  Serial.println(distancia);
}