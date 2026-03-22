#include <iostream>
#include "Cuadrado.h"
#include "Rectangulo.h"
using namespace std; // TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main()
{
    Figura* r1 = new Rectangulo(3,4);
    cout << r1->area() <<endl;
    Figura* r2 = new Cuadrado(10);
    cout << r2->area() <<endl;
}