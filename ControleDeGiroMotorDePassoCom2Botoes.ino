#include "Stepper.h"         	 					// declaração biblioteca Motor de passo

int PassosPorVolta = 100;                           		// Passos para dar uma volta 
int Pino_botao1 = 6;            					// pino do primeiro botão
int Pino_botao2 = 7;            					// pino do segundo botão
 
Stepper MotorStepper(PassosPorVolta, 8, 10, 9, 11); 	// Instância motor e pinos de comando
 
void setup() {
    pinMode(Pino_botao1,INPUT_PULLUP);
    pinMode(Pino_botao2,INPUT_PULLUP);        
    MotorStepper.setSpeed(300);              		 	// Configura a velocidade por rpm:
}

void loop(){
    
    if (digitalRead(Pino_botao1) == LOW ) {   	 	// Verifica se botão 1 foi pressionado
        MotorStepper.step(-PassosPorVolta);            	// Gira motor no sentido anti horário
    }
    
    if (digitalRead(Pino_botao2) == LOW) {   		// Verifica se botão 2 foi pressionado
        MotorStepper.step(PassosPorVolta);             	// Gira motor no sentido horário
    }
}