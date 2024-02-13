//Arrays
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;

	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8 };
	cout << int() << endl;
	//arr[2] = 2048;			//��������� � �������� ������� �� ������
	//cout << arr[2] << endl;	//��������� � �������� ������� �� ������
	//SIZE - 1
	//	 n - 1

	//���� ��������� ������� � ����������:
	cout << "������� �������� �������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	//����� ������� �� �����:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����� ������� �� ����� � �������� ������� (�� ���������� �������� � �������):
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//���������� ����� ��������� �������:
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "�������-�������������� ��������� �������: " << (double)sum / SIZE << endl;

	//����� ������������ � ������������� ��������:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������:" << max << endl;
}