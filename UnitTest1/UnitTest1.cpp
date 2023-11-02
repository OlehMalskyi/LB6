#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.4_REK/LB6.4_REK.cpp"

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
			create(arr, SIZE, MIN, MAX, 0);
			Assert::AreEqual(8, count(arr, SIZE, 0, C, 0), 0.00001);
		}

		TEST_METHOD(TestMethod2)
		{
			const int SIZE = 20;
			int arr[SIZE]{};
			int MIN = -20;
			int MAX = 20;
			create(arr, SIZE, MIN, MAX, 0);
			Assert::AreEqual(0, mult(arr, SIZE, arr[0], 0, 1, 0), 0.00001);
		}
	};
}
