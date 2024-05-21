#pragma once
#include"Quadrilateral.h"

class Rectangl : public Quadrilateral
{
public:
	Rectangl(int a, int b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90, "Прямоугольник") {}
};