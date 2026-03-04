#include <iostream>
#include "Calculadora.h"
#include "Suma.h"
#include "Resta.h"
#include "Circulo.h"
#include "Rectangulo.h"
using namespace std;
int main() {
    Calculadora calc;
    IOperacion* op = new Suma();
    calc.setOperacion(op);
    cout << calc.ejecutarOperacion(7,2);
}