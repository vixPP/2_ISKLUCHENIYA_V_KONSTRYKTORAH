cmake_minimum_required(VERSION 3.18)

project("Class hierarchy")

add_executable(Class_hierarchy source.cpp Figure.cpp Figure.h Triangle.cpp Triangle.h RightTriangle.cpp RightTriangle.h EquilateralTriangle.cpp EquilateralTriangle.h 
IsoscelesTriangle.cpp IsoscelesTriangle.h Parallelogram.cpp Parallelogram.h Quadrangle.cpp Quadrangle.h Rectangle.cpp Rectangle.h Rhomb.cpp Rhomb.h Square.cpp Square.h 
GeometryException.cpp GeometryException.h)