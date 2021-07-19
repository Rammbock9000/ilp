//
// Created by nicolai on 19.07.21.
//

#ifndef ILP_SOLVER_H
#define ILP_SOLVER_H

#include "variable.h"
#include <vector>
#include <string>

enum solving_status {
  optimal,
  unbound,
  infeasible
};

/*!
 * maximize c^T * x
 * w.r.t.
 * A * x <= b
 * x >= 0
 * x can consist of integers
 */
class solver {
public:
  solver() = default;

  void build_from_lp_file(std::string lp_file);
  solving_status solve();

  std::vector<variable> x;
  std::vector<std::vector<double>> A;
  std::vector<double> b;
  std::vector<double> c;
};


#endif //ILP_SOLVER_H
