#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab4_1/Lab4_1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s = "ASS";
			int k = count(s);
			Assert::AreEqual(3, k);
		}
	};
}
