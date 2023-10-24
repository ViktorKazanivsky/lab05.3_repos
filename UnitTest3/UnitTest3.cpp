#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.3/Lab_05_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double z;
			z = y(0.0);
			Assert::AreEqual(z, 9.0);
		}
	};
}
