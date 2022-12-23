#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab13.2.2/ChyrunSofialab13.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1322
{
	TEST_CLASS(UnitTest1322)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char z = '+';
			int x = 3, y = 6;
			t = SUM(x, y, z);
			Assert::AreEqual(t, 9);
		}
	};
}
