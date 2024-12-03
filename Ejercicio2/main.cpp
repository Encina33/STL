//
// Created by Maria Encina on 02/12/2024.
//
#include <iostream>
#include "geometria.h"


int main() {
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    return 0;
}
