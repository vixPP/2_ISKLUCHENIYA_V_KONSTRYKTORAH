#include "Quadrangle.h"

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D)
{
	name = "Четырехугольник";
	if (A + B + C + D != 360)
	{
		throw GeometryException("Ошибка создания фигуры. Причина: сумма углов не равна 360 ");
	}
}

void Quadrangle::print()
{
	cout << endl << name << " (стороны " << a << ", " << b << ", " << c << ", "<< d << "; ";
	cout << "углы: " << A << ", " << B << ", " << C << ", " << D << ") создан" << endl;
}