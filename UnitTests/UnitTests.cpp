#include "pch.h"
#include "CppUnitTest.h"
#include "..\NewProject\MathOp.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		int x;
		TEST_METHOD(TestInt10)
		{
			
			MathOp TestInt;
			 x = TestInt.square(10);
			Assert::AreEqual(100, x);
		}
		TEST_METHOD(TestInt20)
		{
			
			MathOp TestInt;
			x = TestInt.square(20);
			Assert::AreEqual(400, x);
		}
		TEST_METHOD(TestNegativeInt)
		{

			MathOp TestInt;
			x = TestInt.square(-5);
			Assert::AreEqual(25, x);
		}
		TEST_METHOD(TestDouble)
		{
			double y;
			MathOp TestInt;
			y = TestInt.square(0.2);
			Assert::AreNotEqual(0.04, y);
		}

	};
}
