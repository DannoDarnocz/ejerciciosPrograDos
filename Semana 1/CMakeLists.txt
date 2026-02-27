cmake_minimum_required(VERSION 4.1)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        base.cpp
        base.h
        derivada1.h
        derivada2.h
        Vehiculo.h
        Automovil.h
        Circulo.h
        Figura.h
        Rectangulo.h)
