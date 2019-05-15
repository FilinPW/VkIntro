#include "stdafx.h"
#include "DeterminingNumberPairs.h"

unsigned DeterminingNumberPairs::GetAmountPairs(int *arr1, unsigned len1, int *arr2, unsigned len2)
{
	unsigned result = 0;
	int min = INT_MAX;
	int max = INT_MIN;
	unsigned maximum;
	char *count;

	for (unsigned i = 0; i < len1; ++i)
	{
		if (arr1[i] < min)
		{
			min = arr1[i];
		}
		if (arr1[i] > max)
		{
			max = arr1[i];
		}
	}
	for (unsigned i = 0; i < len2; ++i)
	{
		if (arr2[i] < min)
		{
			min = arr2[i];
		}
		if (arr2[i] > max)
		{
			max = arr2[i];
		}
	}

	maximum = max - min;
	try
	{
		if (maximum == UINT_MAX)
		{
			throw("Требуется слишком большое количество элементов во вспомогательном массиве.");
		}
		count = new char[maximum + 1];
	}
	catch (...)
	{
		if (1 < (log2(len1) / len2 + log2(len2) / len1))
		{
			return GetAPBruteForce(arr1, len1, arr2, len2);
		}
		else
		{
			return GetAPQuickSort(arr1, len1, arr2, len2);
		}
	}
	for (unsigned i = 0; i <= maximum; ++i)
	{
		count[i] = 0;
	}
	for (unsigned i = 0; i < len1; ++i)
	{
		++count[arr1[i] - min];
	}
	for (unsigned i = 0; i < len2; ++i)
	{
		if (count[arr2[i] - min] > 0)
		{
			++result;
		}
	}
	delete[] count;

	return result;
}

unsigned DeterminingNumberPairs::GetAPQuickSort(int *arr1, unsigned len1, int *arr2, unsigned len2)
{
	int *arrA, *arrB;
	unsigned result = 0;

	try
	{
		arrA = new int[len1];
		arrB = new int[len2];
	}
	catch (...)
	{
		return GetAPBruteForce(arr1, len1, arr2, len2);
	}
	for (unsigned i = 0; i < len1; ++i)
	{
		arrA[i] = arr1[i];
	}
	for (unsigned i = 0; i < len2; ++i)
	{
		arrB[i] = arr2[i];
	}
	qsort(arrA, len1, sizeof *arrA, [](const void* a, const void* b)
	{
		int arg1 = *static_cast<const int*>(a);
		int arg2 = *static_cast<const int*>(b);
		return (arg1 > arg2) - (arg1 < arg2);
	});
	qsort(arrB, len2, sizeof *arrB, [](const void* a, const void* b)
	{
		int arg1 = *static_cast<const int*>(a);
		int arg2 = *static_cast<const int*>(b);
		return (arg1 > arg2) - (arg1 < arg2);
	});
	for (unsigned i = 0, j = 0; (i < len1) && (j < len2);)
	{
		if (arrA[i] == arrB[j])
		{
			++result;
			++i;
			++j;
			continue;
		}
		if (arrA[i] < arrB[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
	delete[] arrA;
	delete[] arrB;

	return result;
}

unsigned DeterminingNumberPairs::GetAPBruteForce(int *arr1, unsigned len1, int *arr2, unsigned len2)
{
	int *arrShort, *arrLong;
	unsigned lenShort, lenLong;
	unsigned result = 0;

	if (len1 < len2)
	{
		lenShort = len1;
		lenLong = len2;
		arrShort = arr1;
		arrLong = arr2;
	}
	else
	{
		lenShort = len2;
		lenLong = len1;
		arrShort = arr2;
		arrLong = arr1;
	}

	for (unsigned i = 0; i < lenShort; i++)
	{
		for (unsigned j = 0; j < lenLong; ++j)
		{
			if (arrShort[i] == arrLong[j])
			{
				++result;
				break;
			}
		}
	}

	return result;
}

DeterminingNumberPairs::DeterminingNumberPairs()
{
}


DeterminingNumberPairs::~DeterminingNumberPairs()
{
}
