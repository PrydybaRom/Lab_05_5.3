#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include "../Lab_05.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{	
			double h = 2;
			double gk = 2;
			double z = r(1 + (h * h) - 2 * h) + 2 * r(1 + r(h * h) - 2 * pow(r(1), 2));
			Assert::AreEqual(z, 4.48067, 0.00001);
		}
	};
}
