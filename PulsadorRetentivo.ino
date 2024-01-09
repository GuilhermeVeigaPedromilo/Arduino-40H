// C++ code
//

# define LED 13 // Pino com nome LED
bool x=0; // Variável Booleana 0 ou 1

void setup()
{
  pinMode(7, INPUT);
  pinMode(13, OUTPUT);
}


    
void loop()
{
  if(digitalRead(7)==LOW && x==0)
  {digitalWrite(LED, HIGH);
  delay(1000);
  x=1;}
  if(digitalRead(7)==LOW && x==1)
  {digitalWrite(LED, LOW);
  delay(1000);
  x=0;
  }
}
