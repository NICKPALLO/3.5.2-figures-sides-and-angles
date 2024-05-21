#include <iostream>
#include <string>
#include <Windows.h>

#include"Figure.h"
#include"Triangle.h"
#include"Right_triangle.h"
#include"Isosceles_triangle.h"
#include"Equilateral_triangle.h"

#include"Quadrilateral.h"
#include"Rectangl.h"
#include"Square.h"
#include"Parallelogram.h"
#include"Rhombus.h"

void printInfo(Figure* figure)
{
	figure->print_info();
	std::cout << std::endl;
}

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle triangle(1, 2, 3, 4, 5, 6);
	printInfo(&triangle);
	
	Right_triangle rTriangle(3, 2, 4, 60, 30);
	printInfo(&rTriangle);

	Isosceles_triangle iTriangle(2, 3, 60, 30);
	printInfo(&iTriangle);

	Equilateral_triangle eTriangle(4);
	printInfo(&eTriangle);

	Quadrilateral quadrilateral(2, 4, 5, 3, 30, 20, 180, 130);
	printInfo(&quadrilateral);

	Rectangl rectangle(1, 2);
	printInfo(&rectangle);

	Square square(10);
	printInfo(&square);

	Parallelogram parallelogram(2, 4, 50, 65);
	printInfo(&parallelogram);

	Rhombus rhombus(2, 50, 60);
	printInfo(&rhombus);

	return 0;
}