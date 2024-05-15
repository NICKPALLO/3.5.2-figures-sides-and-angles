#include <iostream>
#include <string>
#include <Windows.h>

class Figure
{
protected:
	int sizeNum;
	std::string name;
public:
	Figure()
	{
		sizeNum = 0;
		name = "������";
	}
	int get_sizeNum() {
		return sizeNum;
	}
	std::string get_name() {
		return name;
	}
	virtual void print_info(){}
};

class Triangle : public Figure
{
protected:
	int a, b, c, A, B, C;
public:
	Triangle(int a, int b, int c, int A, int B, int C):Triangle(a, b, c, A, B, C, "�����������"){}

	Triangle(int a, int b, int c, int A, int B, int C, std::string name)
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
	void print_info() override
	{
		std::cout << name << ':' << std::endl;
		std::cout << "C������: a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "����: A=" << A << " B=" << B << " C=" << C << std::endl;
	}
};

class Right_triangle : public Triangle
{
public:
	Right_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90, "������������� �����������")
	{
	}
};

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, b, A, B, B, "�������������� �����������")
	{
	}
};

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(int a):Triangle(a,a,a,60,60,60,"�������������� �����������")
	{}
};


class Quadrilateral : public Figure
{
protected:
	int a, b, c, d, A, B, C, D;
public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D):Quadrilateral(a, b, c, d, A, B, C, D, "���������������"){}
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name)
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
	void print_info() override
	{
		std::cout << name << ':' << std::endl;
		std::cout << "C������: a=" << a << " b=" << b << " c=" << c <<" d=" << d << std::endl;
		std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
	}
};

class Rectangl : public Quadrilateral
	{
	public:
		Rectangl(int a, int b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90, "�������������") {}
	};

class Square : public Quadrilateral
{
public:
	Square(int a) : Quadrilateral(a, a, a, a, 90, 90, 90, 90, "�������") {}
};

class Parallelogram : public Quadrilateral
{
public: 
	Parallelogram(int a, int b, int A, int B) :Quadrilateral(a, b, a, b, A, B, A, B, "��������������") {}
};

class Rhombus : public Quadrilateral
{
public:
	Rhombus(int a, int A, int B) :Quadrilateral(a, a, a, a, A, B, A, B, "����") {}
};

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