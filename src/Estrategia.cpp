#include "Estrategia.h"

void Estrategia::executar(){

  // if(proximoAoObtaculo())
  //     deseviarObstaculo()
  // else
  seguirLinha();

}

void Estrategia::seguirLinha(){

  movimento.paraFrente();

  // if (sensorLinha.pppp()){ 
  //   movimento.parar();
  // }
//   else if (pppb()){ 
//     robo.acionarMotores(-0,80);}
//   else if (ppbb()){ 
//     robo.acionarMotores(-0,80);}
//   else if (pbbb()){  
//     robo.acionarMotores(-0,80);}
//   else if(bppp()){ 
//     robo.acionarMotores(80,-0);}
//   else if(bppb()){
//     robo.acionarMotores(80,80);}
//   else if(bpbb()){ 
//     robo.acionarMotores(-0,80);}
//   else if(bbpp()){
//     robo.acionarMotores(80,-0);}
//   else if(bbpb()){
//     robo.acionarMotores(80,-0);}
//   else if(bbbp()){
//     robo.acionarMotores(80,-0);}
//   else if(bbbb()){
//     robo.acionarMotores(80,80);}
//     else{
//       robo.acionarMotores(0,0);
//   delay(1000);
//   robo.acionarMotores(40, -40);
//   delay(210);
//   robo.acionarMotores(0,0);
//   delay(1000);
//     }
}