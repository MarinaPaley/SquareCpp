#pragma once
/**
* @brief ����� �������.
*/
class Square
{
private:
	/**
	* @brief �������.
	*/
	double side;
public:
	/**
	* @brief ������������ ��������.
	* @return ��������.
	*/
	double GetPerimetr();
	/**
	* @brief ������������ �������.
	* @return �������.
	*/
	double GetArea();
	/**
	* @brief ������������ ���������.
	* @return ���������.
	*/
	double GetDiagonal();
	/**
	* @brief �������������� ����� ����� ������ Square.
	* @param side �������.
	*/
	Square(const double side);
};
