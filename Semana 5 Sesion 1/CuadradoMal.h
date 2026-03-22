//
// Created by Daniel on 22/03/2026.
//

#ifndef SEMANA_5_SEMANAL_CUADRADOMAL_H
#define SEMANA_5_SEMANAL_CUADRADOMAL_H
#include "RectanguloMal.h"
class CuadradoMal : public RectanguloMal
{
public:
    CuadradoMal(double a):a(a),l(a){};
    void setAncho(double a)
    {
        this->a = a;
        this->l = a;
    }
    void setLargo(double a)
    {
        this->a = a;
        this->l = a;
    }
};

#endif //SEMANA_5_SEMANAL_CUADRADOMAL_H