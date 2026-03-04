//
// Created by ESCINF on 03/03/2026.
//

#ifndef SEMANA_3_IOPERACION_H
#define SEMANA_3_IOPERACION_H

class IOperacion {
public:
    virtual double calcular(double a, double b)=0;
    virtual ~IOperacion() = default;
};

#endif //SEMANA_3_IOPERACION_H