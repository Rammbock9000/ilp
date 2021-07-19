cmake_minimum_required(VERSION 3.10)
project(ILP)

# minimum cmake version
set(CMAKE_CXX_STANDARD 17)

# link graphics library
include_directories(/usr/lib/)

# list all files
add_executable(ILP src/main.cpp src/solver.cpp src/solver.h src/variable.cpp src/variable.h)
