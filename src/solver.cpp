//
// Created by nicolai on 19.07.21.
//

#include "solver.h"
#include <fstream>
#include <iostream>
#include <algorithm>

solving_status solver::solve() {
  return optimal;
}

void solver::build_from_lp_file(std::string lp_file) {
  std::ifstream f;
  f.open(lp_file);
  std::string buffer;
  std::cout << "Reading file " << lp_file << std::endl;
  while(std::getline(f, buffer)) {
    if (buffer.empty()) continue;
    std::transform(buffer.begin(), buffer.end(), buffer.begin(), [](unsigned char &ch){return std::tolower(ch);});
    int reading_status = 0;
    switch (reading_status) {
      case 0:
        // reading objective function
        break;
      case 1:
        // reading constraints
        break;
      case 2:
        // reading bounds
        break;
      case 3:
        // reading
    }
  }
  f.close();
}
