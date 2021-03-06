/*
Projeto Arduino beep com buzzer.
Por Jota
----------------------------------------
--=<| www.ComoFazerAsCoisas.com.br |>=--
----------------------------------------
*/
 
//Constante que representa o pino onde o positivo 
//do buzzer será ligado.
const int buzzer = 46;
 
//Método setup, executado uma vez ao ligar o Arduino.
void setup() {
  //Definindo o pino buzzer como de saída.
  pinMode(buzzer,OUTPUT);
}
 
//Método loop, executado enquanto o Arduino estiver ligado.
void loop() {  
  //Ligando o buzzer com uma frequencia de 1500 hz.
  tone(buzzer,1500);   
  delay(500);
   
  //Desligando o buzzer.
  noTone(buzzer);
  delay(500);  
}
