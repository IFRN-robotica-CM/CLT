#include "Estrategia.h"

void Estrategia::executar(){

  // if(proximoAoObtaculo())
  //     deseviarObstaculo()
  // else
  //seguirLinha();

  // movimento.paraFrente();
  // delay(1000);
  // movimento.parar();
  // delay(500);
  // sensorcor.LerSensorCorHSV();


 
  // sensorLinha.LigarLedSensor();
  seguirLinha();
  // sensorLinha.printDados();



  // if (sensorLinha.bbbb()){
  //    movimento.paraFrente();
  //    Serial.println("branco");
  //   }

  // sensorLinha.printDados();

}

void Estrategia::seguirLinha(){
  sensorLinha.ler();
  movimento.paraFrente();


  if (sensorLinha.pppp()){ 
    executarVerde();
    }
  else if (sensorLinha.pppb()){ 
     movimento.virarEsquerda();
    }
  else if (sensorLinha.ppbb()){ 
    movimento.virarEsquerda();
    }
   else if (sensorLinha.pbbb()){  
    movimento.virarEsquerda();
    }
   else if(sensorLinha.bppp()){ 
    movimento.virarDireita();
    }
   else if(sensorLinha.bppb()){
    movimento.paraFrente();
    }
   else if(sensorLinha.bpbb()){ 
     movimento.virarEsquerda();
    }
   else if(sensorLinha.bbpp()){
     movimento.virarDireita();
    }
   else if(sensorLinha.bbpb()){
     movimento.virarDireita();
    }
   else if(sensorLinha.bbbp()){
     movimento.virarDireita();
    }
   else if(sensorLinha.bbbb()){ 
     movimento.paraFrente();
    }

// -------- SENSOR DE OBSTACULO ------
//     else{
//       robo.acionarMotores(0,0);
//   delay(1000);
//   robo.acionarMotores(40, -40);
//   delay(210);
//   robo.acionarMotores(0,0);
//   delay(1000);
//     }
}

void Estrategia::executarVerde(){
  movimento.parar();
  SensorCor::Verde tipoVerde = sensorcor.Cor();

  if(tipoVerde == sensorcor.VERDE_DIR){
    movimento.virarDireita();
    delay(1500);
  }
  else if(tipoVerde == sensorcor.VERDE_ESQ){
    movimento.virarEsquerda();
    delay(1500);
  }
  else if (tipoVerde == sensorcor.VERDE_DUPLO){
    movimento.girar180();
    delay(1500);
  }
  else if(tipoVerde == sensorcor.VERDE_ZERO){
    movimento.paraFrente();
    delay(900);
    seguirLinha();
   
  
}
}