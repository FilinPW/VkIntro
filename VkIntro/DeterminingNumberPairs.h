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
	/// ����������� �������� ��������� ���������� ���������.
	/// � ������ ���������� ������ ����������� �������� ������� ���������� ��� ������� ��������.
	/// </summary>
	/// <returns> ���������� ����� ���������. </returns>
	/// <param name="arr1">������ ������.</param>
	/// <param name="len1">���-�� ��������� � ������ �������.</param>
	/// <param name="arr2">������ ������.</param>
	/// <param name="len2">���-�� ��������� �� ������ �������.</param>
	unsigned GetAmountPairs(int *arr1, unsigned len1, int *arr2, unsigned len2);

private:

	/// <summary> 
	/// ����������� ���������� ����� ��������� � ���� �������� ���� int, ��� ������� ������������ ��������� � ������ �������.
	/// ����������� ��������� ������� ����������.
	/// </summary>
	/// <returns> ���������� ����� ���������. </returns>
	/// <param name="arr1">������ ������.</param>
	/// <param name="len1">���-�� ��������� � ������ �������.</param>
	/// <param name="arr2">������ ������.</param>
	/// <param name="len2">���-�� ��������� �� ������ �������.</param>
	unsigned GetAPQuickSort(int *arr1, unsigned len1, int *arr2, unsigned len2);

	/// <summary> 
	/// ����������� ���������� ����� ��������� � ���� �������� ���� int, ��� ������� ������������ ��������� � ������ �������.
	/// ����������� �������� ������� ��������.
	/// </summary>
	/// <returns> ���������� ����� ���������. </returns>
	/// <param name="arr1">������ ������.</param>
	/// <param name="len1">���-�� ��������� � ������ �������.</param>
	/// <param name="arr2">������ ������.</param>
	/// <param name="len2">���-�� ��������� �� ������ �������.</param>
	unsigned GetAPBruteForce(int *arr1, unsigned len1, int *arr2, unsigned len2);
	
};

