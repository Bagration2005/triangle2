#include <iostream>
#include <iomanip>
#include <string>
#include "triangle.h"

int main() {
    double a, b, c;
    std::cout << "Введите длины трех сторон треугольника: ";
    std::cin >> a >> b >> c;

    if (isTriangleExists(a, b, c)) {
        std::string sideType = getSideType(a, b, c);
        
        std::cout << "Треугольник существует, он " << angleType;
        if (sideType != "разносторонний") {
             std::cout << " (и " << sideType << ")";
        }
        std::cout << "." << std::endl;

        std::cout << "Периметр равен " << getPerimeter(a, b, c) << std::endl;
        
        std::cout << std::fixed << std::setprecision(3);
        std::cout << "Площадь равна " << getArea(a, b, c) << std::endl;
    } else {
        std::cout << "Треугольник с такими сторонами не существует." << std::endl;
    }

    return 0;
}