| <div align="right"><img src="../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 4 – Sesión 2 (Estudiantes)

**Duración:** 2 horas  
**Tema:** Patrón Decorator

---

## Explicación (resumen)

- **Decorator:** Añade responsabilidades a un objeto envolviéndolo. El decorador implementa la misma interfaz que el componente y delega en el objeto envuelto, añadiendo comportamiento antes o después. Evita explosión de subclases.

---

## Espacio para tu código

### Ejercicio 1: Café y decoradores

Interfaz `ICafe` con `double costo()` y `string descripcion()`. Clase concreta `CafeSimple`. Decorador base que envuelve `ICafe*`. Al menos dos decoradores (por ejemplo `ConLeche`, `ConAzucar`) que sumen costo y modifiquen la descripción. En `main` componga un café con leche y azúcar y muestre costo total y descripción.

```
class ICafe {
public:
    virtual double precio() const = 0;
    virtual string descripcion() const = 0;
};


class CafeSimple : public ICafe {
    double precio() const override {
        return 10;
    }
    string descripcion() const override {
        return "Cafe";
    }
};

class ICafeDecorador : public ICafe {
protected:
    ICafe* b;
public:
    ICafeDecorador(ICafe* b){ this->b=b; };
    virtual ~ICafeDecorador() {
        delete b;
    }
};

class Leche : public ICafeDecorador {
public:
    Leche(ICafe* b):ICafeDecorador(b){}
    string descripcion() const override{
        return b->descripcion() + " + Leche";
    }
    double precio() const override{
        return b->precio() + 5;
    }
};

class Azucar : public ICafeDecorador {
public:
    Azucar(ICafe* b):ICafeDecorador(b){}
    string descripcion() const override{
        return b->descripcion() + " + Azucar";
    }
    double precio() const override{
        return b->precio() + 3.5;
    }
};

int main() {
    ICafe* cafe = new CafeSimple();
    cout << cafe->descripcion() << " con precio $"<< cafe->precio() << endl;

    cafe = new Azucar(cafe);
    cout << cafe->descripcion() << " con precio $"<< cafe->precio() << endl;

    cafe = new Leche(cafe);
    cout << cafe->descripcion() << " con precio $"<< cafe->precio() << endl;
}
```

### Ejercicio 2: Diagrama

En papel o en texto (ASCII), dibuje la relación entre componente, decorador base y dos decoradores concretos. Indique “envuelve” (composición).

```
     Componente
          ↑ (envuelve)
     Decorador base
    ↑		    ↑
Decorador		Decorador
concreto 1		concreto 2

```

---

## Criterios de validación (para el profesor)

- [ ] Misma interfaz en componente y decoradores
- [ ] Uso de `using namespace std;`
