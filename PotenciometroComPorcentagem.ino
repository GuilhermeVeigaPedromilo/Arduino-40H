//Entradas Analógicas - Potenciometro e Porcentagem 

#define Led1 2 
#define Led2 3
#define Led3 4
#define Led4 5
#define Led5 6

//Variáveis
int Valor;
int Nivel;
 

void setup() 
{
  Serial.begin(9600);
  pinMode (Led1, OUTPUT);
  pinMode (Led2, OUTPUT);
  pinMode (Led3, OUTPUT);
  pinMode (Led4, OUTPUT);
  pinMode (Led5, OUTPUT);
}

void Porcentagem() 
{
  Valor = analogRead(A1);
  Nivel = Valor*0.0977517106549365;
  Serial.print(Valor);
  Serial.print(" = ");
  Serial.print(Nivel);
  Serial.println("%");
  delay (1000);
}

void Controle20 ()
{
    digitalWrite (Led1, HIGH);
    digitalWrite (Led2, LOW);
    digitalWrite (Led3, LOW);
    digitalWrite (Led4, LOW);
    digitalWrite (Led5, LOW);

}

void Controle40 ()
{
    digitalWrite (Led1, HIGH);
    digitalWrite (Led2, HIGH);
    digitalWrite (Led3, LOW);
    digitalWrite (Led4, LOW);
    digitalWrite (Led5, LOW); 
}

void Controle60 ()
{
    digitalWrite (Led1, HIGH);
    digitalWrite (Led2, HIGH);
    digitalWrite (Led3, HIGH);
    digitalWrite (Led4, LOW);
    digitalWrite (Led5, LOW);  
}

void Controle80 ()
{
    digitalWrite (Led1, HIGH);
    digitalWrite (Led2, HIGH);
    digitalWrite (Led3, HIGH);
    digitalWrite (Led4, HIGH);
    digitalWrite (Led5, LOW);    
}

void Controle90 ()
{
    digitalWrite (Led1, HIGH);
    digitalWrite (Led2, HIGH);
    digitalWrite (Led3, HIGH);
    digitalWrite (Led4, HIGH);
    digitalWrite (Led5, HIGH); 
}

void Controlemenos ()
{ 
     digitalWrite (Led1, LOW);
     digitalWrite (Led2, LOW);
     digitalWrite (Led3, LOW);
     digitalWrite (Led4, LOW);
     digitalWrite (Led5, LOW);    
}


void loop ()
{
  Porcentagem();
  
  if (Nivel >= 20)
     Controle20 ();

  if (Nivel >=40)
  {
     Controle20 ();
     Controle40 ();
  }
      
  if (Nivel >=60)
  {
     Controle20 ();
     Controle40 ();
     Controle60 ();
  } 

  if (Nivel >=80)
  {
     Controle20 ();
     Controle40 ();
     Controle60 ();
     Controle80 ();
  } 

  if (Nivel >=90)
  {
     Controle20 ();
     Controle40 ();
     Controle60 ();
     Controle80 ();
     Controle90 ();  
  }  

  if (Nivel <20)
     Controlemenos ();
}