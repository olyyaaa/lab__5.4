#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int N = 4;
			double expected, double res;
			res = S1(1.02103);
			double expected = calculate(S1);


			Assert::AreEqual(res, expected);
		}
	};
}
