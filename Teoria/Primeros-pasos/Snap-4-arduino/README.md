# Snap 4 Arduino

Snap 4 Arduino **(S4A)** es una modificación del software libre de Snap que nos permite crear programas para Arduino, pero tenemos que tener en cuenta que los proyectos siempre serán dependientes de la conexión con S4A, es decir, debemos tener S4A ejecutándose en nuestro equipo al mismo tiempo.

Está basado en el lenguaje de programación por bloques y sus instrucciones han sido diseñadas con un lenguaje natural, eliminando términos técnicos y empleando una terminología más natural. Así se facilita el acceso a la programación en niveles educativos básicos.

![Snap 4 Arduino](assets/snap-4-arduino.png)


<br />


## Instalar Snap 4 Arduino
 
Independientemente del sistema operativo que utilicemos, desde la [web del proyecto](http://snap4arduino.rocks/) está disponible para Windows, Linux y Mac, siendo la instalación similar.

Para instalar S4A en nuestro equipo debemos seguir los siguientes pasos:

1. Tener instalado Arduino IDE en primer lugar (véase sección).
2. Cargar un pequeño programa o [firmware](#cargar-el-firmware) en la placa de Arduino.
3. Instalar S4A desde la web [snap4arduino](http://snap4arduino.rocks/) siguiendo los pasos de instalación. 


<br />


## Cargar el Firmware

Para que S4A reconozca y se comunique con la tarjeta de Arduino, debemos cargar un firmware o controlador en la misma. Para ello debemos seguir los siguientes pasos:

1. Abrir el archivo 'File → Examples → Firmata → StandardFirmata' con Arduino IDE.
2. Cargar el firmware en la placa de Arduino habiendo comprobado previamente que la placa de Arduino ha sido detectada por nuestro equipo y funciona correctamente.
3. Probar que detecta correctamente nuestra placa en S4A.






---

<img src="http://i.creativecommons.org/l/by-sa/4.0/88x31.png" /><br>
Esta obra está bajo una licencia de [Creative Commons Reconocimiento-CompartirIgual 4.0 Internacional](https://creativecommons.org/licenses/by-sa/4.0/deed.es_ES).