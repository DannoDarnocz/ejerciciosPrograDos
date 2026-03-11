//
// Created by Daniel on 04/03/2026.
//

#ifndef SEMANA_3_IDISPOSITIVOSALIDA_H
#define SEMANA_3_IDISPOSITIVOSALIDA_H
using namespace std;
#include <string>

class IDispositivoSalida {
public:
    virtual void escribir(string texto)=0;
    virtual ~IDispositivoSalida() = default;
};
#endif //SEMANA_3_IDISPOSITIVOSALIDA_H