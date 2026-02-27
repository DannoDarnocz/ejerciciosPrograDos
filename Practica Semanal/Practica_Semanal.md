| <div align="right"><img src="../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 1 – Práctica semanal

**Contenidos:** Relaciones (repaso), Upcast, Downcast, Dependencia mutua.

---

## Actividad 1 (relaciones y upcast)

- Defina una jerarquía: `Animal` (base) → `Mamifero` → `Perro`.
- En `main`, cree un `Perro` y asígnelo a `Animal*` y a `Mamifero*`. Llame un método definido en `Animal` desde cada puntero.
- Justifique en el archivo MD qué tipo de relación existe entre las clases y por qué el upcast es seguro.
  ```cpp
  #include <iostream>
  using namespace std;
  
  class Animal {
  public:
  virtual void tipo() {cout<<"soy un animal, wow"<<endl;};
  };
  
  class Mamifero :public Animal {
  public:
  void tipo() override {cout<<"soy un mamifero, wow"<<endl;};
  };
  
  class Perro: public Mamifero {
  public:
  void tipo() override {cout<<"soy un perro, guau"<<endl;};
  void ladrar(){cout<<"GUAU!!!"<<endl;
  };
  
  int main() {
  // animal se deriva a mamifero y mamifero a perro.
  // cada uno tiene el metodo "tipo" pero actúa de manera diferente
  // el upcast es seguro porque no hay métodos o atributos que no existan en la nueva clase (pasando de la derivada a la padre) a diferencia del downcast
  Perro p1;
  p1.tipo();
  Mamifero* m1=&p1;
  m1->tipo();
  Animal* a1=m1;
  a1->tipo();
  // en este caso todos dicen "soy un perro, guau" porque es un metodo virtual y sigue siendo un perro pero asignado a sus respectivas clases padre (upcast)
  }
  ```
---

## Actividad 2 (downcast)

- Con la jerarquía anterior, tenga un `Animal*` que en tiempo de ejecución apunte a un `Perro`.
- Use `dynamic_cast` a `Perro*` y, si el cast tiene éxito, llame un método específico de `Perro`. Si falla, imprima un mensaje.
- Pruebe también con un `Animal*` que apunte a un `Mamifero` (no a `Perro`) y compruebe que el downcast a `Perro*` falla.
  ```cpp
  // agregando esto al mismo main de antes
  
  Perro p2;
  Animal* a2 = &p2;
  Perro* p2ptr = nullptr;
  
  if (p2ptr=dynamic_cast<Perro*>(a2)) {
  p2ptr->ladrar();
  }
  else {
  cout<<"No soy perro, no puedo ladrar"<<endl;
  }
  
  Mamifero m2;
  Animal* a3 = &m2;

  Perro* p3ptr = nullptr;
  if (p3ptr=dynamic_cast<Perro*>(a3)) {
      p3ptr->ladrar();
  }
  else {
      cout<<"No soy perro, no puedo ladrar"<<endl;
  }
  ```

---

## Actividad 3 (dependencia mutua)

- Modele `Autor` (tiene nombre y lista de `Libro*`) y `Libro` (tiene título y `Autor*`).
- Use forward declarations en los headers y defina los métodos en .cpp para evitar dependencias circulares.
- Entregue los archivos .h, .cpp y un breve párrafo en MD explicando la solución.

---

**Formato de entrega:** Código en los archivos correspondientes y respuestas/explicaciones en **archivo(s) MD (Markdown)**.
