//
// Created by Daniel on 10/03/2026.
//

#ifndef PRACTICA_SEMANAL_4_IMPRESORA_H
#define PRACTICA_SEMANAL_4_IMPRESORA_H
#include "IDispositivoSalida.h"
#include "Archivo.h"
#include "Consola.h"
class Impresora {
private:
    IDispositivoSalida* dispositivo;
public:
    Impresora() {
        dispositivo = nullptr;
    }
    Impresora(IDispositivoSalida* disp) {
        setDispositivo(disp);
    }
    void imprimir(string txt) {
        dispositivo->imprimir(txt);
    }
    void setDispositivo(IDispositivoSalida* disp) {
        if (disp) {
            dispositivo = disp;
        }
    }
};
#endif //PRACTICA_SEMANAL_4_IMPRESORA_H