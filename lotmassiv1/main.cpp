#include <iostream>
#include <ctime>
using namespace std;

typedef unsigned int uint; // �������������� ���� ������

int main()
{
	setlocale(LC_ALL, "ru");

	uint num, row, col;

	cout << endl; cout << endl;
	cout << "\tInput number = "; cin >> num; cout << endl;
	cout << "\tInput row = "; cin >> row; cout << endl;
	cout << "\tInput column = "; cin >> col; cout << endl;

	uint** arr = new uint * [row]; // ��������� ������������ ������

	for (uint i = 0; i < row; i++) //��������� ������ ��� ������
	{
		arr[i] = new uint[col];
	}

	for (uint i = 0; i < row; i++) //���������� �������
	{
		for (uint j = 0; j < col; j++)
		{
			arr[i][j] = num;
			num *= 2;
		}
	}

	for (uint i = 0; i < row; i++) // ����� ������� �� �����
	{
		cout << "\t |\t";

		for (uint j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t |\t";
		}
		cout << endl;
	}

	for (uint i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	cout << endl; cout << endl;
	system("pause");
	return 0;
}