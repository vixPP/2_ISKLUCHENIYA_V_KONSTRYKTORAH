#pragma once
#include "Figure.h"
#include "GeometryException.h"

class Quadrangle : public Figure
{
protected:

    double a, b, c, d;
    double A, B, C, D;

public:

    Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);
    void print() override;
};