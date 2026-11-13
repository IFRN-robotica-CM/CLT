
#include "SensorCor.h"



void SensorCor::LerSensorCor(){
  leituraSensorCorDir = robo.lerSensorDeCorDir(); //FUNCAO PARA LER VALOR DO SENSOR DE COR DIREITO

  //imprime os 3 valores retornardos pelo sensor cor
  Serial.print("Valor do sensor de cor DIR: ");
  Serial.print(leituraSensorCorDir.red);
  Serial.print(", ");
  Serial.print(leituraSensorCorDir.green);
  Serial.print(", ");
  Serial.print(leituraSensorCorDir.blue);
   Serial.print(", ");
  Serial.print(leituraSensorCorDir.clear);
  
  Serial.println();
  
  leituraSensorCorEsq = robo.lerSensorDeCorEsq(); //FUNCAO PARA LER VALOR DO SENSOR DE COR ESQUERDO

  //imprime os 3 valores retornardos pelo sensor cor
  Serial.print("Valor do sensor de cor ESQ: ");
  Serial.print(leituraSensorCorEsq.red);
  Serial.print(", ");
  Serial.print(leituraSensorCorEsq.green);
  Serial.print(", ");
  Serial.print(leituraSensorCorEsq.blue);
   Serial.print(", ");
  Serial.print(leituraSensorCorEsq.clear);

  Serial.println();
  delay(500);
}

void SensorCor::TesteDeCor(){
  robo.lerSensorDeCorDir();
  robo.lerSensorDeCorEsq();

  

}


void SensorCor::(){
  if (ler)
}

