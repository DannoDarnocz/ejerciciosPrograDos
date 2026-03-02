

#include "Automovil.h"
#include "Barco.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "derivada2.h"
#include "Estudiante.h"
#include "Curso.h"
#include <iostream>
using namespace std;

int main() {
    // sesion 1
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
    cout<<endl;
    // sesion 2
    Automovil a2;
    Vehiculo* v2 = &a2;
    if (Automovil* a2ptr = dynamic_cast<Automovil*>(v2)) {
        cout << "Se ha realizado downcast con exito" << endl<< endl;
    }
    else {
        cout << "No se pudo hacer downcast" << endl<< endl;
    }

    Barco barco1;
    Vehiculo* vBarco1 = &barco1;
    if (Automovil* prueba = dynamic_cast<Automovil*>(vBarco1)) {
        cout << "Se ha realizado downcast con exito" << endl<< endl;
    }
    else {
        cout << "No se pudo hacer downcast" << endl<< endl;
    }

    Estudiante e1("pepito");
    Curso c1("126");
    cout << e1.getId()<< endl<< c1.getId();
}