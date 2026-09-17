#ifndef MOVIMENTO_H
#define MOVIMENTO_H

#define VEL_PARA_FRENTE 50

#include <robo_hardware2.h>

class Movimento{

  public:

  inline void paraFrente();
  inline void parar();
  inline void virarDireita();
  inline void virarEsquerda();
  

};

#endif