
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhomb.h"
#include "GeometryException.h"

using namespace std;


void print_info(Figure* fig)
{
    fig->print();
}

int main()
{
    try
    {
        Triangle triangle(4, 4, 4, 60, 60, 60);
        triangle.print();

        RightTriangle right_triangle(3, 4, 5, 40, 50, 90);
        print_info(&right_triangle);

        IsoscelesTriangle isosceles_triangle(60, 30, 70, 40);
        print_info(&isosceles_triangle);

        EquilateralTriangle equilateral_triangle(80);
        print_info(&equilateral_triangle);

        Quadrangle quandrangle(10, 20, 30, 40, 100, 50, 130, 80);
        print_info(&quandrangle);

        Rectangle rectangle(10, 20);
        print_info(&rectangle);

        Square square(10);
        print_info(&square);

        Parallelogram parellelogram(20, 30, 100, 80);
        print_info(&parellelogram);

        Rhomb rhomb(60, 100, 80);
        print_info(&rhomb);

    }
    catch (const GeometryException& e) {
        cout << e.what() << endl;
    }

     //  Rhomb rhomb(30, 30, 40);
      // print_info(&rhomb);

    return 0;
}