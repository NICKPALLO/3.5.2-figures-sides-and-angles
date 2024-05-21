#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name)
{
	sizeNum = 4;
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	this->name = name;
}

void Quadrilateral::print_info()
{
	std::cout << name << ':' << std::endl;
	std::cout << "Cтороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "”глы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}