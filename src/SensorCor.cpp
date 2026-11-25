#include "SensorCor.h"




void SensorCor::LerSensorCorRGB(){
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


void SensorCor::LerSensorCorHSV(){
  // leituraSensorCor = robo.corEsq.getHSV(); //FUNCAO PARA LER VALOR DO SENSOR LATERAL

  leituraHSVDir = robo.corDir.getHSV();
  delay(500);
  leituraHSVEsq = robo.corEsq.getHSV();

  //imprime os 3 valores retornardos pelo sensor cor
  // Serial.print("Valor do sensor de cor: ");
  // Serial.print(leituraSensorCor.h);
  // Serial.print(", ");
  // Serial.print(leituraSensorCor.s);
  // Serial.print(", ");
  // Serial.print(leituraSensorCor.v);

  Serial.print("Valor do sensor de cor direito: ");
  Serial.print(leituraHSVDir.h);
  Serial.print(", ");
  Serial.print(leituraHSVDir.s);
  Serial.print(", ");
  Serial.print(leituraHSVDir.v);
  
  
  Serial.println();


 Serial.print("Valor do sensor de cor esquerdo: ");
  Serial.print(leituraHSVEsq.h);
  Serial.print(", ");
  Serial.print(leituraHSVEsq.s);
  Serial.print(", ");
  Serial.print(leituraHSVEsq.v);
  Serial.println();

  delay(500);
}
 



SensorCor::Verde SensorCor::Cor(){
  hsvDir = robo.corDir.getHSV();
  hsvEsq = robo.corEsq.getHSV();
  
  bool MatizDir = (hsvDir.h >= 90 && hsvDir.h <= 150);
  bool SaturacaoDir = (hsvDir.s >= 0.30);
  bool LuminosidadeDir = (hsvDir.v >= 590 && hsvDir.v <= 700);
  bool EhVerdeDir = (MatizDir && SaturacaoDir && LuminosidadeDir);

  bool MatizEsq = (hsvEsq.h >= 90.00 && hsvEsq.h <= 150.00);
  bool SaturacaoEsq = (hsvEsq.s >= 0.29);
  bool LuminosidadeEsq = (hsvEsq.v >= 230 && hsvEsq.v <330);
  bool EhVerdeEsq = (MatizEsq && SaturacaoEsq && LuminosidadeEsq);

  if(EhVerdeDir && EhVerdeEsq){
    // Serial.println("os dois sensores estão lendo verde");
    return VERDE_DUPLO;
  }
    else if(EhVerdeDir){
      // Serial.println(" sensor direito leu verde");
      return VERDE_DIR;

  }
    else if(EhVerdeEsq){
      // Serial.println("sensor esquerdo leu verde");
      return VERDE_ESQ;
  }
  else {
    // Serial.println("Deu errado");
    return VERDE_ZERO;
  }
}


