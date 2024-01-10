int valor=0;
float tensao;

void setup(){
 Serial.begin(9600);
  pinMode(A1, INPUT);
}

void loop(){
  valor=analogRead(A1);
  tensao=float(valor)*5/1024;
  Serial.print("Tensão ");
  Serial.print(tensao);
  Serial.print("  V ");
  Serial.println(valor);
  delay(1000);
}