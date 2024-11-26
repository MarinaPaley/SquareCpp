#include <iostream>
#include "../Domain/Square.h"

using namespace square;
/**
* @brief
*/
int main()
{
	try
	{
		Square square{ 2 };
		auto square1 = new Square{ 1 };
		std::cout << square.GetArea() << " " << square << std::endl;
		std::cout << square1->GetPerimetr() << std::endl;
		delete square1;

		//Square square2 = 2;

		return 0;
	}
	catch (std::out_of_range& ex)
	{
		std::cerr << ex.what();
	}
}