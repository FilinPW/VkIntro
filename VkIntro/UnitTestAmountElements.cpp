#include "stdafx.h"
#include "CppUnitTest.h"
#include "DeterminingNumberPairs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VkIntro
{
	/// <summary> 
	/// Проверка влияния количества элементов в массивах. 
	/// </summary>
	TEST_CLASS(UnitTestAmountElements)
	{
	public:
		DeterminingNumberPairs dnp;

		TEST_METHOD(OneA_OneB_0)
		{
			int a[] = { 0 };
			int b[] = { 1 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(OneA_OneB_1)
		{
			int a[] = { 0 };
			int b[] = { 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(TenA_TenB)
		{
			int a[] = { 0, -2, -9, 2, 9, 90, 100, INT_MAX, 54, 7 };
			int b[] = { 8, 0, -6, 23, 32, 88, 7, -8, 9, -10 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(3, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(OneA_TenB)
		{
			int a[] = { 0 };
			int b[] = { 8, 0, -6, 23, 32, 88, 7, -8, 9, -10 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(TenA_OneB)
		{
			int a[] = { 0, -2, -9, 2, 9, 90, 100, INT_MAX, 54, 7 };
			int b[] = { 3 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(SmallA_BigB)
		{
			int a[] = { -1, 0, 499, 2 };
			int b[500];
			for (int i = 0; i < 500; ++i)
			{
				b[i] = i;
			}
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(3, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(BigA_SmallB)
		{
			int a[500];
			for (int i = -200; i < 300; ++i)
			{
				a[i + 200] = i;
			}
			int b[] = { -1, 0, 300, 299 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(3, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

	};
}
