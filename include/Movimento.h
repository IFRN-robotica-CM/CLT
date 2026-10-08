#ifndef MOVIMENTO_H
#define MOVIMENTO_H


#include <robo_hardware2.h>

class Movimento {
  public:
    inline void paraFrente() {
      robo.acionarMotores(95, 100); // (dir, esq)
    }

    inline void parar() {
      robo.acionarMotores(0, 0);
    }

    inline void virarDireita() {
      robo.acionarMotores(100, 0);
    }

    inline void virarEsquerda() {
      robo.acionarMotores(0, 95);
    }
};

#endif