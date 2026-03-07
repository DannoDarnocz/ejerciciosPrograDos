//
// Created by Daniel on 06/03/2026.
//

#ifndef SEMANA_3_NOTIFICADORARCHIVO_H
#define SEMANA_3_NOTIFICADORARCHIVO_H
#include "INotificador.h"

class notificadorArchivo : public INotificador {
public:
    void enviar(string texto) override {
        cout << "Se notifica lo siguiente por medio de archivo: " << texto << endl;
    }
};
#endif //SEMANA_3_NOTIFICADORARCHIVO_H