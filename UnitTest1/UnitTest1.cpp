#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_3.6/B1.h"
#include "../oop_3.6/B1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			B1 t;
			int test = t.getB1();
			Assert::AreEqual(0, test);
		}
	};
}
