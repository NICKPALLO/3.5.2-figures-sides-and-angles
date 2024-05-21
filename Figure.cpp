#include "Figure.h"

Figure::Figure()
{
	sizeNum = 0;
	name = "Фигура";
}
int Figure::get_sizeNum() 
{
	return sizeNum;
}
std::string Figure::get_name()
{
	return name;
}
