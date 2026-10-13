#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
std::string getSideType(double a, double b, double c);
bool isTriangleExists(double a, double b, double c);
double getPerimeter(double a, double b, double c);
double getArea(double a, double b, double c);
std::string getAngleType(double a, double b, double c);
#endif