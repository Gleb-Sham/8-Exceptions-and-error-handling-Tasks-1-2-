#include "Triangle.h"
#include "FigureError.h"
#include <iostream>

Triangle::Triangle(double a, double b, double c, double A, double B, double C, const std::string& name) : Figure(name), a(a), b(b), c(c), A(A), B(B), C(C)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        throw FigureError("Все стороны должны быть положительными");
    }
    if (A <= 0 || B <= 0 || C <= 0)
    {
        throw FigureError("Все углы должны быть положительными");
    }
    if ((A + B + C) != 180)
    {
        throw FigureError("Сумма углов не равна 180");
    }
}

Triangle::Triangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C, "Треугольник") {}

double Triangle::get_a() const { return a; }
double Triangle::get_b() const { return b; }
double Triangle::get_c() const { return c; }
double Triangle::get_A() const { return A; }
double Triangle::get_B() const { return B; }
double Triangle::get_C() const { return C; }

void Triangle::print_info() const
{
    std::cout << " (стороны " << a << ", " << b << ", " << c << ";";
    std::cout << " углы " << A << ", " << B << ", " << C << ")";
}