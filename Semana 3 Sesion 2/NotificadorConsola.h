//
// Created by Daniel on 06/03/2026.
//

#ifndef SEMANA_3_NOTIFICADORCONSOLA_H
#define SEMANA_3_NOTIFICADORCONSOLA_H
#include <iostream>
#include <ostream>

#include "INotificador.h"

class notificadorConsola : public INotificador {
public:
    void enviar(string texto) override {
        cout << "Se notifica lo siguiente por medio de consola: " << texto << endl;
    }
};
#endif //SEMANA_3_NOTIFICADORCONSOLA_H