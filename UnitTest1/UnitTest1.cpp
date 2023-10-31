#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.1 REK/LB6.1_REK.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int SIZE = 20;
			int arr[SIZE];
			create(arr, SIZE, -20, 34, 0);
			Assert::AreEqual(-26, Sum(arr, SIZE, 0, 0), 0.00001);
		}

		TEST_METHOD(TestMethod2)
		{
			const int SIZE = 20;
			int arr[SIZE];
			create(arr, SIZE, -20, 34, 0);
			Assert::AreEqual(3, Count(arr, SIZE, 0, 0), 0.00001);
		}
	};
}
