//
// Created by Daniel on 06/03/2026.
//

#ifndef SEMANA_3_INOTIFICADOR_H
#define SEMANA_3_INOTIFICADOR_H


class INotificador {
public:
    virtual void enviar(string) = 0;
    virtual ~INotificador() = default;
};
#endif //SEMANA_3_INOTIFICADOR_H