#include "triangle.h"

bool isTriangleExists(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}
double getPerimeter(double a, double b, double c) {
    return a + b + c;
}
double getArea(double a, double b, double c) {
    double p = getPerimeter(a, b, c) / 2.0;
    return std::sqrt(p * (p - a) * (p - b) * (p - c));
}