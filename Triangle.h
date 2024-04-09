#pragma once
#include "Figure.h"
#include "GeometryException.h"

class Triangle : public Figure
{
protected:

    double a, b, c;
    double A, B, C;

public:

    Triangle(double a, double b, double c, double A, double B, double C);
    void print() override;
};