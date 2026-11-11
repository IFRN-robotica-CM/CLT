#ifndef MOVIMENTO_H
#define MOVIMENTO_H


#include <robo_hardware2.h>

class Movimento {
  public:
    inline void paraFrente() {
      robo.acionarMotores(85, 90); // (dir, esq)
    }

    inline void parar() {
      robo.acionarMotores(0, 0);
    }

    inline void virarDireita() {
      robo.acionarMotores(-90, 90);
    }

    inline void virarEsquerda() {
      robo.acionarMotores(90, -90);
    }
};

#endif