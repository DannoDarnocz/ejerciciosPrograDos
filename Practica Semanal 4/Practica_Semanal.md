| <div align="right"><img src="../../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 3 – Práctica semanal

**Contenidos:** Patrón Delegate, Manejo de excepciones.

---

## Actividad 1 (Delegate)

- Implemente `Impresora` que delegue en `IDispositivoSalida` (interfaz con `void escribir(const std::string&)`).
- Incluya dos implementaciones: `Consola` y `Archivo` (escribe en un archivo de texto).
- En `main`, cree una impresora que use primero consola y luego cambie a archivo; imprima el mismo mensaje en ambos.
```cpp 
class Impresora {
private:
    IDispositivoSalida* dispositivo;
public:
    Impresora() {
        dispositivo = nullptr;
    }
    Impresora(IDispositivoSalida* disp) {
        setDispositivo(disp);
    }
    void imprimir(string txt) {
        dispositivo->imprimir(txt);
    }
    void setDispositivo(IDispositivoSalida* disp) {
        if (disp) {
            dispositivo = disp;
        }
    }
};

class Consola : public IDispositivoSalida {
    void imprimir(string txt) override {
        cout << "Se ha escrito por consola: " << txt << endl;
    }
};

class Archivo : public IDispositivoSalida {
public:
    void imprimir(string txt) override {
        ofstream archivo("salida.txt", ios::trunc);
        if (archivo.is_open()) {
            archivo << txt << endl;
            archivo.close();
            cout << "Se ha escrito por archivo.";
            return;
        }
        cout << "No se ha podido escribir en el archivo"<<endl;
    }
};

int main() {
  IDispositivoSalida* cDisp = new Consola();
  IDispositivoSalida* aDisp = new Archivo();

  Impresora i(cDisp);
  i.imprimir("Hola, se imprime por impresora");

  i.setDispositivo(aDisp);
  i.imprimir("Hola, se imprime por impresora");
  return 0;
  }
  ```
---

## Actividad 2 (Excepciones)

- Implemente `divisionSegura(double a, double b)` que lance una excepción derivada de `std::exception` si `b == 0`.
- En `main`, llame con valores válidos e inválidos y capture la excepción mostrando el mensaje. Documente en MD por qué se captura por referencia `const`.

```cpp 
double divisionSegura(double a, double b);

int main() {
    try {
        cout << endl<< endl <<"Division de 20/5: " << divisionSegura(20,5);
        cout <<endl<< "Division de 17/0: " << divisionSegura(17,0);
    }  catch (const division_cero& e) { // la constante se usa porque no se modifica el objeto division_cero de la excepción actual, sino que solo se lee.
        cout << "Error de division entre cero. " << e.what();
    }

    return 0;
}

double divisionSegura(double a, double b) {
    if (b==0) {
        throw division_cero();
    }
    return a/b;
}
```

---

## Actividad 3 (RAII y excepciones)

- Cree una clase `Buffer` que en el constructor reserve un array de N caracteres y en el destructor lo libere.
- Simule un constructor que a veces lanza (por ejemplo, si N <= 0). Verifique que no hay fuga si se lanza. Explique en MD la relación con RAII.

---

**Formato de entrega:** Código y explicaciones en **archivo(s) MD (Markdown)**.
