#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "RightTriangle.h"

RightTriangle::RightTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C)
{
    name = "Прямоугольный треугольник";

    if (C != 90)
    {
        throw GeometryException("угол C не равен 90 ");
    }

}
#endif