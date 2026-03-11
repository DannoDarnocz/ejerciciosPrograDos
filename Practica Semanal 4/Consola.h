//
// Created by Daniel on 10/03/2026.
//

#ifndef PRACTICA_SEMANAL_4_CONSOLA_H
#define PRACTICA_SEMANAL_4_CONSOLA_H
#include "IDispositivoSalida.h"

class Consola : public IDispositivoSalida {
    void imprimir(string txt) override {
        cout << "Se ha escrito por consola: " << txt << endl;
    }
};
#endif //PRACTICA_SEMANAL_4_CONSOLA_H