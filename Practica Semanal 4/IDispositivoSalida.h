//
// Created by Daniel on 10/03/2026.
//

#ifndef PRACTICA_SEMANAL_4_IDISPOSITIVOSALIDA_H
#define PRACTICA_SEMANAL_4_IDISPOSITIVOSALIDA_H


using namespace std;

class IDispositivoSalida {
public:

    virtual ~IDispositivoSalida() = default;
    virtual void imprimir(string txt) = 0;
};

#endif //PRACTICA_SEMANAL_4_IDISPOSITIVOSALIDA_H