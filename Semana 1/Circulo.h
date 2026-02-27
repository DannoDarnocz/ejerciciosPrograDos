//
// Created by Daniel on 27/02/2026.
//

#ifndef UNTITLED_CIRCULO_H
#define UNTITLED_CIRCULO_H
#include "Figura.h"

class Circulo  : public Figura {
private:
    float r;
public:
    Circulo(float radio):r(radio){};
    double area() {
        return r*r*3.14;
    }
};

#endif //UNTITLED_CIRCULO_H