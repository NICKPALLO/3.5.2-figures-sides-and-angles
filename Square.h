#pragma once
#include"Quadrilateral.h"

class Square : public Quadrilateral
{
public:
	Square(int a) : Quadrilateral(a, a, a, a, 90, 90, 90, 90, " вадрат") {}
};