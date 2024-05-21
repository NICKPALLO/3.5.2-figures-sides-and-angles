#include"Triangle.h"

void Triangle::print_info() //override
{
	std::cout << name << ':' << std::endl;
	std::cout << "Cтороны: a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "”глы: A=" << A << " B=" << B << " C=" << C << std::endl;
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C, std::string name)
{
	sizeNum = 3;
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	this->name = name;
}