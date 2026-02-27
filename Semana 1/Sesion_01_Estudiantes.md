| <div align="right"><img src="../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 1 – Sesión 1 (Estudiantes)

**Duración:** 2 horas  
**Tema:** Relaciones – repaso y Upcast

---

## Explicación (resumen)

- **Relaciones entre clases:** Generalización (herencia), dependencia y asociación (agregación/composición). Distinga "es-un" de "tiene-un".
- **Upcast:** Conversión de puntero o referencia de clase derivada a clase base. Es segura e implícita; permite polimorfismo.

---

## Espacio para tu código

Escriba su implementación en los bloques siguientes. El profesor validará que esté bien escrito.

### Ejercicio 1: Vehiculo y Automovil – upcast

Defina `Vehiculo` (base) y `Automovil` (derivada). En `main` cree un `Automovil` y asígnelo a un puntero (o referencia) a `Vehiculo`. Justifique en comentarios por qué es upcast y es seguro.

```cpp
using namespace std;
class Vehiculo {
public:
    Vehiculo() {
        cout << "vehiculo creado";
    }
};

class Automovil : public Vehiculo{
public:
    Automovil() {
    cout << "automovil creado";
    }
};


int main() {
    Automovil a1;
    Vehiculo* v1 = &a1; 
    // es upcast porque agarramos la clase derivada y luego creamos un puntero a la base que agarre la responsabilidad del automovil creado
    // se sabe que automovil es derivada de vehiculo por lo tanto al hacer el upcast no hay el riesgo de usar un metodo o atributo que no exista
  
  }
```

### Ejercicio 2: Jerarquía de 3 niveles

Escriba una jerarquía base → derivada1 → derivada2. En `main` realice upcast en cada nivel a la clase base y llame un método definido en la base.

```cpp
#include <iostream>

class base {
public:
    void hola(){cout<<"hola";}
};

class derivada1 : public base{};
class derivada2 : public derivada1 {};

int main() {
    derivada2 d2;
    derivada1* d1 = &d2;
    base* b1 = d1;
    
    b1->hola();

}
```

### Ejercicio 3: Array de punteros a base

Defina una clase base abstracta `Figura` (con `double area() = 0`) y derive `Circulo` y `Rectangulo`. En `main` use un **array** de punteros `Figura* figuras[MAX]`, agregue figuras y recorra el array mostrando el área. No use `vector`.

```cpp
#include <iostream>
using namespace std;

class Figura {
public:
    virtual double area()=0;
};

class Circulo  : public Figura {
private:
    float r;
public:
    Circulo(float radio):r(radio){};
    double area() {
        return r*r*3.14;
    }
};

class Rectangulo  : public Figura {
private:
    float l;
    float a;
public:
    Rectangulo(float largo,float ancho):l(largo),a(ancho){};
    double area() {
        return l*a;
    }
};


int main() {
    Figura* figuras[5];
    figuras[0]=new Rectangulo(2,2);
    figuras[1]=new Rectangulo(3,2);
    figuras[2]=new Circulo(23);
    figuras[3]=new Circulo(1);

    figuras[4]=new Rectangulo(30,2);

    for (int i=0;i<5;i++) {
        cout<<figuras[i]->area()<<endl;
    }
}

```

---

## Criterios de validación (para el profesor)

- [ ] Uso de `using namespace std;`
- [ ] Upcast correcto (puntero/referencia derivada → base)
- [ ] Uso de **array** de punteros (no vector) en el ejercicio 3
- [ ] Constructores sin sintaxis `b(base), h(alt)`; usar asignación en el cuerpo si aplica
