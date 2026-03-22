#include <iostream>
#include "BebidaDecorador.h"
#include "Bebida.h"
#include "Cafe.h"
#include "Azucar.h"
#include "Leche.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    ICafe* cafe = new CafeSimple();
    cout << cafe->descripcion() << " con precio $"<< cafe->precio() << endl;

    cafe = new Azucar(cafe);
    cout << cafe->descripcion() << " con precio $"<< cafe->precio() << endl;

    cafe = new Leche(cafe);
    cout << cafe->descripcion() << " con precio $"<< cafe->precio() << endl;

}