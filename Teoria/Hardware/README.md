# Hardware de Arduino

La placa de Arduino dispone de un microcontrolador integrado programable capaz de realizar operaciones matemáticas complejas a gran velocidad. Normalmente el modo de alimentación de una placa de Arduino es mediante el puerto USB mientras se está programando, pero hay ocasiones en la que necesitamos que el código de nuestra placa se siga ejecutándose sin estar conectado al equipo. Probablemente la forma más habitual de alimentar Arduino (sin utilizar tu equipo) es mediante una fuente de alimentación o pila de 9V. 

Arduino dispone de un **regulador de voltaje interno** que actúa para que la tensión de alimentación no supere los 12V, ya que en caso contrario podemos dañar el regulador y con ello la placa de Arduino. Por otro lado, para tensiones inferiores a 7V en la alimentación, es probable que la placa no llegue a encenderse. La mayoría de los componentes electrónicos de Arduino utilizan una **tensión operativa de 5V** (ya regulada por el regulador de voltaje de la propia placa de Arduino).

Arduino contiene la siguiente distribución de pines:
- Disponemos de **14 pines digitales** que pueden ser configurados como entradas o salidas, de los cuales (serigrafiadas con el símbolo ~) pueden ser utilizados como señales digitales **PWM 6 pines**.
- Igualmente diponemos de **6 pines analógicos** serigrafiadas desde A0 hasta A5 para las entradas analógicas.
- También disponemos de **3 pines GND** para conectar a tierra nuestros circuitos.
- Y por último **2 pines de alimentación** de 5V y 3.3V respectivamente.

![Pines Arduino UNO](assets/pines-arduino-uno.png)