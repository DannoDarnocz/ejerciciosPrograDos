#include <iostream>
#include "Archivo.h"
#include "Consola.h"
#include "Impresora.h"
#include "division_cero.h"

double divisionSegura(double a, double b);

int main() {
    IDispositivoSalida* cDisp = new Consola();
    IDispositivoSalida* aDisp = new Archivo();

    Impresora i(cDisp);
    i.imprimir("Hola, se imprime por impresora");

    i.setDispositivo(aDisp);
    i.imprimir("Hola, se imprime por impresora");

    try {
        cout << endl<< endl <<"Division de 20/5: " << divisionSegura(20,5);
        cout <<endl<< "Division de 17/0: " << divisionSegura(17,0);
    }  catch (const division_cero& e) { // la constante se usa porque no se modifica el objeto division_cero de la excepción actual, sino que solo se lee.
        cout << "Error de division entre cero. " << e.what();
    }

    return 0;
}

double divisionSegura(double a, double b) {
    if (b==0) {
        throw division_cero();
    }
    return a/b;
}