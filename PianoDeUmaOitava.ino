int but1 = 2;
int but2 = 3;
int but3 = 4;
int but4 = 5;
int but5 = 6;
int but6 = 7;
int but7 = 8;
int but8 = 9;

int buzzer = 13;

void setup()
{
  //declare the button pins as input
  pinMode(but1,INPUT);
  pinMode(but2,INPUT);
  pinMode(but3,INPUT);
  pinMode(but4,INPUT);
  pinMode(but5,INPUT);
  pinMode(but6,INPUT);
  pinMode(but7,INPUT);
  pinMode(but8,INPUT);
  //declare buzzer pin as output
  pinMode(buzzer,OUTPUT);
  
}

void loop()
{
  // read the value from buttons
  int b1 = digitalRead(but1);
  int b2 = digitalRead(but2);
  int b3 = digitalRead(but3);
  int b4 = digitalRead(but4);
  int b5 = digitalRead(but5);
  int b6 = digitalRead(but6);
  int b7 = digitalRead(but7);
  int b8 = digitalRead(but8);
  
  if( b1 == 1 ){
     tone(buzzer,262,100); // Nota Dó 262Hz
  }
    if( b2 == 1 ){
     tone(buzzer,294,100); // Nota Ré 294Hz
  }
    if( b3 == 1 ){
     tone(buzzer,330,100); // Nota Mi 330Hz
  }
    if( b4 == 1 ){
     tone(buzzer,350,100); // Nota Fá 350Hz
  }
    if( b5 == 1 ){
     tone(buzzer,392,100); // Nota Sol 392Hz
  }
    if( b6 == 1 ){
     tone(buzzer,440,100);
  }
    if( b7 == 1 ){
     tone(buzzer,494,100);
  }
    if( b8 == 1 ){
     tone(buzzer,528,100);
  }
  
// now let's put a short delay for a nice pitch
  delay(10);
}