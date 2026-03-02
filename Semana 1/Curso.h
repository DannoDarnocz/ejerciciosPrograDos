//
// Created by Daniel on 02/03/2026.
//

#ifndef UNTITLED_CURSO_H
#define UNTITLED_CURSO_H

#include <iostream>
#include "Estudiante.h"
class Estudiante;
class Curso {
private:
    string id;
public:
    Curso(string id):id(id){};
    string getId() {
        return id;
    }
};

#endif //UNTITLED_CURSO_H