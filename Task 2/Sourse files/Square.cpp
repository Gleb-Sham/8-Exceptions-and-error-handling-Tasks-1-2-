#include "Square.h"
#include "FigureError.h"

Square::Square(double a) : Rectangl(a, a)
{
    name = "Квадрат";
    if (this->a != this->b || this->b != this->c || this->c != this->d)
    {
        throw FigureError("Все стороны должны быть равны");
    }
}