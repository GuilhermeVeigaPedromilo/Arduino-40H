#include <Wire.h> // Biblioteca utilizada para fazer a comunicação com o I2C
#include <LiquidCrystal_I2C.h> // Biblioteca utilizada para fazer a comunicação com o display 20x4 

#define col 16 // Serve para definir o numero de colunas do display utilizado
#define lin  2 // Serve para definir o numero de linhas do display utilizado
#define ende  0x27 // Serve para definir o endereço do display.
LiquidCrystal_I2C lcd(ende,col,lin); // Chamada da funcação LiquidCrystal para ser usada com o I2C

#include <Servo.h> //inclui biblioteca do servo
Servo servo1; //cria objeto chamado servo
int valor;
int posicao;
float nivel;

void setup() {
  lcd.init(); // Serve para iniciar a comunicação com o display já conectado
  lcd.backlight(); // Serve para ligar a luz do display
  lcd.clear(); // Serve para limpar a tela do display

  Serial.begin(9600);
   servo1.attach(6);
  
  lcd.setCursor(0,0);
  lcd.print("CONTROLE DE SOLO");
 
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
  nivel = (valor / 1023.0)*100;
    Serial.print(" UMIDADE SOLO = ");
    Serial.print(nivel);
    Serial.println(" % ");
  delay(350);
 

  lcd.setCursor(0,1);
  lcd.print("UMIDADE= ");
  lcd.print(nivel);
  lcd.print(" % ");
  
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