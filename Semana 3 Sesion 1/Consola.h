//
// Created by Daniel on 04/03/2026.
//

#ifndef SEMANA_3_CONSOLA_H
#define SEMANA_3_CONSOLA_H
#include <iostream>


#include "IDispositivoSalida.h"

class Consola:public IDispositivoSalida {
public:
    void escribir(string texto) override {
        cout << "Escrito a consola: " <<texto;
    }

};

#endif //SEMANA_3_CONSOLA_H