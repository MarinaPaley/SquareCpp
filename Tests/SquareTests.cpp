#include "pch.h"
#include "CppUnitTest.h"
#include "..\Domain\Square.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace square;
namespace Tests
{
	TEST_CLASS(SquareTests)
	{
	public:
		
		TEST_METHOD(Ctor_NegativeSide_ExpectedException)
		{
			Assert::ExpectException<std::out_of_range>([]() {auto x = new Square(0);} );
		}

		TEST_METHOD(GetPerimetr_ValidData_Success)
		{
			// Arrange
			Square square{ 2 };
			const double expected = 8;
			const auto epsilon = 0.001;
			// Act
			const auto actual = square.GetPerimetr();
			//Assert
			Assert::IsTrue(std::abs(expected - actual) <= epsilon);
		}

		TEST_METHOD(ToString_ValidData_Success)
		{
			// Arrange
			Square square{ 2 };
			const std::string expected = "Сторона квадрата - 2";

			// Act
			auto actual = square.ToString();

			// Assert
			Assert::AreEqual(expected, actual);
		}
	};
}
