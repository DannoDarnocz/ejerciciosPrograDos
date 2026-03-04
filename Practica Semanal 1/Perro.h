//
// Created by ESCINF on 27/02/2026.
//

#ifndef PRACTICA_SEMANAL_PERRO_H
#define PRACTICA_SEMANAL_PERRO_H

#include "Mamifero.h"
class Perro: public Mamifero {
public:
    void tipo() override {cout<<"soy un perro, guau"<<endl;};
    void ladrar(){cout<<"GUAU!!!"<<endl;}
};


#endif //PRACTICA_SEMANAL_PERRO_H