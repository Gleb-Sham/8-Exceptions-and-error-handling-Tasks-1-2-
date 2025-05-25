#include "Rhombus.h"
#include "FigureError.h"

Rhombus::Rhombus(double a, double A, double B) : Parallelogram(a, a, A, B)
{
    name = "Ромб";
    if (this->a != this->b || this->b != this->c || this->c != this->d)
    {
        throw FigureError("Все стороны должны быть равны");
    }
}