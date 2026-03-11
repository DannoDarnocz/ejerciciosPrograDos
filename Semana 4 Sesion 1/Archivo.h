//
// Created by Daniel on 04/03/2026.
//

#ifndef SEMANA_3_ARCHIVO_H
#define SEMANA_3_ARCHIVO_H


#include "IDispositivoSalida.h"

class Archivo:public IDispositivoSalida {
public:
    void escribir(string texto) override {
        cout << "Escrito a archivo: " <<texto;
    }
};
#endif //SEMANA_3_ARCHIVO_H