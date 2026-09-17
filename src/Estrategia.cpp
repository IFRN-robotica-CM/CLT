#include "Estrategia.h"

void Estrategia::executar(){

  // if(proximoAoObtaculo())
  //     deseviarObstaculo()
  // else
  seguirLinha();

}

void Estrategia::seguirLinha(){

  movimento.paraFrente();

  if (sensorLinha.pppp()){ 
    movimento.parar();
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