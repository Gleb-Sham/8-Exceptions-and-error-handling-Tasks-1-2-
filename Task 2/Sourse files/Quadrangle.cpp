#include "Quadrangle.h"
#include "FigureError.h"
#include <iostream>

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D, const std::string name) : Figure(name), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D)
{
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0)
    {
        throw FigureError("Все стороны должны быть положительными");
    }
    if (A <= 0 || B <= 0 || C <= 0 || D <= 0)
    {
        throw FigureError("Все углы должны быть положительными");
    }
    if ((A + B + C + D) != 360)
    {
        throw FigureError("Сумма углов не равна 360");
    }
}

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrangle(a, b, c, d, A, B, C, D, "Четырёхугольник") {}

double Quadrangle::get_a() const { return a; }
double Quadrangle::get_b() const { return b; }
double Quadrangle::get_c() const { return c; }
double Quadrangle::get_d() const { return d; }
double Quadrangle::get_A() const { return A; }
double Quadrangle::get_B() const { return B; }
double Quadrangle::get_C() const { return C; }
double Quadrangle::get_D() const { return D; }

void Quadrangle::print_info() const
{
    std::cout << " (стороны " << a << ", " << b << ", " << c << ", " << d << ";";
    std::cout << " углы " << A << ", " << B << ", " << C << ", " << D << ")";
}