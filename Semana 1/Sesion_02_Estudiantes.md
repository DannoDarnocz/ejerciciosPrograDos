| <div align="right"><img src="../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 1 – Sesión 2 (Estudiantes)

**Duración:** 2 horas  
**Tema:** Downcast y Dependencia mutua

---

## Explicación (resumen)

- **Downcast:** Conversión de base a derivada; no siempre segura. Use `dynamic_cast` y compruebe resultado (por ejemplo `!= nullptr`).
- **Dependencia mutua:** Dos clases que se referencian entre sí. Solución: declaración adelantada (`forward declaration`) y definir métodos en .cpp.

---

## Espacio para tu código

### Ejercicio 1: dynamic_cast

Partiendo de `Vehiculo`/`Automovil`, tome un `Vehiculo*` que apunte a un `Automovil`. Use `dynamic_cast` a `Automovil*` y compruebe si el cast tuvo éxito antes de usar el puntero.

```cpp
class Vehiculo {
public:
    Vehiculo() {
        cout << "vehiculo creado"<<endl;
    }
    virtual ~Vehiculo() {}
};

class Automovil : public Vehiculo{
public:
    Automovil() {
        cout << "automovil creado"<<endl;
    }
    virtual ~Automovil() {}
};

Automovil a2;
Vehiculo* v2 = &a2;
Automovil* a2ptr = dynamic_cast<Automovil*>(v2);
```

### Ejercicio 2: Downcast fallido

Pruebe con un `Vehiculo*` que apunte a un objeto que **no** sea `Automovil`. Compruebe que `dynamic_cast<Automovil*>` devuelve `nullptr`.

```cpp
class Barco : public Vehiculo{
public:
    Barco() {
        cout << "barco creado"<<endl;
    }
    virtual ~Barco() {}
};

Barco barco1;
Vehiculo* vBarco1 = &barco1;
if (Automovil* prueba = dynamic_cast<Automovil*>(vBarco1)) {
    cout << "Se ha realizado downcast con exito" << endl<< endl;
}
else {
    cout << "No se pudo hacer downcast" << endl<< endl;
}
```

### Ejercicio 3: Dependencia mutua (Estudiante y Curso)

Dos clases: `Estudiante` (tiene `Curso*`) y `Curso` (tiene `Estudiante*`). Use forward declaration y defina los métodos en el mismo archivo o en .cpp para evitar dependencias circulares.

```cpp
class Curso;
class Estudiante {
private:
    string id;
public:
    Estudiante(string id):id(id){};
    string getId() {
        return id;
    }
};

class Estudiante;
class Curso {
private:
    string id;
public:
    Curso(string id):id(id){};
    string getId() {
        return id;
    }
};


Estudiante e1("pepito");
Curso c1("126");
cout << e1.getId()<< endl<< c1.getId();
```

---

## Criterios de validación (para el profesor)

- [ ] Uso de `dynamic_cast` y comprobación de `nullptr`
- [ ] Forward declaration y definiciones que evitan dependencia circular
- [ ] Uso de `using namespace std;`
