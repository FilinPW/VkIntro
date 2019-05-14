#include "stdafx.h"
#include "DeterminingNumberPairs.h"

int DeterminingNumberPairs::GetAmountPairs(int *arr1, unsigned len1, int *arr2, unsigned len2)
{
	unsigned result = 0;
	int min = INT_MAX;
	int max = INT_MIN;
	unsigned maximum;
	char *count;

	// Поиск наименьшего и наибольшего элемента
	for (unsigned i = 0; i < len1; ++i) {
		if (arr1[i] < min) {
			min = arr1[i];
		}
		if (arr1[i] > max) {
			max = arr1[i];
		}
	}
	for (unsigned i = 0; i < len2; ++i) {
		if (arr2[i] < min) {
			min = arr2[i];
		}
		if (arr2[i] > max) {
			max = arr2[i];
		}
	}

	// Попытка создания массива для хранения меток элементов
	maximum = max - min;
	try {
		if (maximum == UINT_MAX)
		{
			throw("Требуется слишком большое количество элементов во вспомогательном массиве.");
		}
		count = new char[maximum + 1];
	}
	catch (...) {
		// В случае ошибки при выделени памяти подсчёт происходит более медленным и менее требовательным к памяти способом
		if ((len1 * len2) < ((len1 + len2) * log2(len1 + len2)))
		{
			return GetAPBruteForce(arr1, len1, arr2, len2);
		}
		else
		{
			return GetAPQuickSort(arr1, len1, arr2, len2);
		}
	}
	for (int i = 0; i <= maximum; ++i) {
		count[i] = 0;
	}
	for (unsigned i = 0; i < len1; ++i) {
		++count[arr1[i] - min];
	}
	for (unsigned i = 0; i < len2; ++i) {
		if (count[arr2[i] - min] > 0) {
			++result;
		}
	}
	delete[] count;

	return result;
}

int DeterminingNumberPairs::GetAPQuickSort(int *arr1, unsigned len1, int *arr2, unsigned len2)
{
	int *arr;
	unsigned result = 0;

	// Объединение входных массивов в один новый
	arr = new int[len1 + len2];
	unsigned n;
	for (n = 0; n < len1; ++n) {
		arr[n] = arr1[n];
	}
	for (unsigned i = 0; i < len2; ++i) {
		arr[n++] = arr2[i];
	}

	// Быстрая сортировка нового массива
	qsort(arr, n, sizeof *arr, [](const void* a, const void* b)
	{
		int arg1 = *static_cast<const int*>(a);
		int arg2 = *static_cast<const int*>(b);

		return (arg1 > arg2) - (arg1 < arg2);
	});

	// Подсчёт количества общих элементов
	for (unsigned i = 0; i < n - 1; ++i) {
		if (arr[i] == arr[i + 1]) {
			++i;
			++result;
		}
	}
	delete[] arr;

	return result;
}

int DeterminingNumberPairs::GetAPBruteForce(int *arr1, unsigned len1, int *arr2, unsigned len2)
{
	int *arrShort, *arrLong;
	unsigned lenShort, lenLong;
	unsigned result = 0;

	if (len1 < len2) {
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

	for (int i = 0; i < lenShort; i++)
	{
		for (int j = 0; j < lenLong; j++ )
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
