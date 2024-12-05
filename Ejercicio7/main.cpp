//
// Created by Maria Encina on 05/12/2024.
//
#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Por favor, proporciona un argumento de texto.\n";
        return 1;
    }

    std::ofstream file;
    file.open("example.txt");
    if (file) {
        file << argv[1];
        std::cout << "El texto se guardó correctamente.\n";
    } else {
        std::cerr << "No se pudo abrir el archivo.\n";
    }
    file.close();
    return 0;
}