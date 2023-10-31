#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.1/LB6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			const int SIZE = 20;
			int arr[SIZE];
			c = sum(arr, SIZE);
			Assert::AreEqual(c, -16, 0.00001);
		}

		TEST_METHOD(TestMethod2)
		{
			double q;
			const int SIZE = 20;
			int arr[SIZE];
			q = count(arr, SIZE);
			Assert::AreEqual(q, 20, 0.00001);
		}

	};
}
