//
// Created by nicolai on 19.07.21.
//

#include "variable.h"

variable::variable(std::string name, variable_type type) : variable(name, type, 0.0) {}

variable::variable(std::string name, variable_type type, double value) : name(name), type(type), value(value) {}
