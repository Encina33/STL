#Colección de Ejercicios: STL
https://github.com/Encina33/STL.git

# **Ejercicios de Espacios de Nombres y STL**

Este proyecto contiene una serie de ejercicios diseñados para ilustrar el uso de espacios de nombres, clases, subespacios de nombres y contenedores de la STL (Standard Template Library) en C++. Cada ejercicio aborda un concepto clave y proporciona ejemplos prácticos.

---

## **Ejercicio 1: Utilización completa de un espacio de nombres**

### **Descripción**
Se define un espacio de nombres `Matematicas` que contiene dos funciones (`suma` y `resta`). Estas funciones se utilizan desde la función `main`.

### **Código**
```cpp
namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
}

int main() {
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    return 0;
}
Suma: 8
Resta: 2


## **Ejercicio 1: Utilización completa de un espacio de nombres**

### **Descripción**
En este ejercicio, el espacio de nombres `Geometria` se utiliza para definir funciones relacionadas con cálculos geométricos. Estas funciones se dividen en dos archivos separados: `triangulo.cpp` y `circulo.cpp`. Cada archivo implementa una función específica del espacio de nombres:

- `calcularAreaTriangulo`: Calcula el área de un triángulo dados la base y la altura.
- `calcularAreaCirculo`: Calcula el área de un círculo dado el radio.

En el archivo `main.cpp`, se invocan estas funciones para mostrar los resultados.

---

### **Archivos del ejercicio**

#### **triangulo.cpp**
```cpp
namespace Geometria {
    double calcularAreaTriangulo(double base, double altura) {
        return (base * altura) / 2;
    }
}


namespace Geometria {
    double calcularAreaCirculo(double radio) {
        return 3.14 * radio * radio;
    }
}



#include <iostream>

// Declaraciones de las funciones
namespace Geometria {
    double calcularAreaTriangulo(double base, double altura);
    double calcularAreaCirculo(double radio);
}

int main() {
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    return 0;
}


markdown
Copiar código
## **Ejercicio 2: Espacio de nombres repartido entre diferentes archivos**

### **Descripción**
En este ejercicio, el espacio de nombres `Geometria` se utiliza para definir funciones relacionadas con cálculos geométricos. Estas funciones se dividen en dos archivos separados: `triangulo.cpp` y `circulo.cpp`. Cada archivo implementa una función específica del espacio de nombres:

- `calcularAreaTriangulo`: Calcula el área de un triángulo dados la base y la altura.
- `calcularAreaCirculo`: Calcula el área de un círculo dado el radio.

En el archivo `main.cpp`, se invocan estas funciones para mostrar los resultados.

---

### **Archivos del ejercicio**

#### **triangulo.cpp**
```cpp
namespace Geometria {
    double calcularAreaTriangulo(double base, double altura) {
        return (base * altura) / 2;
    }
}
circulo.cpp
cpp
Copiar código
namespace Geometria {
    double calcularAreaCirculo(double radio) {
        return 3.14 * radio * radio;
    }
}
main.cpp
cpp
Copiar código
#include <iostream>

// Declaraciones de las funciones
namespace Geometria {
    double calcularAreaTriangulo(double base, double altura);
    double calcularAreaCirculo(double radio);
}

int main() {
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    return 0;
}
Explicación del flujo
Definición de funciones:

Cada archivo (triangulo.cpp y circulo.cpp) define una función específica dentro del espacio de nombres Geometria.
Declaraciones en main.cpp:

En el archivo main.cpp, se declaran las funciones calcularAreaTriangulo y calcularAreaCirculo utilizando el espacio de nombres Geometria.
Ejecución en main:

Se llaman las funciones del espacio de nombres y se muestran los resultados en la consola.


## **Ejercicio 3: Relación entre clase y espacio de nombres**

### **Descripción**
En este ejercicio, se define una clase llamada `Circulo` dentro del espacio de nombres `Geometria`. Esta clase incluye dos métodos:

- `calcularArea`: Calcula el área del círculo usando la fórmula \( \pi \times r^2 \).
- `calcularPerimetro`: Calcula el perímetro del círculo usando la fórmula \( 2 \times \pi \times r \).

Desde la función `main`, se crea un objeto de la clase `Circulo` y se llaman sus métodos para mostrar el área y el perímetro del círculo en la consola.

---

### **Código**

```cpp
#include <iostream>

namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
        // Constructor para inicializar el radio
        Circulo(double r) : radio(r) {}

        // Método para calcular el área del círculo
        double calcularArea() {
            return 3.14 * radio * radio;
        }

        // Método para calcular el perímetro del círculo
        double calcularPerimetro() {
            return 2 * 3.14 * radio;
        }
    };
}

int main() {
    // Crear un objeto de la clase Circulo
    Geometria::Circulo c(5);

    // Mostrar el área y el perímetro del círculo
    std::cout << "Area: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;

    return 0;
}







## **Ejercicio 4: Declaración de subespacios de nombres**

### **Descripción**
En este ejercicio, se crea un espacio de nombres `Ciencia` que contiene un subespacio `Fisica`. Dentro de `Fisica` se define:

- Una constante `c`, que representa la velocidad de la luz (en metros por segundo).
- Una función `calcularEnergia`, que calcula la energía utilizando la ecuación \( E = mc^2 \).

Desde la función `main`, se utiliza el subespacio de nombres para calcular la energía de un objeto con una masa dada.

---

### **Código**

```cpp
#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458; // Velocidad de la luz en m/s

        // Función para calcular energía
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}

int main() {
    // Calcular la energía de un objeto de 10 kg
    double masa = 10; // en kilogramos
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(masa) << " J" << std::endl;

    return 0;
}







#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {
    // Vector: Lista dinámica
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6); // Agregar un elemento

    // Imprimir elementos del vector
    std::cout << "Elementos en el vector: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Map: Almacena pares clave-valor
    std::map<std::string, int> edades;
    edades["Juan"] = 25;
    edades["Ana"] = 30;
    edades.erase("Juan"); // Eliminar una clave

    // Imprimir elementos del map
    std::cout << "Elementos en el map: ";
    for (const auto& [nombre, edad] : edades) {
        std::cout << nombre << ":" << edad << " ";
    }
    std::cout << std::endl;

    // Set: Almacena valores únicos
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6); // Insertar un valor
    conjunto.erase(1); // Eliminar un valor

    // Imprimir elementos del set
    std::cout << "Elementos en el set: ";
    for (int num : conjunto) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}











