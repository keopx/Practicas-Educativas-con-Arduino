# Cubo de LEDs 2x2x2

El objetivo de esta práctica es crear un cubo de LEDs de 2x2x2 utilizando 8 LEDs para simular diferentes efectos de luces con forma de ruleta.

![](practica.gif)

| Autor de la práctica |
| :---                 |
| ![](https://avatars0.githubusercontent.com/u/12022187?s=20)  [Miguel Ángel Abellán](https://github.com/migueabellan) |

---


<br><br>


## Materiales

- 1 Arduino
- 1 placa Protoboard
- 4 resistencias de 220Ω (rojo-rojo-marrón)
- 2 resistencias de 10KΩ (marrón-negro-naranja)
- 8 leds (4 rojos, 4 azules)
- 2 transistores NPN
- 7 conectores de colores


<br /><br />


## Esquema eléctrico

| Características Transistor BC548 |        |
| -------------------------------- | ------ |
| Polarizado                       | NPN    |


| Características LED              |        |
| -------------------------------- | ------ |
| Polarizado                       | Sí     |
| Intensidad de Corriente          | 20mA   |
| Tensión Led (verde, ámbar, rojo) | 2.1V   |
| Tensión Led blanco               | 3.3V   |

Cada nivel del cubo de LEDs se conecta a un transistor que activaremos en saturación y corte.

![](fritzing.png)


<br /><br />


## Programación en mBlock

Para programar los efectos de ciclo y parpadeo con mBlock vamos a necesitar crear 2 funciones a las cuales se le pasa por parámetro las diferentes opciones de activación de los niveles del cubo de LEDs. En la función ciclo se establece en primer lugar el nivel del cubo y a continuación se encienden y apagan los diferentes LEDs de dichos niveles. Por otro lado, en la función parpadeo se encienden y apagan todos los LEDs del nivel activado.

![](mblock.png)


<br /><br />


## Programación en Arduino

El primer paso será inicializar los pines a utilizar en nuestra placa de Arduino. En nuestro caso utilizamos los pines digitales 13 y 12 para activar o desactivar los niveles del cubo de LEDs; el 13 será utilizado para el primer nivel de color rojo y el 12 para el segundo nivel de color azul. Por otro lado, los pines 1, 2, 3 y 4 se utilizarán para los LEDs en sentido de las agujas del reloj.

A continuación programaremos el bucle principal de la programación encargado de establecer los valores las funciones que veremos a continuación, para realizar diferentes formas o figuras. En este caso se han creado las funciones ciclo() y parpadeo(). Observa como se le pasa por parámetro 2 valores, correspondientes al nivel del cubo de LEDs, es decir, la primera llamada a la función ciclo(1, 0), indica que solamente encenderá los LEDs de la posición activada con el valor lógico 1, los LEDs rojos en este caso.

```cpp+lineNumbers:true
/**
 * Cubo de LEDs 2x2x2
 */
 
void setup() {
	pinMode(1, OUTPUT);
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(12, OUTPUT);
	pinMode(13, OUTPUT);
}
 
void loop() {
	ciclo(1, 0);
	ciclo(0, 1);
	ciclo(1, 1);
	parpadeo(1, 0);
	parpadeo(0, 1);
	parpadeo(1, 1);
}

void ciclo(int rojo, int azul){
	digitalWrite(13, rojo);
	digitalWrite(12, azul);

	for(int i=1; i<=4; i++){
		digitalWrite(i, HIGH);
		delay(50);
		digitalWrite(i, LOW);
		delay(50);
	}
}

void parpadeo(int rojo, int azul){
	digitalWrite(13, rojo);
	digitalWrite(12, azul);

	for(int j=0; j<=4; j++){
		for(int i=1; i<=4; i++){
			digitalWrite(i, HIGH);
		}
		delay(50);
		for(int i=1; i<=4; i++){
			digitalWrite(i, LOW);
		}
		delay(50);
	}
}
```