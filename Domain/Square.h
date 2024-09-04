#pragma once
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
	double GetPerimetr();
	/**
	* @brief Рассчитывает площадь.
	* @return площадь.
	*/
	double GetArea();
	/**
	* @brief Рассчитывает диагональ.
	* @return диагональ.
	*/
	double GetDiagonal();
	/**
	* @brief Инициализирует новый обект класса Square.
	* @param side Сторона.
	*/
	Square(const double side);
};
