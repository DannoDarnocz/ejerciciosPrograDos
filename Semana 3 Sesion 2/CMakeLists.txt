cmake_minimum_required(VERSION 4.1)
project(Semana_3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Semana_3 main.cpp
        Calculadora.h
        IOperacion.h
        Suma.h
        Resta.h
        calculadoraIVA.h
        Imprimir.h
        Figura.h
        Rectangulo.h
        Cuadrado.h
        INotificador.h
        NotificadorConsola.h
        NotificadorArchivo.h)
