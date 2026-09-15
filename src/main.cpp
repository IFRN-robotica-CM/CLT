#include <robo_hardware2.h> 
#include <Servo.h>
# include "Movimento.h"


//-----PINOS PARA LIGAR MOTORES-----//
//Motor1:
//pino1 PWM_RODA_DIREITA  6
//pino2 SENTIDO_RODA_DIREITA  7
//
//Motor2:
//pino1 PWM_RODA_ESQUERDA   530
//pino2 SENTIDO_RODA_ESQUERDA 4
//-----PINOS PARA LIGAR MOTORES-----//

//-----PINOS PARA SENSORES REFLETANCIA-----//
//SENSOR_LINHA_MAIS_ESQUERDO      A3
//SENSOR_LINHA_ESQUERDO         A2
//SENSOR_LINHA_DIREITO          A1  
//SENSOR_LINHA_MAIS_DIREITO     A0  
//-----PINOS PARA SENSORES REFLETANCIA-----//



#define DIVISOR_DE_DISTANCIA 15

#include "SensorReflet.h"
#include "Estrategia.h"

SensorReflet sensorlinha;
Movimento movimento;
Estrategia estrategia;

void setup(){
  robo.configurar();
  Serial.begin(9600);
}

void loop(){

  estrategia.executar();
  
}