#pragma once
#include"Triangle.h"

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, b, A, B, B, "Равнобедренный треугольник")
	{
	}
};