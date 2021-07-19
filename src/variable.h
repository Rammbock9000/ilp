//
// Created by nicolai on 19.07.21.
//

#ifndef ILP_VARIABLE_H
#define ILP_VARIABLE_H

#include <string>

enum variable_type {
  real,
  integer
};

class variable {
public:
  variable(std::string name, variable_type type);
  variable(std::string name, variable_type type, double value);

  double value;
  variable_type type;
  std::string name;
};


#endif //ILP_VARIABLE_H
