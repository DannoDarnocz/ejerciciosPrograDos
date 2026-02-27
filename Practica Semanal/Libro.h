//
// Created by Daniel on 27/02/2026.
//

#ifndef PRACTICA_SEMANAL_LIBRO_H
#define PRACTICA_SEMANAL_LIBRO_H
#include <iostream>
using namespace std;
#include "Autor.h"
class Autor;
class Libro {
private:
    string titulo;
    Autor* autor;
public:
    Libro(string titulo, Autor* autor);
};


#endif //PRACTICA_SEMANAL_LIBRO_H