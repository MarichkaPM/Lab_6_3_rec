#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna 6_3rec/Lab 6_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestfor63
{
	TEST_CLASS(UnitTestfor63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = 0; 
			int a[5] = { 1, -5, 4, -7, 9 };
			int i = 0;
			int max = a[0];
			t = find_maximum(a, 5, i, max);
			Assert::AreEqual(t, 9);
		}
	};
}
