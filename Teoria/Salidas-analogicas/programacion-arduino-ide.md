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


Función analogWrite()

La función analogWrite(), utilizada normalmente en la función loop(), sirve para escribir un valor a un pin PWM. Los valores posibles están comprendidos entre 0 y 255. Recuerda que en arduino disponemos de los pines 11, 10, 9, 6, 5, 3 para utilizar como salidas PWM.

```
// Establece en "pin" el valor 150
analogWrite(pin, 150);

// Ejemplo: Activar el pin digital 11 con valor 255
analogWrite(11, 255);
```


<br>


Función random()

La función random() sirve para elegir un valor aleatorio entre dos valores dados.

```
// Elige un valor entre un mínimo y un máximo
random(mínimo, máximo);

// Ejemplo: Elige un valor entre 0 y 255
random(0, 255);
```


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