//
// Created by Daniel on 10/03/2026.
//

#ifndef PRACTICA_SEMANAL_4_ERRORDIVISIONCERO_H
#define PRACTICA_SEMANAL_4_ERRORDIVISIONCERO_H

#include <exception>
#include <string>

class division_cero : public std::exception {
protected:
    string msg;
public:
    division_cero() {
        this->msg = "Error: No se puede dividir entre cero.";
    }
    division_cero(string msg) {
        this->msg = msg;
    }
    string getMsg() {
        return msg;
    }
};

#endif //PRACTICA_SEMANAL_4_ERRORDIVISIONCERO_H