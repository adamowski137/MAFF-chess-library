cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(maff-chess-library)

add_library(
    moves
    src/FigureMoves.hpp
    src/FigureMoves.cpp
)

add_executable(main src/main.cpp)

target_link_libraries(main PRIVATE moves)
