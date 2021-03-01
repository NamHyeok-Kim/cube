cmake_minimum_required(VERSION 3.17)
project(cube)

set(CMAKE_CXX_STANDARD 14)

add_executable(cube cube/e_3/tomato.cpp cube/algorithm/trees_parents.cpp cube/algorithm/tree_traversal.cpp)
include_directories(cube cube/)
