#pragma once

/// <summary>
/// �������� ������ ��� �������� ����� ��������� � ��������.
/// </summary>
class DeterminingNumberPairs
{
public:
	DeterminingNumberPairs();
	~DeterminingNumberPairs();

	/// <summary> 
	/// ����������� ���������� ����� ��������� � ���� �������� ���� int, ��� ������� ������������ ��������� � ������ �������. 
	/// </summary>
	/// <returns> ���������� ����� ���������. </returns>
	/// <param name="arr1">������ ������.</param>
	/// <param name="len1">���-�� ��������� � ������ �������.</param>
	/// <param name="arr2">������ ������.</param>
	/// <param name="len2">���-�� ��������� �� ������ �������.</param>
	int GetAmountPairs(int *arr1, unsigned len1, int *arr2, unsigned len2);

private:

	/// <summary> 
	/// ����������� ���������� ����� ��������� � ���� �������� ���� int, ��� ������� ������������ ��������� � ������ �������.
	/// � ����������� ��������� ������� ����������.
	/// </summary>
	/// <returns> ���������� ����� ���������. </returns>
	/// <param name="arr1">������ ������.</param>
	/// <param name="len1">���-�� ��������� � ������ �������.</param>
	/// <param name="arr2">������ ������.</param>
	/// <param name="len2">���-�� ��������� �� ������ �������.</param>
	int GetAPQuickSort(int *arr1, unsigned len1, int *arr2, unsigned len2);

	/// <summary> 
	/// ����������� ���������� ����� ��������� � ���� �������� ���� int, ��� ������� ������������ ��������� � ������ �������.
	/// � ����������� ������ ������� ��������.
	/// </summary>
	/// <returns> ���������� ����� ���������. </returns>
	/// <param name="arr1">������ ������.</param>
	/// <param name="len1">���-�� ��������� � ������ �������.</param>
	/// <param name="arr2">������ ������.</param>
	/// <param name="len2">���-�� ��������� �� ������ �������.</param>
	int GetAPBruteForce(int *arr1, unsigned len1, int *arr2, unsigned len2);
	
};

