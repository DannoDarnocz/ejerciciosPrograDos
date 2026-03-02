//
// Created by Daniel on 02/03/2026.
//

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Curso.h"
class Curso;
class Estudiante {
private:
    string id;
public:
    Estudiante(string id):id(id){};
    string getId() {
        return id;
    }
};

#endif //UNTITLED_ESTUDIANTE_H