// C++ code
//

# define LEDG 13 // Pino com nome LEDG (Led Verde)
# define LEDR 12 // Pino com nome LEDR (Luz Vermelha)

bool x=0; // Variável Booleana 0 ou 1

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
  {digitalWrite(LEDG, HIGH);
  digitalWrite(LEDR, LOW);
  delay(1000);
  digitalWrite(LEDG, LOW);
  digitalWrite(LEDR, HIGH);
  x=1;}
  if(digitalRead(7)==LOW && x==1)
  {digitalWrite(LEDG, LOW);
  digitalWrite(LEDR, LOW);
  delay(1000);
  x=0;
  }
}
