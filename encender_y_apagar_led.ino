void setup() {
  pinMode(13, OUTPUT);//es una función que se utiliza para configurar 
                      //el comportamiento de un pin digital en la placa. 
                      //Es esencial para establecer si un pin se usará 
                      //como entrada o salida.
                      //Aqui se configura el pin 13 como salida
}

void loop() {
  digitalWrite(13, HIGH); //es una función que se utiliza 
                          //para establecer el estado de un pin digital
                          //Aqui se controla el pin 13 y 
                          //se establece en un estado alto HIGH
                          //(5V en la mayoria de las placas Arduino)
                          //que quieres asignar al pin:
  
  delay(1000); //es tambien otra función y se utiliza para pausar la ejecución 
               //del programa durante un período específico de tiempo.
               //El argumento que es el tiempo de espera y esta milisegundos. 
               //asi que aqui pausaremos el programa durante 1 segundo, 
               //entonces pasamos 1000 como argumento, 
               //ya que 1 segundo es igual a 1000 milisegundos.


  digitalWrite(13, LOW);//Establece el pin 13 en un estado bajo LOW (0V)
  delay(1000);
}
