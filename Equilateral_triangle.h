#pragma once
#include"Triangle.h"

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(int a) :Triangle(a, a, a, 60, 60, 60, "Равносторонний треугольник")
	{}
};