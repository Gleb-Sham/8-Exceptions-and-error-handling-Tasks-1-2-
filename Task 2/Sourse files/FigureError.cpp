#include "FigureError.h"

FigureError::FigureError(const std::string& reason) : std::domain_error(reason) {}