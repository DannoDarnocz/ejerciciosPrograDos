//
// Created by Daniel on 20/03/2026.
//

#ifndef SEMANA_5_SEMANAL_CAFE_H
#define SEMANA_5_SEMANAL_CAFE_H

class CafeSimple : public ICafe {
    double precio() const override {
        return 10;
    }
    string descripcion() const override {
        return "Cafe";
    }
};

#endif //SEMANA_5_SEMANAL_CAFE_H