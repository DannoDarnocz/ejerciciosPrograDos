

#include "Automovil.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "derivada2.h"
#include <iostream>
using namespace std;

int main() {
    derivada2 d2;
    derivada1* d1 = &d2;
    base* b1 = d1;

    b1->hola();

    Automovil a1;
    Vehiculo* v1 = &a1;
    // es upcast porque agarramos la clase derivada y ponemos un puntero de la base que agarre la responsabilidad del automovil creado
    // se sabe que automovil es derivada de vehiculo por lo tanto al hacer el upcast no hay el riesgo de usar un metodo o atributo que no exista

    Figura* figuras[5];
    figuras[0]=new Rectangulo(2,2);
    figuras[1]=new Rectangulo(3,2);
    figuras[2]=new Circulo(23);
    figuras[3]=new Circulo(1);

    figuras[4]=new Rectangulo(30,2);

    for (int i=0;i<5;i++) {
        cout<<figuras[i]->area()<<endl;
    }
}