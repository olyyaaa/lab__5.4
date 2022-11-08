#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include "../lab__5.4/lab__5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int N = 2;
			int i = 3;
			double res = S1(N, 1);
			double expected = 0.88009706091589401;


			Assert::AreEqual(res, expected);
		}
	};
}
