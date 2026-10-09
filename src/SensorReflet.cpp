
#include "SensorReflet.h" 

void SensorReflet::ler(){
  valorSensorEsq = robo.lerSensorLinhaEsq(); //Le o valor do sensor esquerdo e coloca dentro da variavel valor_sensor_esq
  valorSensorDir = robo.lerSensorLinhaDir(); //Le o valor do sensor direito e coloca dentro da variavel valor_sensor_dir
  valorSensorMaisEsq = robo.lerSensorLinhaMaisEsq();
  valorSensorMaisDir = robo.lerSensorLinhaMaisDir();
}

void SensorReflet::printDados(){
  Serial.print(valorSensorMaisEsq);
  Serial.print(";\t");
  Serial.print(valorSensorEsq);
  Serial.print(";\t");
  Serial.print(valorSensorDir);
  Serial.print(";\t");
  Serial.println(valorSensorMaisDir);
  delay(1000);
}