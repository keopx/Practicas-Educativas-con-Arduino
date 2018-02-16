# Software de Arduino > mBlock

Para programar una tarjeta de Arduino, podemos utilizar el lenguaje de programación por bloques de mBlock.

- [¿Qué es mBlock?](#mblock)
- [Instalar mBlock](#instalar-mblock)
- Programación en mBlock
    - [Estructura de control](#estructura-de-control)
    - [Salidas digitales](#salidas-digitales)
    - [Salidas analógicas](#salidas-analógicas)
    - [Entradas digitales](#entradas-digitales)
    - [Entradas analógicas](#entradas-analógicas)

---


<br><br>


## mBlock

mBlock es un entorno gráfico de programación basado en Scratch 2.0 y desarrollado por la empresa MakeBlock, para programar placas de prototipado basadas en Arduino, entre otros. Scratch está pensado para programar videojuegos mientras que mBlock está pensado para programar robots.

Está basado en el lenguaje de programación por bloques y sus instrucciones han sido diseñadas con un lenguaje natural, eliminando términos técnicos y empleando una terminología más natural. Así se facilita el acceso a la programación en niveles educativos básicos.

![mblock](assets/mblock.png)


<br />
<hr>
<br />


## Instalar mBlock
 
Independientemente del sistema operativo que utilicemos, desde la [web del proyecto](https://www.makeblock.es/soporte/mblock/) está disponible para Windows, Linux y Mac, siendo la instalación similar.

Para instalar mBlock en nuestro equipo debemos seguir los siguientes pasos:

1. Conectar el puerto USB
2. Elegir placa
3. Elegir extensión
4. Actualizar firmware
5. Programar y depurar el código
6. Subir el programa a Arduino


<br />
<hr>
<br />


## Estructura de control

Si todavía no conoces el lenguaje de programación por bloques de Scratch, accede a los [tutoriales para aprender a programar con Scratch](https://www.programoergosum.com/cursos-online/scratch) antes de realizar las siguientes prácticas.

![Estructura de control](assets/estructura-control-mblock.png) 


<br />
<hr>
<br />



## Salidas digitales

El primer bloque activa el pin digital número 13 de la placa de arduino a un valor alto, con lo cual si conectamos un LED  correctamente se encenderá. Por otro lado, con el segundo bloque ocurre justamente lo contrario.

Los pines para las salidas digitales corresponden a los pines desde el 0 hasta el 13 y toman los valores ALTO o BAJO.

![Salidas digitales](assets/salidas-digitales-mblock.png) 



<br />
<hr>
<br />



## Salidas analógicas

El primer bloque activa el pin analógico PWM número 5 de la placa de arduino a un valor de 0, con lo cual si conectamos un LED correctamente se apagará. Por otro lado, si cambiamos el valor por 150 observaremos que el LED se ilumina con una intensidad media.

También disponemos de un bloque encargado de hacer girar un servomotor entre 0º y 180º y otro bloque para reproducir frecuencias en el zumbador.

Los pines para las salidas analógicas PWM corresponden a los pines 11, 10, 9, 6, 5 y 3 y pueden tomar valores comprendidos entre 0 y 255, o entre 0 y 180 para el caso de los servomotores.

![Salidas analógicas](assets/salidas-analogicas-mblock.png)



<br />
<hr>
<br />



## Entradas digitales

El primer bloque recibe el valor del pin digital 9 de la placa de arduino. Por otro lado, el segundo bloque es utilizado en los sensores de ultrasonidos, y devuelve la distancia en centímetros del objeto más cercano al sensor (como se explica en la siguiente lección).

Los pines para las entradas digitales corresponden a los pines desde el 0 hasta el 13 y toman los valores ALTO o BAJO.

![Entradas digitales](assets/entradas-digitales-mblock.png)



<br />
<hr>
<br />



## Entradas analógicas

El primer bloque recibe el valor del pin digital 9 de la placa de arduino. Por otro lado, el segundo bloque es utilizado en los sensores de ultrasonidos, y devuelve la distancia en centímetros del objeto más cercano al sensor (como se explica en la siguiente lección).

Los pines para las entradas digitales corresponden a los pines desde el 0 hasta el 13 y toman los valores ALTO o BAJO.

![Entradas analógicas](assets/entradas-analogicas-mblock.png)