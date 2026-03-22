//
// Created by Daniel on 22/03/2026.
//

#ifndef SEMANA_5_SEMANAL_RECTANGULOMAL_H
#define SEMANA_5_SEMANAL_RECTANGULOMAL_H

class RectanguloMal
{
private:
    double a, l;
public:
    RectanguloMal(double a,double b):a(a),l(b){};
    void setAncho(double a)
    {
        this->a = a;
    }
    void setLargo(double a)
    {
        this->l = a;
    }
};

#endif //SEMANA_5_SEMANAL_RECTANGULOMAL_H