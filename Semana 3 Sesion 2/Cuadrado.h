//
// Created by ESCINF on 06/03/2026.
//

#ifndef SEMANA_3_CUADRADO_H
#define SEMANA_3_CUADRADO_H
#include "Figura.h"
class Cuadrado : public Figura {
private:
    double l;
public:
    Cuadrado(double lado) {
        l=lado;
    };
    double area() override {
        return l*l;
    }
};
#endif //SEMANA_3_CUADRADO_H