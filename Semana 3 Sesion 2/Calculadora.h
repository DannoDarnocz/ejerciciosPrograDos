//
// Created by ESCINF on 03/03/2026.
//

#ifndef SEMANA_3_CALCULADORA_H
#define SEMANA_3_CALCULADORA_H

#include <iostream>
using namespace std;
#include "IOperacion.h"

class Calculadora {
private:
    IOperacion* op;
public:
    void setOperacion(IOperacion* op) {
        this->op = op;
    };
    double ejecutarOperacion(double a, double b) {
        if (op) {
            return op->calcular(a,b);
        }else {
            return NULL;
        }
    }
};

#endif //SEMANA_3_CALCULADORA_H