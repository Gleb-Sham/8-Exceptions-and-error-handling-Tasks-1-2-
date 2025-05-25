#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"
#include <string>

class Triangle : public Figure
{
protected:
    double a, b, c;
    double A, B, C;
    Triangle(double a, double b, double c, double A, double B, double C, const std::string& name);

public:
    Triangle(double a, double b, double c, double A, double B, double C);
    double get_a() const;
    double get_b() const;
    double get_c() const;
    double get_A() const;
    double get_B() const;
    double get_C() const;
    void print_info() const override;
};

#endif