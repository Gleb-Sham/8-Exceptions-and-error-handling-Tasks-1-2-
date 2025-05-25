#include "EquilateralTriangle.h"
#include "FigureError.h"

EquilateralTriangle::EquilateralTriangle(double a) : Triangle(a, a, a, 60, 60, 60, "Равносторонний треугольник")
{
    if (this->a != this->b || this->b != this->c)
    {
        throw FigureError("Все стороны должны быть равны");
    }
    if (A != 60 || B != 60 || C != 60)
    {
        throw FigureError("Все углы должны быть равны 60");
    }
}