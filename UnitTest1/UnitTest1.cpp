#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.2_IT/LB6.2_IT.cpp"

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
			int MIN = -29;
			int MAX = 30;
			create(arr, SIZE, MIN, MAX);
			Assert::AreEqual(-28, findMinNum(arr, SIZE, MAX), 0.0001);
		}

		TEST_METHOD(TestMethod2)
		{
			const int SIZE = 20;
			int arr[SIZE]{};
			int MIN = -29;
			int MAX = 30;
			create(arr, SIZE, MIN, MAX);
			Assert::AreEqual(27, findMaxNum(arr, SIZE, MIN), 0.0001);
		}
	};
}
