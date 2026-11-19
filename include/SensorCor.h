#ifndef SENSOR_COR_H
#define SENSOR_COR_H

#include <robo_hardware2.h> 
#include <Servo.h>



//-----PINOS PARA SENS/ORES DE COR I2C-----//
//  SDA_SENSOR_COR_DIREITO  42
//  SCL_SENSOR_COR_DIREITO  40
//  LED_SENSOR_COR_DIREITO  38

//  SDA_SENSOR_COR_ESQUERDO  32
//  SCL_SENSOR_COR_ESQUERDO  34
//  LED_SENSOR_COR_ESQUERDO  36
//-----PINOS PARA SENSORES DE COR I2C-----//

//  O tipo HSV e formado por tres valores: 
//  float h   //valor varia de 0 ate 359
//  float s   //valor varia de 0 ate 1. Isso inclui: 0.1 0.34 0.73
//  int v     //valor vaira de 0 ate 255
//Declaração de uma variável do tipo RGB

class SensorCor {

    public:
    RGBC leituraSensorCorDir; 
    RGBC leituraSensorCorEsq; 
    HSV leituraSensorCor; 
    HSV leituraHSVDir;
    HSV leituraHSVEsq;

    HSV hsvDir;
    HSV hsvEsq;

    enum Verde {
    VERDE_DIR,
    VERDE_ESQ,
    VERDE_DUPLO,
    VERDE_ZERO
    };
     
    void LerSensorCorRGB();
    void LerSensorCorHSV();
    void TesteDeCor();

    Verde Cor();

};
#endif