//
// Created by Daniel on 27/02/2026.
//

#ifndef PRACTICA_SEMANAL_AUTOR_H
#define PRACTICA_SEMANAL_AUTOR_H
#include "Libro.h"
#include <iostream>
using namespace std;

class Libro;
class Autor {
private:
    string nombre;
    Libro* libro[15];
public:
    Autor(string);
};


#endif //PRACTICA_SEMANAL_AUTOR_H