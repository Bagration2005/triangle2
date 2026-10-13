#include <iostream>
#include "triangle.h"

int main() {
    double a, b, c;
    std::cout << "Введите стороны треугольника: ";
    std::cin >> a >> b >> c;

    if (isTriangleExists(a, b, c)) {
        std::cout << "Треугольник существует" << std::endl;
    } else {
        std::cout << "Треугольник не существует" << std::endl;
    }
    return 0;
}