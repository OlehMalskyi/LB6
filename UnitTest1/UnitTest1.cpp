#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.4_IT/LB6.4_IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int SIZE = 20;
			int arr[SIZE]{};
			int MIN = -20;
			int MAX = 20;
			int C = 2;
			create(arr, SIZE, MIN, MAX);
			Assert::AreEqual(7, count(arr, SIZE, C), 0.00001);
		}

		TEST_METHOD(TestMethod2)
		{
			const int SIZE = 20;
			int arr[SIZE]{};
			int MIN = -20;
			int MAX = 20;
			create(arr, SIZE, MIN, MAX);
			Assert::AreEqual(0, mult(arr, SIZE), 0.00001);
		}
	};
}
