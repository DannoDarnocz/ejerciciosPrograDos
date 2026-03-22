//
// Created by Daniel on 20/03/2026.
//

#ifndef SEMANA_5_SEMANAL_VAINILLA_H
#define SEMANA_5_SEMANAL_VAINILLA_H
#include "BebidaDecorador.h"
#include "Bebida.h"

class Azucar : public BebidaDecorador {
public:
    Azucar(Bebida* b):BebidaDecorador(b){}
    string descripcion() const override{
        return b->descripcion() + " + Azucar";
    }
    double precio() const override{
        return b->precio() + 3.5;
    }
};

#endif //SEMANA_5_SEMANAL_VAINILLA_H