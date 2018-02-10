# Materiales

Para el desarrollo de las prácticas de este libro vas a necesitar los siguientes componentes de electrónica:

- [Arduino UNO](#arduino-uno)
- [Protoboard](#protoboard)
- [Latiguillos](#latiguillos)
- [Resistencia](#resistencia)
- [Diodo](#diodo)
- [Diodo LED](#diodo-led)
- [Diodo LED RGB](#diodo-led-rgb)
- [Zumbador](#zumbador)
- [Servomotores](#servomotores)
- [Motor de CC](#motor-de-cc)
- [Motor paso a paso](#motor-paso-a-paso)
- [Pulsadores](#pulsadores)
- [Potenciómetros](#potenciometros)
- [Sensor de luz LDR](#ldr)
- [Sensores de temperatura LM35](#sensores-de-temperatura-lm35)
- [Sensor ultrasonidos HC-SR04](#sensor-ultrasonidos-hc-sr04)



---


<br><br>


## Arduino UNO

**Arduino** es una plataforma para prototipado de electrónica basada en hardware y software libre, es decir, podemos construir circuitos eléctricos y programarlos.

![Arduino UNO](assets/arduino-uno.png)

#### *Características*

| Arduino UNO Rev3          |           |
| ------------------------- | --------- |
| Microprocesador           | ATmega328 |
| Tensión operativa         | 5V        |
| Tensión de alimentación   | 7-12V     |
| Entradas digitales        | 14        |
| Salidas digitales         | 14        |
| Entradas analógicas       | 6         |
| Memoria flash             | 32Kb      |
| SRAM                      | 2Kb       |
| EEPROM                    | 1Kb       |
| Velocidad del reloj       | 16MHz     |
| Máxima VC para entradas   | 40mA      |
| Máxima VC para pines 3.3V | 50mA      |



<br />
<hr>
<br />



## Protoboard

Una **protoboard** es una placa para prototipar circuitos eléctricos conectandos en sus orificios sin necesidad de soldar los componentes.

![Protoboard](assets/protoboard.png)

#### *Características*

| Protoboard  |                 |
| ----------- | --------------- |
| Serigrafías | Sí, polarizadas |



<br />
<hr>
<br />



## Latiguillos

Los **latiguillos** son utilizados para conectar entre si los diferentes componentes electrónicos.

![Latiguillos](assets/latiguillos.png)

#### *Características*

| Latiguillos |                           |
| ----------- | ------------------------- |
| Longitud    | 20cm                      |



<br />
<hr>
<br />



## Resistencia

Las **resistencias** son un componente eléctrico que se oponen el paso de la corriente en un circuito. 
- 100O (marrón-negro-marrón)
- 220O (rojo-rojo-marrón)
- 330O (naranja-naranja-marrón)
- 1KO (marrón-negro-rojo)
- 4,7KO (amarillo-morado-rojo)
- 10KO (marrón-negro-naranja)

![Resistencia](assets/resistencia.png)

#### *Características*

| Resistencia                      |      |
| -------------------------------- | ---- |
| Polarizado                       | No   |
| Potencia de disipación           | 0,5W |
| Precisión                        | 5%   |



<br />
<hr>
<br />



## Diodo

Un **diodo** es un componente eléctrico que permite el paso de la corriente en un solo sentido, desde el polo positivo (ánodo) al polo negativo (cátodo).

![Diodo](assets/diodo.png)

#### *Características*

| Diodo 1N4007                     |       |
| -------------------------------- | ----- |
| Polarizado                       | Sí    |
| Tensión en polarización directa  | 1,1V  |
| Tensión en polarización inversa  | 1000V |



<br />
<hr>
<br />



## Diodo LED

Un **diodo Led** es un componente eléctrico que emite luz al paso de corriente eléctrica sobre él, desde el polo positivo (ánodo) al polo negativo (cátodo).

![Diodo LED](assets/diodo-led.png)

#### *Características*

| Diodos Led de colores            |        |
| -------------------------------- | ------ |
| Polarizado                       | Sí     |
| Diámetro                         | 5mm    |
| Intensidad de Corriente          | 20mA   |
| Tensión Led (verde, ámbar, rojo) | 2,1V   |
| Tensión Led blanco               | 3,3V   |



<br />
<hr>
<br />



## Diodo LED RGB

Un **diodo LED RGB** es un componente eléctrico que emite luz al paso de corriente eléctrica sobre él. Dependiendo de la tensión en sus diferentes patillas se pueden formar más de 10 millones de colores.

![Diodo LED RGB](assets/diodo-led-rgb.png)

#### *Características*

| Diodo Led RGB (ánodo común)      |          |
| -------------------------------- | -------- |
| Polarizado                       | Positivo |
| Diámetro                         | 5mm      |
| Itensidad de Corriente           | 20mA     |
| Tensión en Led (rojo)            | 2,1V     |
| Tensión en Led (verde)           | 3,3V     |
| Tensión en Led (azul)            | 3,3V     |

| Diodo Led RGB (cátodo común)     |          |
| -------------------------------- | -------- |
| Polarizado                       | Negativo |
| Diámetro                         | 5mm      |
| Itensidad de Corriente           | 20mA     |
| Tensión en Led (rojo)            | 2,1V     |
| Tensión en Led (verde)           | 3,3V     |
| Tensión en Led (azul)            | 3,3V     |



<br />
<hr>
<br />



## Zumbador

Un **zumbador** es un componente eléctrico que emite una frecuencia de sonidos al paso de la corriente eléctrica sobre él desde el polo positivo (ánodo) al polo negativo (cátodo).

![Zumbador](assets/zumbador.png)

#### *Características*

| Zumbador piezo-eléctrico         |       |
| -------------------------------- | ----- |
| Polarizado                       | Sí    |
| Tensión de trabajo               | 3-12V |



<br />
<hr>
<br />



## Servomotor

Un **miniservo** es un componente eléctrico similar a un motor capaz de girar una determinada cantidad de grados, entre 0° y 180° en este caso.

![Servomotor](assets/servomotor.png)

#### *Características*

| Servomotor         |                  |
| ------------------ | ---------------- |
| Polarizado         | Sí               |
| Rotación           | 0° a 180°        |
| Torque estático    | 4,5V > 1,5Kg/cm  |



<br />
<hr>
<br />



## Motor de CC

El **motor** genera una velocidad de giro y dirección en el rotor del motor, dependiendo de la tensión y polarización del mismo.

![Motor de corriente continua](assets/motor-de-cc.png)

#### *Características*

| Motor de corriente continua        |                 |
| ---------------------------------- | --------------- |
| Polarizado                         | No              |
| Tensión máxima                     | 4,5V            |
| Potencia                           | 0,5W            |
| RPM                                | 9800rpm a 4,5V  |



<br />
<hr>
<br />



## Motor paso a paso

Un **motor paso a paso** es componente similar al motor de corriente continua con la peculiaridad de ser capaz de girar una determinada cantidad de pasos o grados dependiendo de sus entradas.

![Motor paso a paso](assets/motor-paso-a-paso.png)

#### *Características*

| Motor paso a paso  |                  |
| ------------------ | ---------------- |
| Polarizado         | Sí               |
| Tensión            | 5-12V            |



<br />
<hr>
<br />



## Pulsador

Con un **interruptor** podemos abrir o cerrar el circuito eléctrico accionando la palanca.

![Pulsador](asset/pulsador.png)

#### *Características*

| Pulsador                         |       |
| -------------------------------- | ----- |
| Polarizado                       | No    |



<br />
<hr>
<br />



## Potenciómetr

Un **potenciómetro** es una resistencia variable mecánica, es decir, podemos regular su valor manualmente.

![Potenciómetro](assets/potenciometro.png)

#### *Características*

| Potenciómetro 10K  |       |
| ------------------ | ----- |
| Polarizado         | Sí    |
| Resistencia mínima | 0O    |
| Resistencia máxima | 10KO  |
| Precisión          | 5%    |



<br />
<hr>
<br />



## Sensor de luz LDR

El **sensor LDR** es una resistencia sensible a la luz, es decir, cambia el valor de su resistencia según la cantidad de luz que incide sobre él.

![Sensor LDR](assets/sensor-ldr.png)

#### *Características*

| Sensor LDR                        |       |
| --------------------------------- | ----- |
| Polarizado                        | No    |
| Resistencia mínima (con luz)      | 100O  |
| Resistencia máxima (sin luz)      | 1MO   |



<br />
<hr>
<br />



## Sensores de temperatura LM35

El **sensor de temperatura LM35** proporciona una salida de voltaje proporcional a la temperatura.

![Sensor de temperatura LM35](assets/sensor-lm35.png)

#### *Características*

| Sensor de temperatura LM35    |               |
| ----------------------------- | ------------- |
| Polarizado                    | Si            |
| Señal de salida               | Analógica     |
| Tensión                       | 3V a 5V       |
| Rango de medición             | -55° a 150°C  |
| Precisión                     | ±0,5°C        |



<br />
<hr>
<br />



## Sensor ultrasonidos HC-SR04

El **sensor de proximidad HC-SR04** es un sensor ultrasónico capaz de medir distancias pequeñas hasta un obstáculo.

![Sensor de proximidad](assets/sensor-hc-sr04.png)

#### *Características*

| Sensor de proximidad HC-SR04  |           |
| ----------------------------- | --------- |
| Polarizado                    | Si        |
| Señal de salida               | Digital   |
| Tensión                       | 5V        |
| Rango de medición             | 2cm a 4m  |