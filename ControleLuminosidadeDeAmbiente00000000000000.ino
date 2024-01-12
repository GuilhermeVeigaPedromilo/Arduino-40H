#include <Servo.h>

Servo motor;

// Valores Estaticos

// Valores Dinamicos
int luzInterna = 0;
int luzExterna = 0;
int angulo = 0;
long predef = 70;
int initial = 0;
long porcentLuz = 0;

void setup() {
    Serial.begin(9600); // DEBUG - SET SERIAL PARA IMPRIMIR VALOR
  
    motor.attach(13); 	// DEFINE MICRO SERVO
  	//pinMode(A1, INPUT); // DEFINE LDR COMO LEITURA
  	//pinMode(A0, INPUT); // DEFINE LDR COMO LEITURA
  	porcentLuz = ((predef*922)/90);
}

long calcAngulo(int x){
  return map(x, 26, 922, 0, 90);
}

int checkInterna(int Extena, int Interna){
  //Prints
  Serial.println((String)"E/I: "+Extena+"/"+Interna+" A:"+angulo+" %:"+predef+" pL:"+porcentLuz);
 
  if(Interna < porcentLuz){
    if(angulo < 90 && calcAngulo(Interna) < predef){
    	angulo ++;
      	motor.write(angulo);
    	//abre;
    } else {
    	//liga luz
    }
  } else if(angulo > 0 && calcAngulo(Interna) > predef){
    	angulo --;
      	motor.write(angulo);
  	//fecha;
  }
}

void loop() {
  luzExterna = analogRead(A0);
  luzInterna = analogRead(A1);

  
  if(initial == 0){
  	delay(1000);
  	motor.write(predef);
    angulo = predef;
    initial = 1;
  }
  
  checkInterna(luzExterna, luzInterna);
  
  //Intensidade do LED
  analogWrite(11, map(luzExterna,0, 1023, 0, 255));
  delay(500);
}