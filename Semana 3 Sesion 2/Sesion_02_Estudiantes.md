| <div align="right"><img src="../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 2 – Sesión 2 (Estudiantes)

**Duración:** 2 horas  
**Tema:** Principios informales (KISS, YAGNI) y formales (SOLID)

---

## Explicación (resumen)

- **KISS:** Mantener soluciones simples. **YAGNI:** No implementar lo que aún no se necesita.
- **SOLID:** S (una responsabilidad), O (abierto/cerrado), L (Liskov), I (interfaces segregadas), D (inversión de dependencias).

---

## Espacio para tu código

### Ejercicio 1: Responsabilidad única

Dos clases: una que solo calcula (por ejemplo precio con IVA) y otra que solo imprime. No mezcle cálculo e impresión en una sola clase.

```cpp
class calculadora {
public:
    static double calcularIVA(double precio) {
        return precio*0.13;
    };

    static double calcularPrecio(double precio) {
        return precio+calcularIVA(precio);
    };
};

class ImpresoraFactura {
public:
    void imprimir(double precio) {
        cout  << "Precio: "  << precio  << endl
            << "IVA:" << calculadora::calcularIVA(precio)  << endl
            << "Total:" << calculadora::calcularPrecio(precio);
    }
};

int main() {
    ImpresoraFactura impresora;
    impresora.imprimir(900);
    return 0;
}
```

### Ejercicio 2: Abierto/cerrado con herencia

Interfaz `Notificador` con `enviar(string)`. Al menos una implementación (por ejemplo Consola). Otra clase que extienda sin modificar el código existente.

```cpp
class INotificador {
public:
    virtual void enviar(string) = 0;
    virtual ~INotificador() = default;
};

class notificadorArchivo : public INotificador {
public:
    void enviar(string texto) override {
        cout << "Se notifica lo siguiente por medio de archivo: " << texto << endl;
    }
};

class notificadorConsola : public INotificador {
public:
    void enviar(string texto) override {
        cout << "Se notifica lo siguiente por medio de consola: " << texto << endl;
    }
};

int main() {
    notificadorConsola nConsola;
    nConsola.enviar("HOLA, esto es por consola!");

    cout << endl;
    notificadorArchivo nArchivo;
    nArchivo.enviar("HOLA, esto es por consola!");
}
```

### Ejercicio 3: Liskov – Figura, Rectangulo, Cuadrado

Jerarquía donde las derivadas pueden sustituir a la base sin romper el contrato. Use `Figura` (abstracta) con `area()` y derive `Rectangulo` y `Cuadrado`. Constructores con asignación en el cuerpo (no `ancho(a), alto(h)`).

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

int main() {
    Calculadora calc;
    IOperacion* op = new Suma();
    calc.setOperacion(op);
    cout << calc.ejecutarOperacion(7,2);

    Figura* fig1 = new Rectangulo(10,9);
    Figura* fig2 = new Cuadrado(5);
}
```

---

## Criterios de validación (para el profesor)

- [ ] SOLID aplicado en al menos un ejemplo
- [ ] Constructores sin sintaxis tipo `b(base), h(alt)` en herencias
- [ ] Uso de `using namespace std;`
