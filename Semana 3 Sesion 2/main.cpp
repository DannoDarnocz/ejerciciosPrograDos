#include <iostream>
#include "Calculadora.h"
#include "Suma.h"
#include "Resta.h"
#include "Cuadrado.h"
#include "Imprimir.h"
#include "INotificador.h"
#include "Rectangulo.h"
#include "NotificadorConsola.h"
#include "NotificadorArchivo.h"
using namespace std;

void calcularAreaFigura(Figura* fig) {
    cout << "Area de la figura: " << fig->area();
}

int main() {
    Figura* fig1 = new Rectangulo(10,9);
    Figura* fig2 = new Cuadrado(5);

    calcularAreaFigura(fig1);
    cout << endl;
    calcularAreaFigura(fig2);
    cout << endl<< endl;

    ImpresoraFactura impresora;
    impresora.imprimir(900);
    cout << endl<< endl;

    notificadorConsola nConsola;
    nConsola.enviar("HOLA, esto es por consola!");

    cout << endl;
    notificadorArchivo nArchivo;
    nArchivo.enviar("HOLA, esto es por consola!");
}