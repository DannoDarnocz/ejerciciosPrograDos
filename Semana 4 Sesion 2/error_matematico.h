//
// Created by Daniel on 10/03/2026.
//

#ifndef SEMANA_4_SESION_2_ERROR_MATEMATICO_H
#define SEMANA_4_SESION_2_ERROR_MATEMATICO_H
//
// Created by ESCINF on 10/03/2026.
//
using namespace std;
#include <string>
class error_matematico : public std::exception {
protected:
    string msg;
public:
    error_matematico() {
        msg="Error matematico";
    };
    error_matematico(string msg) {
        this->msg = msg;
    };
    string mensaje() {
        return msg;
    }
};

#ifndef CLASE_10_03_2026_ANIMAL_H
#define CLASE_10_03_2026_ANIMAL_H

#endif //CLASE_10_03_2026_ANIMAL_H
#endif //SEMANA_4_SESION_2_ERROR_MATEMATICO_H