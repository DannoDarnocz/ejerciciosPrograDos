//
// Created by ESCINF on 06/03/2026.
//

#ifndef SEMANA_3_IMPRIMIR_H
#define SEMANA_3_IMPRIMIR_H

#include "calculadoraIVA.h"

class ImpresoraFactura {
public:
    void imprimir(double precio) {
        cout  << "Precio: "  << precio  << endl
            << "IVA:" << calculadora::calcularIVA(precio)  << endl
            << "Total:" << calculadora::calcularPrecio(precio);
    }
};

#endif //SEMANA_3_IMPRIMIR_H