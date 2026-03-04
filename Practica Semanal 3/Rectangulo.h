//
// Created by Daniel on 27/02/2026.
//

#ifndef UNTITLED_RECTANGULO_H
#define UNTITLED_RECTANGULO_H

#include "Figura.h"

class Rectangulo  : public Figura {
private:
    float l;
    float a;
public:
    Rectangulo(float largo,float ancho):l(largo),a(ancho){};
    double area() {
        return l*a;
    }
};


#endif //UNTITLED_RECTANGULO_H