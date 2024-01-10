// C++ code
//

# define VM 13
# define VM1 8
# define AM 12
#define AM1 6
# define VD 11
# define VD1 5


void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
}


void estado1()
{
  digitalWrite(VM, HIGH);
  digitalWrite(VD1, HIGH);
  digitalWrite(VM1, LOW);
  digitalWrite(AM, LOW);
  digitalWrite(AM1, LOW);
  digitalWrite(VD, LOW);
  delay(8000);
}

void estado2()
{
  digitalWrite(VM, HIGH);
  digitalWrite(VD1, LOW);
  digitalWrite(VM1, LOW);
  digitalWrite(AM, LOW);
  digitalWrite(AM1, HIGH);
  digitalWrite(VD, LOW);
  delay(3000);
}

void estado3()
{
  digitalWrite(VM, LOW);
  digitalWrite(VD1, LOW);
  digitalWrite(VM1, HIGH);
  digitalWrite(AM, LOW);
  digitalWrite(AM1, LOW);
  digitalWrite(VD, HIGH);
  delay(8000);
}

void estado4()
{
  digitalWrite(VM, LOW);
  digitalWrite(VD1, LOW);
  digitalWrite(VM1, HIGH);
  digitalWrite(AM, HIGH);
  digitalWrite(AM1, LOW);
  digitalWrite(VD, LOW);
  delay(3000);
}

void loop()
{
 estado1();
 estado2();
 estado3();
 estado4();
}