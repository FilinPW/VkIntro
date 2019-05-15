#include "stdafx.h"
#include "CppUnitTest.h"
#include "DeterminingNumberPairs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VkIntro
{
	/// <summary> 
	/// Проверка сохранения состояния массивов после их применения. 
	/// </summary>
	TEST_CLASS(UnitTestArrayChange)
	{
	public:
		DeterminingNumberPairs dnp;

		TEST_METHOD(TenA_TenB)
		{
			int a[] = { 3, 8, 4, 0, 7, -9, -5, 5, 10, 1 };
			int aCopy[] = { 3, 8, 4, 0, 7, -9, -5, 5, 10, 1 };
			int b[] = { 30, 80, 4, 0, 7, -90, -50, 50, 100, 10 };
			int bCopy[] = { 30, 80, 4, 0, 7, -90, -50, 50, 100, 10 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(4u, dnp.GetAmountPairs(a, lenA, b, lenB));
			for (int i = 0; i < lenA; ++i) {
				Assert::AreEqual(a[i], aCopy[i]);
			}
			for (int i = 0; i < lenB; ++i) {
				Assert::AreEqual(b[i], bCopy[i]);
			}
		}

		TEST_METHOD(TenA_TenB_INT_MIN_INT_MAX)
		{
			int a[] = { 3, 8, 4, 0, 7, -9, -5, INT_MAX, INT_MIN, 1 };
			int aCopy[] = { 3, 8, 4, 0, 7, -9, -5, INT_MAX, INT_MIN, 1 };
			int b[] = { 30, 80, 4, 0, 7, -90, -50, 50, 100, 10 };
			int bCopy[] = { 30, 80, 4, 0, 7, -90, -50, 50, 100, 10 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(3u, dnp.GetAmountPairs(a, lenA, b, lenB));
			for (int i = 0; i < lenA; ++i) {
				Assert::AreEqual(a[i], aCopy[i]);
			}
			for (int i = 0; i < lenB; ++i) {
				Assert::AreEqual(b[i], bCopy[i]);
			}
		}

		TEST_METHOD(SmallA_BigB)
		{
			int a[] = { INT_MAX, -8, 4, 0 };
			int aCopy[] = { INT_MAX, -8, 4, 0 };
			int b[] = { 3, 8, -12, 4, 13, 0, INT_MIN, 11, -9, -5, 14, 5, 10, -15, 1, -16 };
			int bCopy[] = { 3, 8, -12, 4, 13, 0, INT_MIN, 11, -9, -5, 14, 5, 10, -15, 1, -16 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(2u, dnp.GetAmountPairs(a, lenA, b, lenB));
			for (int i = 0; i < lenA; ++i) {
				Assert::AreEqual(a[i], aCopy[i]);
			}
			for (int i = 0; i < lenB; ++i) {
				Assert::AreEqual(b[i], bCopy[i]);
			}
		}

		TEST_METHOD(BigA_SmallB)
		{
			int a[] = { 3, 8, -12, 4, 13, 0, 7, 11, -9, -5, 14, INT_MAX, 10, -15, 1, -16 };
			int aCopy[] = { 3, 8, -12, 4, 13, 0, 7, 11, -9, -5, 14, INT_MAX, 10, -15, 1, -16 };
			int b[] = { 3, -8, 4, 0 };
			int bCopy[] = { 3, -8, 4, 0 };
			unsigned lenA = sizeof(a) / sizeof(int);
			unsigned lenB = sizeof(b) / sizeof(int);
			Assert::AreEqual(3u, dnp.GetAmountPairs(a, lenA, b, lenB));
			for (int i = 0; i < lenA; ++i) {
				Assert::AreEqual(a[i], aCopy[i]);
			}
			for (int i = 0; i < lenB; ++i) {
				Assert::AreEqual(b[i], bCopy[i]);
			}
		}

	};
}