#include <iostream>

#include "solver.h"

int main () {

  solver s;
  s.build_from_lp_file("lp_test_file.lp");

  return 0;
}