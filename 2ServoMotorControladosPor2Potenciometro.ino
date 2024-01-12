#include <Servo.h>   //inclui biblioteca do servo
Servo servo1; //cria objeto chamado servo
Servo servo2;


void setup() 
{
  servo1.attach(9);//define pino do sinal para o servo
  servo2.attach(10);
}

void loop() 
{
  int posicao; //declarado variável posição tipo inteiro
  posicao= map (analogRead(A0),0,1023,0,179);
  servo1.write(posicao);
  delay(500);
 posicao= map (analogRead(A1),0,1023,0,179);
  servo2.write(posicao);
  delay(500);}