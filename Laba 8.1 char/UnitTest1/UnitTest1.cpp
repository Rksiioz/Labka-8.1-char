#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 8.1 char/Laba 8.1 char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "dwgfuonfwihf";
			bool t = Find(str);
			Assert::AreEqual(true, t);
		}
	};
}
