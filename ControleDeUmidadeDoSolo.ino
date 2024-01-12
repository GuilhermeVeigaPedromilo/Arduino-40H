
#include <Adafruit_LiquidCrystal.h>  //inclue biblioteca
Adafruit_LiquidCrystal lcd_1(0);
#include <Servo.h> //inclui biblioteca do servo
Servo servo1; //cria objeto chamado servo
int valor;
int posicao;
float nivel;
void setup() {
  Serial.begin(9600);
   servo1.attach(6);
  
  lcd_1.begin(16,2);
  lcd_1.setCursor(0,0);
  lcd_1.print(" CONTROLE SOLO ");
 
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(A1,OUTPUT);
  
  }
void NIVEL00()
{ 
 
  digitalWrite(13,LOW);
 digitalWrite(12,LOW);
 digitalWrite(11,LOW);
 digitalWrite(10,LOW);
 digitalWrite(9,LOW);
 digitalWrite(8,LOW);
  for (posicao=0; posicao<=0; posicao+=1);
  servo1.write(posicao);

 
}
void NIVEL01()
{
  digitalWrite(13,HIGH);
 digitalWrite(12,LOW);
 digitalWrite(11,LOW);
 digitalWrite(10,LOW);
 digitalWrite(9,LOW);
 digitalWrite(8,LOW);
 for (posicao=0; posicao<=30; posicao+=1);
  servo1.write(posicao);

 
 
}
void NIVEL02()
{
  digitalWrite(13,HIGH);
 digitalWrite(12,HIGH);
 digitalWrite(11,LOW);
 digitalWrite(10,LOW);
 digitalWrite(9,LOW);
 digitalWrite(8,LOW);
 for (posicao=0; posicao<=60; posicao+=1);
  servo1.write(posicao);

 
}
void NIVEL03()
{
  digitalWrite(13,HIGH);
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(9,LOW);
 digitalWrite(8,LOW);
 for (posicao=0; posicao<=90; posicao+=1);
  servo1.write(posicao);

 
 
}
void NIVEL04()
{
  digitalWrite(13,HIGH);
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(8,LOW);
 for (posicao=0; posicao<=120; posicao+=1);
  servo1.write(posicao);


 
}
void NIVEL05()
{
  digitalWrite(13,HIGH);
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(8,LOW);
 digitalWrite(7,LOW);
 for (posicao=0; posicao<=150; posicao+=1);
  servo1.write(posicao);

}
void NIVEL06()
{
  digitalWrite(13,HIGH);
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(8,HIGH);
  for (posicao=0; posicao<=180; posicao+=1);
  servo1.write(posicao);


 
}

void loop() {
  int posicao; //declarado variável posição tipo inteiro
  
  valor = analogRead(A0);
  nivel = valor*0.1141510812390415;
    Serial.print(" UMIDADE SOLO = ");
    Serial.print(nivel);
    Serial.println(" % ");
  delay(1000);
 

  lcd_1.setCursor(0,1);
  lcd_1.print("UMIDADE= ");
  lcd_1.print(nivel);
  lcd_1.print(" % ");
  
if(nivel<=10)
NIVEL00();
if((nivel>10)&&(nivel<=25))
NIVEL01();
if((nivel>25)&&(nivel<=40))
NIVEL02();
if((nivel>40)&&(nivel<=55))
NIVEL03();
if((nivel>55)&&(nivel<=70))
NIVEL04();
if((nivel>70)&&(nivel<=85))
NIVEL05();
if((nivel>85)&&(nivel<=100))
NIVEL06();
}