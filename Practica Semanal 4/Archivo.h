//
// Created by Daniel on 10/03/2026.
//

#ifndef PRACTICA_SEMANAL_4_ARCHIVO_H
#define PRACTICA_SEMANAL_4_ARCHIVO_H
#include <iostream>
#include <ostream>
#include <fstream>

#include "IDispositivoSalida.h"

class Archivo : public IDispositivoSalida {
public:
    void imprimir(string txt) override {
        ofstream archivo("salida.txt", ios::trunc);
        if (archivo.is_open()) {
            archivo << txt << endl;
            archivo.close();
            cout << "Se ha escrito por archivo.";
            return;
        }
        cout << "No se ha podido escribir en el archivo"<<endl;
    }
};

#endif //PRACTICA_SEMANAL_4_ARCHIVO_H