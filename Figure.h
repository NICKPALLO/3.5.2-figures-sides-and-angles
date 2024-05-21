#pragma once
#include <iostream>

class Figure
{
protected:
	int sizeNum;
	std::string name;
public:
	Figure();
	int get_sizeNum();
	std::string get_name();
	virtual void print_info() {}
};