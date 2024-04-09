#include "Triangle.h"

Triangle:: Triangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C)
{
	name = "Треугольник";

    if (A + B + C != 180) {
        throw GeometryException("Ошибка создания фигуры. Причина: неправильные углы треугольника");
    }
}

void Triangle::print()
{
	cout << endl << name << " (стороны " << a << ", " << b << ", " << c << "; ";
	cout << "углы: " << A << ", " << B << ", " << C << ") создан" << endl;
}
