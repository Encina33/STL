//
// Created by Maria Encina on 03/12/2024.
//
#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}

int main() {
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;
    return 0;
}