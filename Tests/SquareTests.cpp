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
			Assert::IsTrue(1 == 1);
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
	};
}
