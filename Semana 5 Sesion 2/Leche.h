//
// Created by Daniel on 20/03/2026.
//

#ifndef SEMANA_5_SEMANAL_LECHE_H
#define SEMANA_5_SEMANAL_LECHE_H
#include "BebidaDecorador.h"
using namespace std;

class Leche : public ICafeDecorador {
public:
    Leche(ICafe* b):ICafeDecorador(b){}
    string descripcion() const override{
        return b->descripcion() + " + Leche";
    }
    double precio() const override{
        return b->precio() + 5;
    }
};

#endif //SEMANA_5_SEMANAL_LECHE_H