#include <iostream>
#include "Impresora.h"
#include "Archivo.h"
#include "Consola.h"
using namespace std;
int main() {
    Impresora impresora;
    Archivo archivo;
    Consola consola;

    impresora.setDispositivo(&archivo);
    impresora.imprimir("Hola, esto se muestra con el dispositivo archivo seleccionado");
    cout << endl<< endl;
    impresora.setDispositivo(&consola);
    impresora.imprimir("Hola, esto se muestra con el dispositivo consola seleccionado");

}
