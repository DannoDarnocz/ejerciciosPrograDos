| <div align="right"><img src="../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 2 – Práctica semanal

**Contenidos:** Principio abierto/cerrado, Principio de Parnas, KISS, YAGNI, SOLID.

---

## Actividad 1 (OCP y Parnas)

- Implemente una `Calculadora` que use una interfaz `IOperacion` con método `double calcular(double a, double b)`.
- Incluya al menos dos operaciones concretas (Suma, Resta). La `Calculadora` no debe modificarse al añadir una nueva operación.
- Documente en MD qué miembros son públicos y cuáles privados, y cómo se cumple el ocultamiento de información.
```cpp
/* 
Los miembros públicos son los métodos necesarios para ejecutar la operación, 
el único privado en este caso es la operación almacenada en calculadora, ya que
no se necesita que otra clase la conozca. De ahí se oculta la información que solo
se necesita en Calculadora.
*/

class Calculadora {
private:
    IOperacion* op;
public:
    void setOperacion(IOperacion* op) {
        this->op = op;
    };
    double ejecutarOperacion(double a, double b) {
        if (op) {
            return op->calcular(a,b);
        }else {
            return NULL;
        }
    }
};

class IOperacion {
public:
    virtual double calcular(double a, double b)=0;
    virtual ~IOperacion() = default;
};

class Suma : public IOperacion {
public:
    double calcular(double a, double b) override {
        return a+b;
    };
};

class Resta:public IOperacion {
public:
    double calcular(double a, double b) override {
        return a-b;
    };
};

using namespace std;
int main() {
    Calculadora calc;
    IOperacion* op = new Suma();
    calc.setOperacion(op);
    cout << calc.ejecutarOperacion(7,2);
}
```
---

## Actividad 2 (SOLID en diseño)

- Diseñe en MD una jerarquía de figuras (por ejemplo, `Figura` → `Circulo`, `Rectangulo`) que respete S, O y L.
- Para cada principio (S, O, L), escriba 2–3 líneas explicando cómo su diseño lo cumple.
- Opcional: dibuje un diagrama de clases en texto (ASCII) o en papel y descríbalo en MD.
```cpp
/* 
S: Single Responsibility
Cada clase se encarga de almacenar sus medidas y calcular su area con la misma medida.
No toman más responsabilidad fuera de manejar sus propias dimensiones y realizar cálculos 
con ellas.
*/

/* 
O: Open/Closed
Cada tipo de figura es una clase diferente que se puede expandir haciendo una nueva derivada
de Figura de manera simple sin tocar absolutamente nada de las demás clases que ya 
estaban creadas.
*/

/* 
S: Liskov Substitution
Las figuras sustituyen los métodos y comportamientos sin romper el comportamiento 
esperado en la clase padre. calcular() se comporta de manera diferente en cada figura pero
la clase padre Figura no requiere de algún comportamiento en específico que se viole en las
derivadas.
*/

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

```
---

## Actividad 3 (KISS/YAGNI)

- Describa en MD un ejemplo (real o inventado) de código que viole KISS o YAGNI.
- Proponga una versión más simple o mínima y justifique en un párrafo.
```cpp
/* 
Violación de YAGNA para una calculadora simple, como las que se usan en la escuela:
Sabiendo que en una de esas calculadoras no existen funciones más avanzadas 
como hayar la evaluación de una derivada en X, no hay necesidad para implementar 
una clase como esta:
*/

class Derivada : public IOperacion {
public:
    double calcular(string criterio, double x) override {
        ...
    };
};

/*
La manera más simple o mínima sería no ponerla del todo, ni siquiera "por si acaso", porque el
plan del proyecto es hacer una calculadora simple, no científica. Ahora lo que se necesita son
únicamente funciones básicas como las operaciones de toda la vida, calcular raíces y 
porcentajes.
*/
```
---

**Formato de entrega:** Código y documentación en **archivo(s) MD (Markdown)**.
