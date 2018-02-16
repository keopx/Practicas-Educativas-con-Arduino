# ¿Qué es la Ley de Ohm?

La Ley de Ohm establece que la diferencia de potencial V que aplicamos entre los extremos de un conductor determinado es proporcional a la intensidad de la corriente I que circula por el dicho conductor.

```
V = I x R
```

La fórmula anterior se conoce como fórmula general de la ley de Ohm. 
- V corresponde a la diferencia de potencial
- R corresponde a la resistencia
- I corresponde a la intensidad de la corriente. 

Las unidades de esas tres magnitudes en el sistema internacional de unidades son, voltios (V), ohmios (Ω) y amperios (A).


<br><br>


## ¿Para qué se usa la Ley de Ohm?

Para explicar un uso muy sencillo de la Ley de Ohm, pongamos un ejemplo. 

Supongamos que conectamos un diodo LED a una placa de arduino. ¿Hace falta conectar alguna resistencia al circuito? Sí, ya que no solo se romperá el LED sino que además se podría deteriorar los pines de arduino. En ese caso, ¿Qué resistencia le debemos poner al circuito?

Para calcular la resistencia del circuito, primero debemos conocer las características del LED que se explicaban en la sección anterior. Un LED típico de 5mm admite una tensión de 2.1V y una intensidad de corriente de 20mA para lucir de forma óptima. 

Las placas de Arduino UNO trabajan a 5V, con lo cual se deberá reducir la tensión en el LED, lo que se conoce como diferencia de potencial en el LED que será:

```
V = 5V - 2.1V = 2.9V
```

Por otro lado, sabemos que la intensidad de corriente es de 20mA. La corriente, a diferencia del voltaje, se conserva durante todo el recorrido del circuito (la corriente que entra es igual a la corriente que sale), por lo que por nuestra resistencia pasa la misma corriente que por el LED.

Sabiendo los datos anteriores y despejando la fórmula de la Ley de Ohm tenemos:

```
V = I x R ; R = V / I

R = 2.9V / 0.02A = 145Ω
```

145 Ohm es el valor de la resistencia que debemos poner en nuestro circuito. Si no nos sale un valor de resistencia que no tenemos intentaremos acercarnos lo máximo posible, siempre por encima del valor ideal.