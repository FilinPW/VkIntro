#include "stdafx.h"
#include "CppUnitTest.h"
#include "DeterminingNumberPairs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VkIntro
{
	/// <summary> 
	/// Проверка влияния знака элементов входящих массивов. 
	/// </summary>
	TEST_CLASS(UnitTestPositivNegativ)
	{
	public:
		DeterminingNumberPairs dnp;

		TEST_METHOD(MinusA_MinusB)
		{
			int a[] = { -8, -6, -1 };
			int b[] = { -5, -3, -9, -6, -7 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusA_NullB)
		{
			int a[] = { -8, -6, -1 };
			int b[] = { 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusA_PlusB)
		{
			int a[] = { -8, -6, -1 };
			int b[] = { 3, 5, 6, 7, 1 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusA_MinusNullB)
		{
			int a[] = { -8, -5, -1 };
			int b[] = { -10, -5, -6, 0, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusA_MinusPlusB)
		{
			int a[] = { -8, -5, -1 };
			int b[] = { -1, -5, -6, 8, 5, 4, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusA_MinusNullPlusB)
		{
			int a[] = { -8, -5, -1, -90 };
			int b[] = { -1, -5, -6, 8, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusA_NullPlusB)
		{
			int a[] = { -8, -5, -1, -90 };
			int b[] = { 8, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(PlusA_MinusB)
		{
			int a[] = { 8, 6, 1 };
			int b[] = { -5, -3, -9, -6, -7 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(PlusA_NullB)
		{
			int a[] = { 8, 6, 1 };
			int b[] = { 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(PlusA_PlusB)
		{
			int a[] = { 8, 6, 1 };
			int b[] = { 3, 5, 6, 7, 1 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(PlusA_MinusNullB)
		{
			int a[] = { 8, 5, 1 };
			int b[] = { -10, -5, -6, 0, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(PlusA_MinusPlusB)
		{
			int a[] = { 8, 5, 1 };
			int b[] = { -1, -5, 6, 8, 5, 4, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(PlusA_MinusNullPlusB)
		{
			int a[] = { 8, 5, 1, 90, 4 };
			int b[] = { -1, -5, -6, 8, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(3u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(PlusA_NullPlusB)
		{
			int a[] = { 7, 5, 1, 90 };
			int b[] = { 8, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullA_MinusB)
		{
			int a[] = { 0 };
			int b[] = { -5, -3, -9, -6, -7 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullA_NullB)
		{
			int a[] = { 0 };
			int b[] = { 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullA_PlusB)
		{
			int a[] = { 0 };
			int b[] = { 3, 5, 6, 7, 1 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullA_MinusNullB)
		{
			int a[] = { 0 };
			int b[] = { -10, -5, -6, 0, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullA_MinusPlusB)
		{
			int a[] = { 0 };
			int b[] = { -1, -5, 6, 8, 5, 4, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullA_MinusNullPlusB)
		{
			int a[] = { 0 };
			int b[] = { -1, -5, -6, 8, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullA_NullPlusB)
		{
			int a[] = { 0 };
			int b[] = { 8, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullA_MinusB)
		{
			int a[] = { -8, -6, 0, -1 };
			int b[] = { -5, -3, -9, -6, -7 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullA_NullB)
		{
			int a[] = { -8, -6, -1, 0 };
			int b[] = { 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullA_PlusB)
		{
			int a[] = { -8, 0, -6, -1 };
			int b[] = { 3, 5, 6, 7, 1 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullA_MinusNullB)
		{
			int a[] = { -8, 0, -5, -1 };
			int b[] = { -10, -5, -6, 0, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullA_MinusPlusB)
		{
			int a[] = { -8, -5, -1, 0 };
			int b[] = { -1, -5, -6, 8, 5, 4, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullA_MinusNullPlusB)
		{
			int a[] = { -8, -5, -1, -9, 0 };
			int b[] = { -1, -5, -6, 8, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(3u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullA_NullPlusB)
		{
			int a[] = { -8, -5, -1, 0 };
			int b[] = { 8, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullPlusA_MinusB)
		{
			int a[] = { -8, -6, 0, -1, 5 };
			int b[] = { -5, -3, -9, -6, -7 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullPlusA_NullB)
		{
			int a[] = { -8, -6, 1, 0 };
			int b[] = { 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullPlusA_PlusB)
		{
			int a[] = { -8, 0, -6, 1 };
			int b[] = { 3, 5, 6, 7, 1 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullPlusA_MinusNullB)
		{
			int a[] = { 8, 0, -5, -1 };
			int b[] = { -10, -5, -6, 0, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullPlusA_MinusPlusB)
		{
			int a[] = { -8, -5, 1, 0 };
			int b[] = { -1, -5, -6, 8, 5, 4, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullPlusA_MinusNullPlusB)
		{
			int a[] = { -8, 5, -1, -9, 0 };
			int b[] = { -1, -5, -6, 8, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(3u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusNullPlusA_NullPlusB)
		{
			int a[] = { -8, -5, 4, 6, 0 };
			int b[] = { 8, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusPlusA_MinusB)
		{
			int a[] = { -1, 5 };
			int b[] = { -5, -1, -9, -6, -7 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusPlusA_NullB)
		{
			int a[] = { -86, 1,  };
			int b[] = { 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusPlusA_PlusB)
		{
			int a[] = { -8, -6, 1 };
			int b[] = { 3, 5, 6, 7, 1 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusPlusA_MinusNullB)
		{
			int a[] = { 8, -5, -1 };
			int b[] = { -10, -5, -6, 0, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusPlusA_MinusPlusB)
		{
			int a[] = { -8, -5, 1 };
			int b[] = { 1, -5, -6, 8, 5, 4, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusPlusA_MinusNullPlusB)
		{
			int a[] = { -8, 5, -1, 9 };
			int b[] = { -1, -5, -6, 8, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MinusPlusA_NullPlusB)
		{
			int a[] = { -8, -5, 4, 6 };
			int b[] = { 8, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullPlusA_MinusB)
		{
			int a[] = { 0, 1, 5 };
			int b[] = { -5, -3, -9, -6, -7 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullPlusA_NullB)
		{
			int a[] = { 6, 1, 0 };
			int b[] = { 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullPlusA_PlusB)
		{
			int a[] = { 0, 1 };
			int b[] = { 3, 5, 6, 7, 1 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullPlusA_MinusNullB)
		{
			int a[] = { 8, 0, 5 };
			int b[] = { -10, -5, -6, 0, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullPlusA_MinusPlusB)
		{
			int a[] = { 5, 1, 0 };
			int b[] = { 1, -5, -6, 8, 5, 4, -4 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullPlusA_MinusNullPlusB)
		{
			int a[] = { 10, 9, 0 };
			int b[] = { -1, -5, -6, 10, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(NullPlusA_NullPlusB)
		{
			int a[] = { 5, 4, 6, 0 };
			int b[] = { 8, 5, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(3u, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

	};
}