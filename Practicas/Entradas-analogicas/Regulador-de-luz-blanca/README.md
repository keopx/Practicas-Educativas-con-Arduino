# Regulador de luz blanca

![Animación](practica.gif)

En esta práctica se va a regular un conjunto de diodos Led de color blanco utilizando un potenciómetro.
 
1.  [Materiales](#materiales)
2.  [Esquema eléctrico](#esquema-eléctrico)
3.  [Programación en mBlock](#programación-en-mBlock)
4.  [Programación en Arduino](#programación-en-arduino)



---


<br><br>


## Materiales

Para llevar a cabo la práctica, vamos a necesitar los siguientes materiales:
- 1 Placa de Arduino UNO
- 1 Protoboard
- 7 latiguillos
- 3 diodos Led blanco
- 3 Resistencia
- 1 potenciómetro


<br /><br />


## Esquema eléctrico

Teniendo en cuenta las características técnicas de los diodos led que utilizamos en esta práctica, calculamos la resistencia del circuito aplicando la Ley de Ohm.

| Diodos Led                       |        |
| -------------------------------- | ------ |
| Polarizado                       | Sí     |
| Itensidad de Corriente           | 20mA   |
| Tensión Led (verde, ámbar, rojo) | 2,1V   |
| Tensión Led blanco               | 3,3V   |

Como se puede observar en la tabla anterior, los diodos Led blancos que vamos a utilizar para la práctica admiten una tensión de 3,3V. 

Para evitar que se puedan dañar tendremos que colocarle una resistencia al circuito. Para ello, vamos a calcular el valor de la resistencia siguiendo la *Ley de Ohm* y teniendo en cuenta los datos de la tabla anterior.

Si los pines de Arduino ofrecen una tensión de 5V y la tensión máxima del diodo Led admite 3,3V, la diferencia de potencial que debemos tener en el diodo Led es de 5V – 3,3V = 1,7V. 

Colocando una resistencia al circuito estaremos disminuyendo la tensión. A diferencia de la tensión, la intensidad se mantiene constante durante el circuito con un valor de 20mA (que es la intensidad que ofrecen los pines de Arduino).


```
V = 1,7V
I = 20mA

V = I x R ; R = V / I

R = 1,7V / 0,02A = 85Ω 
```

Redondeamos el resultado obtenido a un valor de resistencia conocido (siempre por encima de su resistencia ideal), obtenemos un valor de 100Ω (marrón-negro-marrón).

Por otro lado, el potenciómetro a utilizar abarca una resistencia de 0Ω a 10KΩ y lo utilizaremos para regular la luz de los diodos Led.

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
 * Regulador de luz blanca
 * 
 * En esta práctica se va a regular un conjunto de diodos led de color
 * blanco utilizando un potenciómetro.
 * 
 * @author Miguel Ángel Abellán
 * @company Programo Ergo Sum
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0
 */

// Definimos las variables de tipo entero
int pinPotenciometro = 0;
int ledPin1 = 9;
int ledPin2 = 6;
int ledPin3 = 5;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos los pines en modo salida
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  // Inicializamos los pines a un valor BAJO
  analogWrite(ledPin1, 0);
  analogWrite(ledPin2, 0);
  analogWrite(ledPin3, 0);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  int valor = analogRead(pinPotenciometro);
  valor = map(valor, 0, 1023, 0, 255);
  analogWrite(ledPin1, valor);
  analogWrite(ledPin2, valor);
  analogWrite(ledPin3, valor);
  delay(15);
}
```



---



<img src="http://i.creativecommons.org/l/by-sa/4.0/88x31.png" /><br>
Esta obra está bajo una licencia de [Creative Commons Reconocimiento-CompartirIgual 4.0 Internacional](https://creativecommons.org/licenses/by-sa/4.0/deed.es_ES).