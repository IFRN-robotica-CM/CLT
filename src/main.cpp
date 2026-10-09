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
  // float valorSensorEsq = robo.lerSensorLinhaEsq(); //Le o valor do sensor esquerdo e coloca dentro da variavel valor_sensor_esq
  // float valorSensorDir = robo.lerSensorLinhaDir(); //Le o valor do sensor direito e coloca dentro da variavel valor_sensor_dir
  // float valorSensorMaisEsq = robo.lerSensorLinhaMaisEsq();
  // float valorSensorMaisDir = robo.lerSensorLinhaMaisDir();

  // Serial.print(valorSensorMaisEsq);
  // Serial.print(";\t");
  // Serial.print(valorSensorEsq);
  // Serial.print(";\t");
  // Serial.print(valorSensorDir);
  // Serial.print(";\t");
  // Serial.println(valorSensorMaisDir);
  // delay(100);
  estrategia.executar();
  // digitalWrite(LED_AMARELO,HIGH);
  // digitalWrite(LED_AZUL,HIGH);
  // digitalWrite(LED_VERMELHO,HIGH);
  // digitalWrite(LED_VERDE,HIGH);
  
}
