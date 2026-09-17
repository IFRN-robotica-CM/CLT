#include "Movimento.h"

void Movimento::paraFrente(){
  robo.acionarMotores(50, 50);
};

void Movimento::parar(){
  robo.acionarMotores(0,0);
};

void Movimento::virarDireita(){
   robo.acionarMotores(50,0);
};
void Movimento::virarEsquerda(){
  robo.acionarMotores(0,50);
};