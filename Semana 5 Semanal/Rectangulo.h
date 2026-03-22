//
// Created by ESCINF on 06/03/2026.
//

#ifndef SEMANA_3_RECTANGULO_H
#define SEMANA_3_RECTANGULO_H

#include "Figura.h"
class Rectangulo : public Figura {
private:
    double l;
    double a;
public:
    Rectangulo(double largo, double ancho) {
        l=largo;
        a=ancho;
    };
    double area() override {
        return l*a;
    }
};

#endif //SEMANA_3_RECTANGULO_H