| <div align="right"><img src="../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 3 – Sesión 1 (Estudiantes)

**Duración:** 2 horas  
**Tema:** Patrón Delegate

---

## Explicación (resumen)

- **Delegate:** Un objeto delega parte de su comportamiento en otro. La clase delegante mantiene una referencia al delegado y le pasa las llamadas. Permite cambiar comportamiento sin modificar la clase delegante (relación con OCP).

---

## Espacio para tu código

### Ejercicio 1: Impresora y DispositivoSalida

Interfaz `IDispositivoSalida` con `void escribir(string)`. Clases `Consola` y `Archivo` que la implementan. Clase `Impresora` que recibe un `IDispositivoSalida*` y delega en él el método `imprimir(string)`.

---

### Ejercicio 2: Cambiar dispositivo en tiempo de ejecución

Añada a `Impresora` un método para cambiar el dispositivo de salida (por ejemplo `setDispositivo`). En `main` imprima primero por consola y luego “por archivo” sin crear otra Impresora.

```cpp
// Ambos ejercicios están combinados en este

class IDispositivoSalida {
public:
    virtual void escribir(string texto)=0;
    virtual ~IDispositivoSalida() = default;
};

class Consola:public IDispositivoSalida {
public:
    void escribir(string texto) override {
        cout << "Escrito a consola: " <<texto;
    }
};

class Archivo:public IDispositivoSalida {
public:
    void escribir(string texto) override {
        cout << "Escrito a archivo: " <<texto;
    }
};

class Impresora {
private:
    IDispositivoSalida* dispositivo;
public:
    void imprimir(string texto) {
        dispositivo->escribir(texto);
    }

    void setDispositivo(IDispositivoSalida* dispositivo) {
        this->dispositivo = dispositivo;
    }

    ~Impresora() = default;
};


using namespace std;
int main() {
    Impresora impresora;
    Archivo archivo;
    Consola consola;

    impresora.setDispositivo(&archivo);
    impresora.imprimir("Hola, esto se muestra con el dispositivo archivo seleccionado");
    cout << endl<< endl;
    impresora.setDispositivo(&consola);
    impresora.imprimir("Hola, esto se muestra con el dispositivo consola seleccionado");

}

```

---

## Criterios de validación (para el profesor)

- [ ] Impresora solo llama a dispositivo->escribir(...)
- [ ] Uso de `using namespace std;`
