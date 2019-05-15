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
	/// Применяются элементы алгоритма сортировки подсчётом.
	/// В случае недостатка памяти применяется алгоритм быстрой сортировки или полного перебора.
	/// </summary>
	/// <returns> Количество общих элементов. </returns>
	/// <param name="arr1">Первый массив.</param>
	/// <param name="len1">Кол-во элементов в первом массиве.</param>
	/// <param name="arr2">Второй массив.</param>
	/// <param name="len2">Кол-во элементов во втором массиве.</param>
	unsigned GetAmountPairs(int *arr1, unsigned len1, int *arr2, unsigned len2);

private:

	/// <summary> 
	/// Определение количества общих элементов в двух массивах типа int, при условии уникальности элементов в каждом массиве.
	/// Применяется алгоритма быстрой сортировки.
	/// </summary>
	/// <returns> Количество общих элементов. </returns>
	/// <param name="arr1">Первый массив.</param>
	/// <param name="len1">Кол-во элементов в первом массиве.</param>
	/// <param name="arr2">Второй массив.</param>
	/// <param name="len2">Кол-во элементов во втором массиве.</param>
	unsigned GetAPQuickSort(int *arr1, unsigned len1, int *arr2, unsigned len2);

	/// <summary> 
	/// Определение количества общих элементов в двух массивах типа int, при условии уникальности элементов в каждом массиве.
	/// Применяется алгоритм полного перебора.
	/// </summary>
	/// <returns> Количество общих элементов. </returns>
	/// <param name="arr1">Первый массив.</param>
	/// <param name="len1">Кол-во элементов в первом массиве.</param>
	/// <param name="arr2">Второй массив.</param>
	/// <param name="len2">Кол-во элементов во втором массиве.</param>
	unsigned GetAPBruteForce(int *arr1, unsigned len1, int *arr2, unsigned len2);
	
};

