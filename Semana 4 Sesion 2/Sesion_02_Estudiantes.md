| <div align="right"><img src="../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 3 – Sesión 2 (Estudiantes)

**Duración:** 2 horas  
**Tema:** Manejo de excepciones

---

## Explicación (resumen)

- **Excepciones:** `try`, `throw`, `catch`. Use excepciones estándar (`std::exception`, `std::runtime_error`) o derivadas. Capturar por referencia `const`. No lanzar en destructores.
- **RAII:** Recurso adquirido en constructor, liberado en destructor; si el constructor lanza, el destructor no se llama para ese objeto (los miembros sí se destruyen).

---

## Espacio para tu código

### Ejercicio 1: divisionSegura y catch

Función `divisionSegura(double a, double b)` que lance una excepción adecuada si `b == 0`. En `main` capture la excepción y muestre un mensaje.

```cpp
class division_cero : public std::exception {
protected:
    string msg;
public:
    division_cero() {
        this->msg = "Error: No se puede dividir entre cero.";
    }
    division_cero(string msg) {
        this->msg = msg;
    }
    string getMsg() {
        return msg;
    }
};

double divisionSegura(double a, double b);
using namespace std;

int main() {
try {
cout << endl<< endl <<"Division de 20/5: " << divisionSegura(20,5);
cout <<endl<< "Division de 17/0: " << divisionSegura(17,0);
}  catch (const division_cero& e) {
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

### Ejercicio 2: Jerarquía de excepciones

Una clase base de excepción y dos derivadas. Lance cada tipo desde funciones distintas y use varios `catch` para manejarlas por tipo.

```cpp

class error_matematico : public std::exception {
protected:
    string msg;
public:
    error_matematico() {
        msg="Error matematico";
    };
    error_matematico(string msg) {
        this->msg = msg;
    };
    string mensaje() {
        return msg;
    }
};

class error_negativo : public error_matematico {
    public:
    error_negativo():error_matematico("Valor negativo inválido"){};
};

class division_cero : public error_matematico {
protected:
    string msg;
public:
    division_cero() {
        this->msg = "Error: No se puede dividir entre cero.";
    }
    division_cero(string msg) {
        this->msg = msg;
    }
    string getMsg() {
        return msg;
    }
};

double divisionSegura(double a, double b);
double raiz(double a);
using namespace std;

int main() {
    try {
        cout << endl<< endl <<"Division de 20/5: " << divisionSegura(20,5);
        cout <<endl<< "Division de 17/0: " << divisionSegura(17,0);
    }  catch (const division_cero& e) {
        cout << "Error de division entre cero. " << e.what();
    } catch (const error_negativo& e) {
        cout << "Error de negativos. " << e.what();
    }

    try {
        cout << endl<< endl <<"Raiz de 80: " << raiz(80);
        cout << endl <<"Raiz de 9: " << raiz(9);
        cout <<endl<< "Raiz de -18: " << raiz(-17);
    }  catch (const division_cero& e) {
        cout << "Error de division entre cero. " << e.what();
    } catch (const error_negativo& e) {
        cout << "Error de negativos. " << e.what();
    }


    return 0;
}

double divisionSegura(double a, double b) {
    if (b==0) {
        throw division_cero();
    }
    return a/b;
}

double raiz(double a) {
    if (a<0) {
        throw error_negativo();
    }
    return pow(a,0.5);
}
```

### Ejercicio 3: RAII

Clase que en el constructor reserve un recurso (por ejemplo array dinámico) y en el destructor lo libere. En un caso de error en el constructor lance excepción; comente por qué el destructor del objeto no se ejecuta pero no hay fuga si los miembros son objetos automáticos.

```cpp
// Clase con new en constructor y delete en destructor; opcional throw en constructor

```

---

## Criterios de validación (para el profesor)

- [ ] Captura por referencia (const exception&)
- [ ] Uso de `using namespace std;`
