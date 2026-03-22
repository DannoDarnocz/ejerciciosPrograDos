//
// Created by Daniel on 20/03/2026.
//

#ifndef SEMANA_5_SEMANAL_BEBIDADECORADOR_H
#define SEMANA_5_SEMANAL_BEBIDADECORADOR_H
#include "Bebida.h"

class ICafeDecorador : public ICafe {
protected:
    ICafe* b;
public:
    ICafeDecorador(ICafe* b){ this->b=b; };
    virtual ~ICafeDecorador() {
        delete b;
    }
};

#endif //SEMANA_5_SEMANAL_BEBIDADECORADOR_H