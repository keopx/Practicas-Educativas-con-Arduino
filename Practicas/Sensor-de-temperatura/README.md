# Sensor de temperatura

El objetivo de esta práctica es encender los LEDs rojo, naranja o azul dependiendo de la temperatura ambiente, siendo el color azul inferior a 10 grados y el color rojo más de 25 grados.

![](practica.gif)

| Autor de la práctica |
| :---                 |
| ![](https://avatars0.githubusercontent.com/u/12022187?s=20)  [Miguel Ángel Abellán](https://github.com/migueabellan) |

---


<br><br>


## Materiales

- 1 Arduino UNO
- 1 Protoboard
- 7 Latiguillos
- 3 LEDs (rojo, naranja, azul)
- 1 Sensor de temperatura LM35
- 3 Resistencia de 220Ω (rojo-rojo-marrón)


<br /><br />


## Esquema eléctrico

| Sensor de temperatura LM35    |               |
| ----------------------------- | ------------- |
| Polarizado                    | Si            |
| Señal de salida               | Analógica     |
| Tensión                       | 3V a 5V       |
| Rango de medición             | -55° a 150°C  |
| Precisión                     | ±0,5°C        |

El sensor de temperatura se conectará a los terminales de 5V y GND siendo la patilla central el valor analógico que medirá la temperatura. En caso de conectar el sensor de temperatura al revés, observaremos que se calienta demasiado en cuestión de segundos.

Si queremos saber que voltaje tenemos en la entrada analógica solo debemos de multiplicar por 5/1024 (0.0048V de precisión). Esto nos da el voltaje de nuestro sensor, ahora hay que transformar los voltios en grados. Ya hemos averiguado, gracias a la ficha técnica, que 1ºC equivale a 10mV (0.01V) por lo tanto solo debemos dividir el valor de voltaje obtenido antes entre 0.01 y nos dará la temperatura.

```
Temperatura = (Valor * 5 / 1024) / 0.01 = Valor * 5 * 100 / 1024
```

![](fritzing.png)


<br /><br />


## Programación en mBlock

La programación consiste en detectar la temperatura siguiendo la conversión anterior y encender uno un otros LEDs dependiendo de la temperatura almacenada en la variable.

![](mblock.png)


<br /><br />


## Programación en Arduino

La programación consiste en detectar la temperatura siguiendo la conversión anterior y encender uno un otros LEDs dependiendo de la temperatura almacenada en la variable "temperatura"".

```cpp+lineNumbers:true
/**
 * Sensor de temperatura
 */

void setup() {
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
}

void loop() {
    
    float temperatura = analogRead(0);
    temperatura = ( temperatura * 5 * 100 ) / 1024;
    
    if (temperatura < 10 ) {
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, HIGH);
    } else if (temperatura > 10 && temperatura < 25) {
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(11, LOW);
    } else {
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
    }
}
```