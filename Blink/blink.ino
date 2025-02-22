/*Blink(Parpadear)
Enciende y apaga un LED cada segundo.
Este ejemplo muestra lo más simple 
que puedes hacer con un Arduino para ver la salida física: hacer parpadear el LED integrado.

Circuito
Este ejemplo utiliza el LED incorporado que tienen la mayoría de las placas Arduino. 
Este LED está conectado a un pin digital y su número puede variar de un tipo de placa a otro. 
Para hacerle la vida más fácil, tenemos una constante que se especifica en cada hoja de especificaciones. 
Esta constante es LED_BUILTIN y le permite controlar el LED incorporado fácilmente. 

Después de construir el circuito, conecte su placa Arduino a su computadora, 
inicie el software Arduino (IDE) e ingrese el código a continuación. También puedes cargarlo desde el menú 
Archivo/Examples/01.Basics/Blink. 
Lo primero que debe hacer es inicializar el pin LED_BUILTIN como pin de salida con la línea

*/

/*
  Blink

 Enciende un LED durante un segundo y luego lo apaga durante un segundo, repetidamente.

 La mayoría de los Arduinos tienen un LED integrado que puedes controlar. En   los modelos UNO, MEGA y CERO
  está conectado al pin digital 13, en MKR1000 en el pin 6. 
 LED_BUILTIN tiene asignado  el pin que va conectado al LED independientemente de qué placa se utilice.
  Si quieres saber a qué pin está conectado el LED integrado en tu Arduino
  modelo, consulta las Especificaciones Técnicas de tu tabla en:
  https://www.arduino.cc/en/Main/Products

  

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/



// La función de configuración se ejecuta una vez cuando presiona reset o se enciende la placa.
void setup() {
  // inicialice el pin digital LED_BUILTIN en modo salida (entregara 5V).
  pinMode(LED_BUILTIN, OUTPUT);
}

//la función de bucle se ejecuta una y otra vez para siempre
void loop() {
  //En el bucle principal, enciendes el LED con la línea
  digitalWrite(LED_BUILTIN, HIGH);// enciende el LED (ALTO es el nivel de voltaje)
  //Esto suministra 5 voltios al ánodo del LED. Eso crea una diferencia de voltaje entre los pines del LED y lo enciende. 
  delay(1000);// espera por un segundo (1s=1000ms)
  //le indican a la placa que no haga nada durante 1000 milisegundos, o un segundo (el LED permanece encendido durante 1s) 
  //Cuando usas el comando delay(), no sucede nada más durante ese período de tiempo. 
  digitalWrite(LED_BUILTIN, LOW);// apagua el LED haciendo que el voltaje sea BAJO
  //Eso lleva el pin LED_BUILTIN a 0 voltios y apaga el LED.
  delay(1000);// espera por un segundo
}