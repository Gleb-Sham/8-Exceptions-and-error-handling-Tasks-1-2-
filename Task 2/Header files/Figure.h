#ifndef FIGURE_H
#define FIGURE_H

#include <string>

class Figure
{
protected:
    std::string name;
    Figure(std::string figureName);

public:
    virtual ~Figure() = default;
    std::string get_name() const;
    virtual void print_info() const = 0;
};

#endif