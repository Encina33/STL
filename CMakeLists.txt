cmake_minimum_required(VERSION 3.29)
project(STL)
project(STL2)
project(STL3)
project(STL4)
project(STL5)

set(CMAKE_CXX_STANDARD 20)

add_executable(STL
        Ejercicio1/main.cpp
)
add_executable(STL2
        Ejercicio2/main.cpp
        Ejercicio2/geometria.h
        Ejercicio2/circulo.cpp
        Ejercicio2/triangulo.cpp
)
add_executable(STL3
        Ejercicio3/main.cpp
)
add_executable(STL4
        Ejercicio4/main.cpp
)
add_executable(STL5
        Ejercicio5/main.cpp
)








