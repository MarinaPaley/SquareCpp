#include <stdexcept>
#include <sstream>

#include "Square.h"

double Square::GetPerimetr() const
{
	return 4 * this->side;
}

double Square::GetArea() const
{
	return this->side * this->side;
}

double Square::GetDiagonal() const
{
	return this->side * sqrt(2);
}

Square::Square(const double side)
{
	if (side <= 0)
	{
		throw std::out_of_range("Сторона не может быть отрицательной!");
	}

	this->side = side;
}

std::string Square::ToString() const
{
	
	std::stringstream buffer{};
	buffer << "Сторона квадрата - " << this->side << "\n";
	return buffer.str();
	
}

std::ostream& operator<<(std::ostream& out, Square square)
{
	
	return out << square.ToString();
}