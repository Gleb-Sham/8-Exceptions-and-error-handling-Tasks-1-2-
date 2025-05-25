#include <iostream>
#include <Windows.h>

#include "FigureError.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangl.h"
#include "Rhombus.h"
#include "Square.h"

void print_info(const Figure* figure) { figure->print_info(); }

void create_and_print_figure(Figure* (*creator)(), const std::string& figure_name)
{
    try
    {
        Figure* figure = creator();
        std::cout << figure_name;
        print_info(figure);
        std::cout << " создан\n\n";
        delete figure;
    }
    catch (const FigureError& e)
    {
        std::cout << "Ошибка создания фигуры " << '"' << figure_name << '"' << ". Причина: " << e.what() << std::endl;
        std::cout << std::endl;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    create_and_print_figure([]() -> Figure* { return new Triangle(10, 20, 30, 50, 60, 70); }, "Треугольник");
    create_and_print_figure([]() -> Figure* { return new RightTriangle(10, 20, 30, 50, 60); }, "Прямоугольный треугольник");
    create_and_print_figure([]() -> Figure* { return new IsoscelesTriangle(10, 20, 50, 60); }, "Равнобедренный треугольник");
    create_and_print_figure([]() -> Figure* { return new EquilateralTriangle(30); }, "Равносторонний треугольник");
    create_and_print_figure([]() -> Figure* { return new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80); }, "Четырёхугольник");
    create_and_print_figure([]() -> Figure* { return new Rectangl(10, 20); }, "Прямоугольник");
    create_and_print_figure([]() -> Figure* { return new Square(20); }, "Квадрат");
    create_and_print_figure([]() -> Figure* { return new Parallelogram(20, 30, 30, 40); }, "Параллелограмм");
    create_and_print_figure([]() -> Figure* { return new Rhombus(30, 30, 40); }, "Ромб");

    return EXIT_SUCCESS;
}