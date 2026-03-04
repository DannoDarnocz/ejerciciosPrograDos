#include <iostream>
using namespace std;

#include "Perro.h"
#include "Libro.h"

#include "Autor.h"

int main() {
    // animal se deriva a mamifero y mamifero a perro.
    // cada uno tiene el metodo "tipo" pero actúa de manera diferente
    // el upcast es seguro porque no hay métodos o atributos que no existan en la nueva clase (pasando de la derivada a la padre) a diferencia del downcast
    Perro p1;
    p1.tipo();
    Mamifero* m1=&p1;
    m1->tipo();
    Animal* a1=m1;
    a1->tipo();
    // en este caso todos dicen "soy un perro, guau" porque es un metodo virtual y sigue siendo un perro pero asignado a sus respectivas clases padre (upcast)

    Perro p2;
    Animal* a2 = &p2;

    Perro* p2ptr = nullptr;
    if (p2ptr=dynamic_cast<Perro*>(a2)) {
        p2ptr->ladrar();
    }
    else {
        cout<<"No soy perro, no puedo ladrar"<<endl;
    }

    Mamifero m2;
    Animal* a3 = &m2;

    Perro* p3ptr = nullptr;
    if (p3ptr=dynamic_cast<Perro*>(a3)) {
        p3ptr->ladrar();
    }
    else {
        cout<<"No soy perro, no puedo ladrar"<<endl;
    }
}