// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

