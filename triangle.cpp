#include "triangle.h"
#include <algorithm> 

std::string getAngleType(double a, double b, double c) {
    double max_side = std::max({a, b, c});
    double sum_sq = 0;
    if (max_side == a) sum_sq = b*b + c*c;
    else if (max_side == b) sum_sq = a*a + c*c;
    else sum_sq = a*a + b*b;

    double max_sq = max_side * max_side;

    if (max_sq == sum_sq) return "прямоугольный";
    if (max_sq < sum_sq) return "остроугольный";
    return "тупоугольный";
}
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
std::string getSideType(double a, double b, double c) {
    if (a == b && b == c) return "равносторонний";
    if (a == b || b == c || a == c) return "равнобедренный";
    return "разносторонний";
}