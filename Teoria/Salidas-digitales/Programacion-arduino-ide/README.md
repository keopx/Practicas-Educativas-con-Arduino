# Programación en Arduino IDE

Para programar las siguientes prácticas utilizando el lenguaje de programación textual de Arduino IDE, deberás conocer las siguientes instrucciones de programación.


<br>


Función pinMode()

La función pinMode(), utilizada en la función setup(), sirve para configurar el modo de trabajo de un pin pudiendo ser INPUT (entrada) u OUTPUT (salida).

```
// Configura "pin" como salida
pinMode(pin, OUTPUT);

// Ejemplo: Activar el pin digital 13 como salida
pinMode(13, OUTPUT);
```


<br>


Función digitalWrite()

La función digitalWrite(), utilizada normalmente en la función loop(), sirve para escribir un valor (o poner en un estado) un pin digital. Los valores o estados posibles son HIGH (alto) o LOW (bajo).

```
// Establece en "pin" como valor alto
digitalWrite(pin, HIGH);

// Ejemplo: Activar el pin digital 13 como valor alto
digitalWrite(13, HIGH);
```


<br>


Función delay()

La función delay() sirve para detener el flujo del programa durante una cantidad de tiempo. Dicha cantidad de tiempo está representada en milisegundos.

```
// Espera una determinada cantidad de milisegundos
delay(milisegundos);

// Ejemplo: Esperar 1 segundo
delay(1000);
```


<br><br>


---


<br><br>


## Estructura de un programa en Arduino IDE

Todo programa para Arduino consta de 2 funciones; la función setup() y la función loop(). La función setup() es la primera función que se ejecuta en nuestro programa, ejecutándose sólo una vez, y se utiliza para configurar la comunicación con nuestro equipo, inicializar los pines de nuestra tarjeta de Arduino e inicialización de las variables.

```
// La función setup() es la primera función en ejecutarse, una sola vez
void setup(){
    Instrucción 1
    Instrucción 2
    ...
    Instrucción N
}
```
 

La función loop() se ejecuta repetidamente después de la función setup(). Dentro de la misma vamos a introducir el programa que queremos ejecutar dentro de la placa de Arduino.

```
// La función loop() se ejecuta repetidamente en modo bucle infinito
void loop(){
    Instrucción 1
    Instrucción 2
    ...
    Instrucción N
}
```

Es importante tener claras las siguientes reglas del lenguaje de programación:

* Toda línea termina en punto y coma ";" excepto las estructuras de control que se acompañan con llaves "{}".
* Las instrucciones y variables son sensibles a mayúsculas y minúsculas, es decir, debemos respetar el nombre exacto.
* Las instrucciones que comienzan por el símbolo de doble barra "//" se tomará como comentario para el programa. También se dispone de comentarios de múltiples líneas /* */.


<br><br>


---


<img src="http://i.creativecommons.org/l/by-sa/4.0/88x31.png" /><br>
Esta obra está bajo una licencia de [Creative Commons Reconocimiento-CompartirIgual 4.0 Internacional](https://creativecommons.org/licenses/by-sa/4.0/deed.es_ES).

2018 [Asociación Programo Ergo Sum](https://www.programoergosum.com)