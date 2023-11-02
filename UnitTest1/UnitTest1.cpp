#include "pch.h"
#include "CppUnitTest.h"
#include "../bla/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 4;
			int a[2 * n];
			create(a, n);
			SwapHalves(a, 2 * n);
			Assert::AreEqual(a[0], 8);
		}
	};
}
