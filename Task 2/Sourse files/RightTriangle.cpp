#include "RightTriangle.h"
#include "FigureError.h"

RightTriangle::RightTriangle(double a, double b, double c, double A, double B) : Triangle(a, b, c, A, B, 90, "Прямоугольный треугольник")
{
	if (C != 90)
	{
		throw FigureError("Угол C должен быть равен 90");
	}
}