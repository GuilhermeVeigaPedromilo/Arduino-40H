// C++ code
//

# define LED 13 // Pino com nome LED (LED Verde)
# define LED1 12 // Pino com nome LED (LED Vermelha)

bool x=0; // Variável Booleana 0 ou 1
bool FLAG;

void setup()
{
  pinMode(7, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  if(digitalRead(7)==LOW && x==0)
  FLAG=1;
  if(FLAG==1)
  {digitalWrite(LED, HIGH);
  digitalWrite(LED1, LOW);
  delay(1000);
  digitalWrite(LED, LOW);
  digitalWrite(LED1, HIGH);
  delay(1000);
  x=1;}
  if(digitalRead(7)==LOW && x==1)
  FLAG=0;
  if(FLAG==0)
  {digitalWrite(LED, LOW);
  digitalWrite(LED1, LOW);
  delay(1000);
  x=0;
  }
}
