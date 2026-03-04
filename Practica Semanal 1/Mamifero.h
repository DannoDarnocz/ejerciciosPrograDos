//
// Created by ESCINF on 27/02/2026.
//

#ifndef PRACTICA_SEMANAL_MAMIFERO_H
#define PRACTICA_SEMANAL_MAMIFERO_H
#include "Animal.h"

class Mamifero :public Animal {
public:
    void tipo() override {cout<<"soy un mamifero, wow"<<endl;};
};


#endif //PRACTICA_SEMANAL_MAMIFERO_H