#include "Rectangl.h"
#include "FigureError.h"

Rectangl::Rectangl(double a, double b) : Parallelogram(a, b, 90, 90)
{
    name = "Прямоугольник";
    if (A != 90 || B != 90 || C != 90 || D != 90)
    {
        throw FigureError("Все углы должны быть равны 90");
    }
}