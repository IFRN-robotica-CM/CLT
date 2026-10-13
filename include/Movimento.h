#ifndef MOVIMENTO_H
#define MOVIMENTO_H


#include <robo_hardware2.h>

class Movimento {
  public:
    inline void paraFrente() {
      robo.acionarMotores(90, 95); // (dir, esq)
    }

    inline void parar() {
      robo.acionarMotores(0, 0);
    }

    inline void virarDireita() {
      robo.acionarMotores(0, 80);
    }

    inline void virarEsquerda() {
      robo.acionarMotores(80, 0);
    }
};

#endif