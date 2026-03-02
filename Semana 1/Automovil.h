//
// Created by Daniel on 27/02/2026.
//

#ifndef UNTITLED_AUTOMOVIL_H
#define UNTITLED_AUTOMOVIL_H
#include "Vehiculo.h"
class Automovil : public Vehiculo{
public:
    Automovil() {
        cout << "automovil creado"<<endl;
    }
    virtual ~Automovil() {}
};
#endif //UNTITLED_AUTOMOVIL_H