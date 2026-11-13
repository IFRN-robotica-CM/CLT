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

class SensorCor {

    public:
    RGBC leituraSensorCorDir; 
    RGBC leituraSensorCorEsq; 



    void LerSensorCor();
};
#endif