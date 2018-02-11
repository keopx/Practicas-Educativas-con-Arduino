# Salidas digitales

En este capítulo aprenderás a programar diferentes prácticas utilizando las entradas digitales de la placa de arduino. Para cada una se explica la parte de electrónica que deberás conocer antes de programarlas. Observarás además que puedes programarlas utilizando los lenguajes de programación por bloques o textual de Arduino.


---


<br><br>


## Entradas analógicas

Una señal digital es aquella que sólo puede tomar ciertos valores (alto o bajo). Su forma característica es conocida como señal de onda cuadrada y las representaciones se realizan en el dominio del tiempo. La función principal de las salidas digitales es entregar una señal de control que le dará funcionalidad a un circuito electrónico que será el encargado de cumplir con las funciones que el usuario requiera.

![Señal digital](assets/senal-digital.png)

<br>

Las entradas digitales permiten recibir señales de voltaje. En arduino disponemos de 14 pines digitales serigrafiados con los números del 0 al 13, utilizados para entradas y salidas digitales.

La salida digital toma los valores 0V (bajo) ó 5V (alto).

![Entradas digitales en Arduino](assets/entradas-digitales.png)

Es importante recordar que no podemos sobrepasar los límites de voltaje permitidos, es decir, si se aplica un voltaje mayor a 5 voltios en una entrada digital, la placa de arduino se quemará. Lo mismo aplica para voltajes negativos, por lo que debemos asegurar que el voltaje aplicado a una entrada digital se encuentre entre 0 y 5 voltios.



<br />
<hr>
<br />



## Prácticas

* [Encendido nocturno](/Practicas/Encendido-nocturno/README.md)
* [Led RGB crepuscular](/Practicas/Led-RGB-crepuscular/README.md)
* [Regulador de luz](/Practicas/Regulador-de-luz/README.md)
* [Servomotor manual](/Practicas/Servomotor-manual/README.md)