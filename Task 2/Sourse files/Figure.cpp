#include "Figure.h"

Figure::Figure(std::string figureName) : name(figureName) {}

std::string Figure::get_name() const
{
    return name;
}