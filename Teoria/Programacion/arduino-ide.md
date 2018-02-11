# Programación > Arduino IDE

Para programar una tarjeta de Arduino, podemos utilizar el lenguaje de programación textual de Arduino IDE.

- [Estructura de control](#estructura-de-control)
- [Funciones básicas](#funciones-basicas)
- [Salidas digitales](#salidas-digitales)
- [Salidas analógicas](#salidas-analogicas)
- [Entradas digitales](#entradas-digitales)
- [Entradas analógicas](#entradas-analogicas)


---


<br><br>


## Estructura de control

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
<br><br>



## Funciones básicas

Función pinMode()

La función pinMode(), utilizada en la función setup(), sirve para configurar el modo de trabajo de un pin pudiendo ser INPUT (entrada) u OUTPUT (salida).

```
// Configura "pin" como salida
pinMode(pin, OUTPUT);

// Ejemplo: Activar el pin digital 13 como salida
pinMode(13, OUTPUT);
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

<br>

Función delayMicroseconds()

La función delayMicroseconds() sirve para detener el flujo del programa durante una cantidad de tiempo. Dicha cantidad de tiempo está representada en milisegundos.

```
// Espera una determinada cantidad de microsegundos
delayMicroseconds(microsegundos);

// Ejemplo: Esperar 10 microsegundos
delayMicroseconds(10);
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
---
<br><br>



## Salidas digitales

Función digitalWrite()

La función digitalWrite(), utilizada normalmente en la función loop(), sirve para escribir un valor (o poner en un estado) un pin digital. Los valores o estados posibles son HIGH (alto) o LOW (bajo).

```
// Establece en "pin" como valor alto
digitalWrite(pin, HIGH);

// Ejemplo: Activar el pin digital 13 como valor alto
digitalWrite(13, HIGH);
```



<br><br>
---
<br><br>



## Salidas analógicas

Función analogWrite()

La función analogWrite(), utilizada normalmente en la función loop(), sirve para escribir un valor a un pin PWM. Los valores posibles están comprendidos entre 0 y 255. Recuerda que en arduino disponemos de los pines 11, 10, 9, 6, 5, 3 para utilizar como salidas PWM.

```
// Establece en "pin" el valor 150
analogWrite(pin, 150);

// Ejemplo: Activar el pin digital 11 con valor 255
analogWrite(11, 255);
```



<br><br>
---
<br><br>



## Entradas digitales

Función digitalRead()

La función digitalRead(), utilizada normalmente en la función loop(), sirve para leer un valor (o poner en un estado) un pin digital. Los valores o estados posibles son HIGH (alto) o LOW (bajo). El valor leído puede ser almacenado en una variable o comprobarse dinamicamente en una condición.

```
// Lee en "pin"
digitalRead(pin);

// Ejemplo: Leer el pin digital 2
digitalRead(2);
```

<br>

Función pulseIn()

La función pulseIn() sirve para detectar el cambio de estado en una señal por ultrasonidos, es decir, si se configura el pin echo del sensor de ultrasonidos a un valor alto (HIGH), devolverá el tiempo transcurrido entre el cambio de estado a ese valor. Previamente habrá que establecer el pin del triger en el sensor ultrasonidos a un valor bajo (LOW). De esta forma, sabiendo el tiempo transcurrido se puede calcular una distancia.

```
// Obtener el tiempo transcurrido hasta el valor alto
digitalWrite(trigger, LOW);
pulseIn(echo, HIGH);

// Ejemplo: Tiempo transcurrido entre el cambio de estados
digitalWrite(13, LOW);
pulseIn(12, HIGH);
```



<br><br>
---
<br><br>



## Entradas analógicas

Función analogRead()

La función analogRead(), utilizada normalmente en la función loop(), sirve para leer un valor un pin de entrada analógico. Los valores están comprendidos entre 0 y 1023. El valor leído puede ser almacenado en una variable o comprobarse dinámicamente en una condición.

```
// Lee en "pin"
analogRead(pin);

// Ejemplo: Leer el pin analógico 0
analogRead(0);
```

<br>

Función map()

La función map() sirve para mapear de forma sencilla convirtiendo un rango de valores en otro rango.

```
// Estrapolar un rango de valores en otro
map(valor, rango_final(inicio, fin), rango_inicial(inicio, fin));

// Ejemplo: Estrapolar la salida de un servo tomando el dato de la entrada analógica
map(valor, 0, 1023, 0, 255);
```