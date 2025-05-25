#ifndef FIGURE_ERROR_H
#define FIGURE_ERROR_H

#include <stdexcept>
#include <string>

class FigureError : public std::domain_error
{
public:
    FigureError(const std::string& reason);
};

#endif