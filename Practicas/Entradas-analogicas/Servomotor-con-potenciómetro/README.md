# Servomotor con potenciómetro

![Animación](practica.gif)

En esta práctica vamos a mover un servomotor utilizando un potenciómetro. A medida que vamos moviendo el valor del mismo el valor del servo irá cambiando.

1.  [Materiales](#materiales)
2.  [Esquema eléctrico](#esquema-eléctrico)
3.  [Programación en mBlock](#programación-en-mBlock)
4.  [Programación en Arduino](#programación-en-arduino)



---


<br><br>


## Materiales

Para llevar a cabo la práctica, vamos a necesitar los siguientes materiales:
- 1 Placa de Arduino UNO
- 6 latiguillos
- 1 potenciómetro
- 1 Servomotor


<br /><br />


## Esquema eléctrico

Teniendo en cuenta las características técnicas de los diodos led que utilizamos en esta práctica, calculamos la resistencia del circuito aplicando la Ley de Ohm.
| Servo motores      |                  |
| ------------------ | ---------------- |
| Polarizado         | Sí               |
| Tensión operativa  | 4,8V             |
| Rotación           | 0° a 180°        |
| Torque estático    | 4,5V > 1,5Kg/cm  |

Los servomotores que encontramos en el kit suelen tener los cables con los colores marrón, rojo y naranja, los cuales se corresponden con el GND, 5V y Pin de salida analógica respectivamente.

Por otro lado, el potenciómetro a utilizar abarca una resistencia de 0Ω a 10KΩ y lo utilizaremos para regular el servomotor.

| Potenciómetro      |       |
| ------------------ | ----- |
| Polarizado         | Sí    |
| Resistencia mínima | 0Ω    |
| Resistencia máxima | 10KΩ  |
| Precisión          | 5%    |

Se conectan los componentes sobre la placa de prototipado.

![Esquema eléctrico](fritzing.png)


<br /><br />


## Programación en mBlock

Fijándonos en el diagrama de flujo programamos la práctica mediante lenguaje de programación por bloques mBlock. 

![Programación en mBlock](mBlock.png)


<br /><br />


## Programación en Arduino

Al igual que en el apartado anterior, programamos en Arduino IDE la práctica propuesta.

```
/**
 * Servomotor con potenciómetro
 * 
 * En esta práctica vamos a mover un servomotor utilizando un potenciómetro.
 * A medida que vamos moviendo el valor del mismo el valor del servo irá
 * cambiando.
 * 
 * @author Miguel Ángel Abellán
 * @company Programo Ergo Sum
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0
 */

// Importamos la librería del servomotor
#include <Servo.h>

// Definimos la variable de tipo servo
Servo servomotor;

// Se definen las variables de tipo entero
int pinPotenciometro = 0;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos los pines en modo salida
  servomotor.attach(9);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  int angulo = analogRead(pinPotenciometro);
  angulo = map(angulo, 0, 1023, 0, 180);
  servomotor.write(angulo);
  delay(15);
}

```



---



<img src="http://i.creativecommons.org/l/by-sa/4.0/88x31.png" /><br>
Esta obra está bajo una licencia de [Creative Commons Reconocimiento-CompartirIgual 4.0 Internacional](https://creativecommons.org/licenses/by-sa/4.0/deed.es_ES).