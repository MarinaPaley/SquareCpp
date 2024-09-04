#pragma once
#include <iostream>


/**
* @brief Класс Квадрат.
*/
class Square
{
private:
	/**
	* @brief Сторона.
	*/
	double side;
public:
	/**
	* @brief Рассчитывает периметр.
	* @return периметр.
	*/
	double GetPerimetr() const;
	/**
	* @brief Рассчитывает площадь.
	* @return площадь.
	*/
	double GetArea() const;
	/**
	* @brief Рассчитывает диагональ.
	* @return диагональ.
	*/
	double GetDiagonal() const;
	/**
	* @brief Инициализирует новый обект класса Square.
	* @param side Сторона.
	*/
	explicit Square(const double side);

	std::string ToString() const;

	friend std::ostream& operator<<(std::ostream& out, Square square);

};
