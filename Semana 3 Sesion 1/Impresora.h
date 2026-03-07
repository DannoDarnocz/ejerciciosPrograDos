//
// Created by Daniel on 04/03/2026.
//

#ifndef SEMANA_3_IMPRESORA_H
#define SEMANA_3_IMPRESORA_H
#include "IDispositivoSalida.h"
using namespace std;
class Impresora {
private:
    IDispositivoSalida* dispositivo;
public:
    void imprimir(string texto) {
        dispositivo->escribir(texto);
    }

    void setDispositivo(IDispositivoSalida* dispositivo) {
        this->dispositivo = dispositivo;
    }

    ~Impresora() = default;
};

#endif //SEMANA_3_IMPRESORA_H