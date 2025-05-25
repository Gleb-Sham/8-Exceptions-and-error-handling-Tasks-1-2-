#include "IsoscelesTriangle.h"
#include "FigureError.h"

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A, "Равнобедренный треугольник")
{
    if (this->a != this->c)
    {
        throw FigureError("Стороны a и c должны быть равны");
    }
    if (this->A != this->C)
    {
        throw FigureError("Углы A и C должны быть равны");
    }
}