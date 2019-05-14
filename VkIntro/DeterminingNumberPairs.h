#pragma once

/// <summary>
/// Содержит методы для подсчёта общих элементов в массивах.
/// </summary>
class DeterminingNumberPairs
{
public:
	DeterminingNumberPairs();
	~DeterminingNumberPairs();

	/// <summary> 
	/// Определение количества общих элементов в двух массивах типа int, при условии уникальности элементов в каждом массиве. 
	/// </summary>
	/// <returns> Количество общих элементов. </returns>
	/// <param name="arr1">Первый массив.</param>
	/// <param name="len1">Кол-во элементов в первом массиве.</param>
	/// <param name="arr2">Второй массив.</param>
	/// <param name="len2">Кол-во элементов во втором массиве.</param>
	int GetAmountPairs(int *arr1, unsigned len1, int *arr2, unsigned len2);

private:

	/// <summary> 
	/// Определение количества общих элементов в двух массивах типа int, при условии уникальности элементов в каждом массиве.
	/// С применением алгоритма быстрой сортировки.
	/// </summary>
	/// <returns> Количество общих элементов. </returns>
	/// <param name="arr1">Первый массив.</param>
	/// <param name="len1">Кол-во элементов в первом массиве.</param>
	/// <param name="arr2">Второй массив.</param>
	/// <param name="len2">Кол-во элементов во втором массиве.</param>
	int GetAPQuickSort(int *arr1, unsigned len1, int *arr2, unsigned len2);

	/// <summary> 
	/// Определение количества общих элементов в двух массивах типа int, при условии уникальности элементов в каждом массиве.
	/// С применением метода полного перебора.
	/// </summary>
	/// <returns> Количество общих элементов. </returns>
	/// <param name="arr1">Первый массив.</param>
	/// <param name="len1">Кол-во элементов в первом массиве.</param>
	/// <param name="arr2">Второй массив.</param>
	/// <param name="len2">Кол-во элементов во втором массиве.</param>
	int GetAPBruteForce(int *arr1, unsigned len1, int *arr2, unsigned len2);
	
};

