| <div align="right"><img src="../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 4 – Sesión 1 (Estudiantes)

**Duración:** 2 horas  
**Tema:** Principio de Sustitución de Liskov (LSP)

---

## Explicación (resumen)

- **LSP:** Los objetos de una clase derivada deben poder sustituir a los de la base sin alterar las propiedades deseables del programa. No debilitar precondiciones ni fortalecer postcondiciones; no cambiar el contrato (por ejemplo no lanzar excepciones nuevas que la base no lanza).

---

## Espacio para tu código

### Ejercicio 1: Violación de LSP

Escriba una jerarquía que **viole** LSP (por ejemplo `Rectangulo`/`Cuadrado` donde `Cuadrado::setAncho` cambie también el alto, rompiendo la expectativa del cliente que usa `Rectangulo&`). Documente en comentarios por qué se viola LSP.

```cpp
// Cuadrado modifica el comportamiento esperado de rectángulo

class RectanguloMal
{
private:
    double a, l;
public:
    RectanguloMal(double a,double b):a(a),l(b){};
    void setAncho(double a)
    {
        this->a = a;
    }
    void setLargo(double a)
    {
        this->l = a;
    }
};

class CuadradoMal : public RectanguloMal
{
public:
    CuadradoMal(double a):a(a),l(a){};
    void setAncho(double a)
    {
        this->a = a;
        this->l = a;
    }
    void setLargo(double a)
    {
        this->a = a;
        this->l = a;
    }
};
```

### Ejercicio 2: Cumplir LSP

Rediseñe el ejemplo anterior (o use otra jerarquía) para que las derivadas cumplan el mismo contrato que la base. Por ejemplo: interfaz `Figura` con `area()` y clases que la implementen sin restricciones adicionales incompatibles.

```cpp
class Figura {
public:
    virtual double area() = 0;
};

class Rectangulo : public Figura {
private:
    double l;
    double a;
public:
    Rectangulo(double largo, double ancho) {
        l=largo;
        a=ancho;
    };
    double area() override {
        return l*a;
    }
};

class Cuadrado : public Figura {
private:
    double l;
public:
    Cuadrado(double lado) {
        l=lado;
    };
    double area() override {
        return l*l;
    }
};
```

---

## Criterios de validación (para el profesor)

- [ ] Explicación clara de la violación y del cumplimiento
- [ ] Constructores con asignación en cuerpo si hay parámetros que asignar
- [ ] Uso de `using namespace std;`



