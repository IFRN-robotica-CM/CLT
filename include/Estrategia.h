#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include "SensorReflet.h"
#include "Movimento.h"
#include "SensorCor.h"

class Estrategia{

    private:
        SensorReflet sensorLinha;
        Movimento movimento;
        SensorCor sensorcor;
        
        

    public:
    void executar();
    void seguirLinha();
    void executarVerdePPPP();
    void executarVerdeBBPP();
    void executarVerdePPBB();
};


#endif