#include <iostream>
#include <cmath>
#include "division_cero.h"
#include "error_negativo.h"

double divisionSegura(double a, double b);
double raiz(double a);
using namespace std;

int main() {
    try {
        cout << endl<< endl <<"Division de 20/5: " << divisionSegura(20,5);
        cout <<endl<< "Division de 17/0: " << divisionSegura(17,0);
    }  catch (const division_cero& e) {
        cout << "Error de division entre cero. " << e.what();
    } catch (const error_negativo& e) {
        cout << "Error de negativos. " << e.what();
    }

    try {
        cout << endl<< endl <<"Raiz de 80: " << raiz(80);
        cout << endl <<"Raiz de 9: " << raiz(9);
        cout <<endl<< "Raiz de -18: " << raiz(-17);
    }  catch (const division_cero& e) {
        cout << "Error de division entre cero. " << e.what();
    } catch (const error_negativo& e) {
        cout << "Error de negativos. " << e.what();
    }


    return 0;
}

double divisionSegura(double a, double b) {
    if (b==0) {
        throw division_cero();
    }
    return a/b;
}

double raiz(double a) {
    if (a<0) {
        throw error_negativo();
    }
    return pow(a,0.5);
}