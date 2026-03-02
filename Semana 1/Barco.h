//
// Created by Daniel on 02/03/2026.
//

#ifndef UNTITLED_BARCO_H
#define UNTITLED_BARCO_H

#include "Vehiculo.h"
class Barco : public Vehiculo{
public:
    Barco() {
        cout << "barco creado"<<endl;
    }
    virtual ~Barco() {}
};

#endif //UNTITLED_BARCO_H