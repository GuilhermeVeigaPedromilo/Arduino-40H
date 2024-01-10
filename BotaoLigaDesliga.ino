#define  BL A3

#define BD A1

//Saídas
#define VH 2
#define VD 3

//Variável 
bool x;


void setup() {
  // put your setup code here, to run once:
  pinMode(VH, OUTPUT);
  pinMode(VD, OUTPUT);
}

void loop() {
// put your main code here, to run repeatedly:
  if(digitalRead(BL)==HIGH)
  x=1;
  if(x==1)
  {digitalWrite(VH, HIGH);
  digitalWrite(VD, LOW);
  }
  if(digitalRead(BD)==HIGH)
  x=0;
  if(x==0)
  {digitalWrite(VH, LOW);
  digitalWrite(VD, HIGH);}
}