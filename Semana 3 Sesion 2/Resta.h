//
// Created by ESCINF on 03/03/2026.
//

#ifndef SEMANA_3_RESTA_H
#define SEMANA_3_RESTA_H
#include "IOperacion.h"

class Resta:public IOperacion {
public:
    double calcular(double a, double b) override {
        return a-b;
    };
};

#endif //SEMANA_3_RESTA_H