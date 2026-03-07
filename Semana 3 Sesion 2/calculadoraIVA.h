//
// Created by ESCINF on 06/03/2026.
//

#ifndef SEMANA_3_CALCULARIVA_H
#define SEMANA_3_CALCULARIVA_H

class calculadora {
public:
    static double calcularIVA(double precio) {
        return precio*0.13;
    };

    static double calcularPrecio(double precio) {
        return precio+calcularIVA(precio);
    };
};

#endif //SEMANA_3_CALCULARIVA_H