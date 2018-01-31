# Servomotor 0-180

![Animación](practica.gif)

En esta práctica el servomotor se mueve desde su posición origen a su posición final en ángulos de 10° repetidamente.

1.	[Materiales](#materiales)
2.	[Esquema eléctrico](#esquema-eléctrico)
3.	[Programación en mBlock](#programación-en-mblock)
4.	[Programación en Arduino](#programación-en-arduino)



---


<br><br>


## Materiales

Para llevar a cabo la práctica, vamos a necesitar los siguientes materiales:
- 1 Placa de Arduino UNO
- 3 latiguillos
- 1 Servomotor


<br><br>


## Esquema eléctrico


| Servo motores      |                  |
| ------------------ | ---------------- |
| Polarizado         | Sí               |
| Tensión operativa  | 4,8V             |
| Rotación           | 0° a 180°        |
| Torque estático    | 4,5V > 1,5Kg/cm  |

Se conectan los componentes sobre la placa de prototipado.

![Esquema eléctrico](fritzing.png)


<br><br>


## Programación en mBlock

La programación de esta práctica consiste en mover el servomotor desde un ángulo hasta otro dado.

![Programación en mBlock](mblock.png)


<br><br>


## Programación en Arduino

Al igual que en el apartado anterior, programamos en Arduino IDE la práctica propuesta.

```
/**
 * Servomotor 0-180
 * 
 * @author Miguel Ángel Abellán
 * @company Programo Ergo Sum
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0
 */

#include <Servo.h>

Servo servomotor;

void setup() {
  servomotor.attach(9);
}

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
```



---



<img src="http://i.creativecommons.org/l/by-sa/4.0/88x31.png" /><br>
Esta obra está bajo una licencia de [Creative Commons Reconocimiento-CompartirIgual 4.0 Internacional](https://creativecommons.org/licenses/by-sa/4.0/deed.es_ES).
