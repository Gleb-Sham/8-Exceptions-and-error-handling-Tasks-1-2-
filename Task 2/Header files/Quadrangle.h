#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#include "Figure.h"
#include <string>

class Quadrangle : public Figure
{
protected:
    double a, b, c, d;
    double A, B, C, D;
    Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D, const std::string name);

public:
    Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);
    double get_a() const;
    double get_b() const;
    double get_c() const;
    double get_d() const;
    double get_A() const;
    double get_B() const;
    double get_C() const;
    double get_D() const;
    void print_info() const override;
};

#endif