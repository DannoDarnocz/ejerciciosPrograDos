//
// Created by Daniel on 20/03/2026.
//

#ifndef SEMANA_5_SEMANAL_BEBIDADECORADOR_H
#define SEMANA_5_SEMANAL_BEBIDADECORADOR_H
#include "Bebida.h"

class BebidaDecorador : public Bebida {
protected:
    Bebida* b;
public:
    BebidaDecorador(Bebida* b){ this->b=b; };
    virtual ~BebidaDecorador() {
        delete b;
    }
};

#endif //SEMANA_5_SEMANAL_BEBIDADECORADOR_H