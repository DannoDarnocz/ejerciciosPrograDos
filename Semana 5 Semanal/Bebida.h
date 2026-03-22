//
// Created by Daniel on 20/03/2026.
//

#ifndef SEMANA_5_SEMANAL_BEBIDA_H
#define SEMANA_5_SEMANAL_BEBIDA_H
using namespace std;
class Bebida {
public:
    virtual double precio() const = 0;
    virtual string descripcion() const = 0;
};

#endif //SEMANA_5_SEMANAL_BEBIDA_H