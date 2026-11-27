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
  // sensorLinha.ler();
  // sensorLinha.printDados();

  // if (sensorLinha.bbbb()){
  //    movimento.paraFrente();
  //    Serial.println("branco");
  //   }

  // sensorLinha.printDados();

  seguirLinha();
}

void Estrategia::seguirLinha(){
  sensorLinha.ler();
  movimento.paraFrente();


  if (sensorLinha.pppp()){ 
    executarVerdePPPP();
    }
  else if (sensorLinha.pppb()){ 
     movimento.virarEsquerda();
    }
  else if (sensorLinha.ppbb()){ 
    // movimento.virarEsquerda();
    executarVerdePPBB();
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
    //  movimento.virarDireita();
    executarVerdeBBPP();

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
}

void Estrategia::executarVerdePPPP(){
  movimento.parar();
  SensorCor::Verde tipoVerde = sensorcor.Cor();

  if(tipoVerde == sensorcor.VERDE_DIR){
    movimento.paraFrente();
    delay(500);
    movimento.virarDireita();
    delay(1500);
  }
  else if(tipoVerde == sensorcor.VERDE_ESQ){
    movimento.paraFrente();
    delay(500);
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

void Estrategia::executarVerdeBBPP(){
  movimento.parar();
  SensorCor::Verde tipoVerde = sensorcor.Cor();

  if(tipoVerde == sensorcor.VERDE_DIR){
    movimento.paraFrente();
    delay(500);
    movimento.virarDireita();
    delay(1500);
  }
  else if(tipoVerde == sensorcor.VERDE_ESQ){
    movimento.paraFrente();
    delay(500);
    movimento.virarEsquerda();
    delay(1500);
  }
  else if (tipoVerde == sensorcor.VERDE_DUPLO){
    movimento.girar180();
    delay(1500);
  }
  // else if(tipoVerde == sensorcor.VERDE_ZERO){
  //   movimento.virarDireita();
  //   for(100){
  //     delay(1);
  //     (sensorLinha.pbbb() or sensorLinha.ppbb() or sensorLinha.bpbb() or sensorLinha.);
  //     break;
  //   }
  //   seguirLinha();
  // }
}

void Estrategia::executarVerdePPBB(){

}