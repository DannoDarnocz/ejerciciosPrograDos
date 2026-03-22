| <div align="right"><img src="../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 4 – Práctica semanal

**Contenidos:** Principio de Sustitución de Liskov, Patrón Decorator.  
**Nota:** Entrega del primer proyecto (según cronograma del curso).

---

## Actividad 1 (LSP)

- Escriba una jerarquía que viole LSP: por ejemplo, `Rectangulo` y `Cuadrado` donde `Cuadrado` restrinja el comportamiento de la base. Documente la violación en MD.
- Rediseñe para cumplir LSP (por ejemplo, interfaz común sin restricciones incompatibles) y muestre el código corregido.
```cpp
/* 
    Mal diseño: Cuadrado modifica el comportamiento de rectángulo
*/

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

```cpp
/* 
    Buen diseño: Las derivadas no rompen con el 
    comportamiento esperado de sus padres
*/

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

## Actividad 2 (Decorator – Café)

- Implemente la interfaz `ICafe` con `double costo()` y `std::string descripcion()`.
- Clase concreta `CafeSimple`. Decoradores `ConLeche` y `ConAzucar` que envuelven un `ICafe*` y añaden costo y texto a la descripción.
- En `main`, cree un café con leche y azúcar y muestre costo total y descripción.

```
class Bebida {
public:
    virtual double precio() const = 0;
    virtual string descripcion() const = 0;
};

class Cafe : public Bebida {
    double precio() const override {
        return 10;
    }
    string descripcion() const override {
        return "Cafe";
    }
};

class BebidaDecorador : public Bebida {
protected:
    Bebida* b;
public:
    BebidaDecorador(Bebida* b){ this->b=b; };
    virtual ~BebidaDecorador() {
        delete b;
    }
};

class Leche : public BebidaDecorador {
public:
    Leche(Bebida* b):BebidaDecorador(b){}
    string descripcion() const override{
        return b->descripcion() + " + Leche";
    }
    double precio() const override{
        return b->precio() + 5;
    }
};

class Azucar : public BebidaDecorador {
public:
    Azucar(Bebida* b):BebidaDecorador(b){}
    string descripcion() const override{
        return b->descripcion() + " + Azucar";
    }
    double precio() const override{
        return b->precio() + 3.5;
    }
};

int main() {
    Bebida* cafe = new Cafe();
    cout << cafe->descripcion() << " con precio $"<< cafe->precio() << endl;

    cafe = new Azucar(cafe);
    cout << cafe->descripcion() << " con precio $"<< cafe->precio() << endl;

    cafe = new Leche(cafe);
    cout << cafe->descripcion() << " con precio $"<< cafe->precio() << endl;

}
```

---

## Actividad 3 (Diagrama y comparación)

- Incluya en MD un diagrama de clases del Decorator (componente, decorador base, dos decoradores concretos).
- Redacte un párrafo comparando Decorator con herencia para añadir variantes (ventajas del Decorator).
```
     Componente
          ↑ (envuelve)
     Decorador base
    ↑		    ↑
Decorador		Decorador
concreto 1		concreto 2


Lo bueno del decorator es que permite agregar nuevos ingredientes 
sin tener que estar haciendo clases específicas para las 
combinaciones posibles, como por ejemplo CafeConAzucar, CafeConLeche,
CafeConLecheYAzucar, si fuera así se haría demasiado extenso y 
tedioso, y queda horrendo. Se respeta el principio Abierto Cerrado 
implementándolo de esta manera con Decorator ya que agregar un 
ingrediente nuevo no implica cambiar los ya existentes y queda 
más ordenado y legible.
```

---

**Formato de entrega:** Código y documentación en **archivo(s) MD (Markdown)**.
