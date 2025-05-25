#include "Parallelogram.h"
#include "FigureError.h"

Parallelogram::Parallelogram(double a, double b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B, "Параллелограмм")
{
    if (this->a != this->c || this->b != this->d)
    {
        throw FigureError("Стороны a,c и b,d должны быть попарно равны");
    }
    if (this->A != this->C || this->B != this->D)
    {
        throw FigureError("Углы A,C и B,D должны быть попарно равны");
    }
}