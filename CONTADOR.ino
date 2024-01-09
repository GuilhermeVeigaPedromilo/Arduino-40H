// C++ code
//
void setup()
{
  pinMode(13, OUTPUT); // a
  pinMode(12, OUTPUT); // b
  pinMode(11, OUTPUT); // c
  pinMode(9, OUTPUT); // d
  pinMode(8, OUTPUT); // e
  pinMode(7, OUTPUT); // f
  pinMode(6, OUTPUT); // g
}

void estado0()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
}

void estado1()   
{
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
}

void estado2()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
}

void estado3()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
}

void estado4()
{
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
}

void estado5()
{
  digitalWrite(13, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
}

void estado6()
{
  digitalWrite(13, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(12, LOW);
}

void estado7()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
}

void estado8()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
}

void estado9()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
}

void loop()
{
  estado0();
  delay(1000);
  estado1();
  delay(1000);
  estado2();
  delay(1000);
  estado3();
  delay(1000);
  estado4();
  delay(1000);
  estado5();
  delay(1000);
  estado6();
  delay(1000);
  estado7();
  delay(1000);
  estado8();
  delay(1000);
  estado9();
  delay(1000);
}