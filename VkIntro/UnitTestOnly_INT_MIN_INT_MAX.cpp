#include "stdafx.h"
#include "CppUnitTest.h"
#include "DeterminingNumberPairs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VkIntro
{		
	/// <summary> 
	/// “естирование на массивах, содержащих значени€ INT_MIN и INT_MAX. 
	/// </summary>
	TEST_CLASS(UnitTestOnly_INT_MIN_INT_MAX)
	{
	public:
		DeterminingNumberPairs dnp;

		TEST_METHOD(MIN_A)
		{
			int a[] = { INT_MIN };
			int b[] = { 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MIN_B)
		{
			int a[] = { -10 };
			int b[] = { INT_MIN };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MAX_A)
		{
			int a[] = { INT_MAX };
			int b[] = { 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MAX_B)
		{
			int a[] = { 10 };
			int b[] = { INT_MAX };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MIN_A_MAX_B)
		{
			int a[] = { INT_MIN };
			int b[] = { INT_MAX };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MAX_A_MIN_B)
		{
			int a[] = { INT_MAX };
			int b[] = { INT_MIN };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MIN_A_MIN_B)
		{
			int a[] = { INT_MIN };
			int b[] = { INT_MIN };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MAX_A_MAX_B)
		{
			int a[] = { INT_MAX };
			int b[] = { INT_MAX };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MIN_MAX_A)
		{
			int a[] = { INT_MIN, INT_MAX };
			int b[] = { 1 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MAX_MIN_A)
		{
			int a[] = { INT_MAX, INT_MIN };
			int b[] = { -1 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MIN_MAX_B)
		{
			int a[] = { -1 };
			int b[] = { INT_MIN, INT_MAX };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MAX_MIN_B)
		{
			int a[] = { 1 };
			int b[] = { INT_MAX, INT_MIN };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(0, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MIN_A_MIN_MAX_B)
		{
			int a[] = { INT_MIN };
			int b[] = { INT_MIN, INT_MAX };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MAX_A_MIN_MAX_B)
		{
			int a[] = { INT_MAX };
			int b[] = { INT_MIN, INT_MAX };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MIN_A_MAX_MIN_B)
		{
			int a[] = { INT_MIN };
			int b[] = { INT_MAX, INT_MIN };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MAX_A_MAX_MIN_B)
		{
			int a[] = { INT_MAX };
			int b[] = { INT_MAX, INT_MIN };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MIN_MAX_A_MIN_B)
		{
			int a[] = { INT_MIN, INT_MAX };
			int b[] = { INT_MIN };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MAX_MIN_A_MIN_B)
		{
			int a[] = { INT_MAX, INT_MIN };
			int b[] = { INT_MIN };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MIN_MAX_A_MAX_B)
		{
			int a[] = { INT_MIN, INT_MAX };
			int b[] = { INT_MAX };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MAX_MIN_A_MAX_B)
		{
			int a[] = { INT_MAX, INT_MIN };
			int b[] = { INT_MAX };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(1, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MAX_MIN_A_MAX_MIN_B)
		{
			int a[] = { INT_MAX, INT_MIN };
			int b[] = { INT_MAX, INT_MIN };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MIN_MAX_A_MIN_MAX_B)
		{
			int a[] = { INT_MIN, INT_MAX };
			int b[] = { INT_MIN, INT_MAX };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MIN_MAX_A_MAX_MIN_B)
		{
			int a[] = { INT_MIN, INT_MAX };
			int b[] = { INT_MAX, INT_MIN };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

		TEST_METHOD(MAX_MIN_A_MIN_MAX_B)
		{
			int a[] = { INT_MAX, INT_MIN };
			int b[] = { INT_MIN, INT_MAX };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2, dnp.GetAmountPairs(a, lenA, b, lenB));
		}

	};
}