#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-11.1-C/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			// Очікуваний результат: "BASIC" має 10 символів.
			int a = 9;
			int kilkist = Count("C:/Users/Lenovo/source/repos/PR-11.1-C/PR-11.1-C/t.txt");

			Assert::AreEqual(a, kilkist);
		}
	};
}
