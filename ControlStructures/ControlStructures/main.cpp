//ControlStructures
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Controls" << endl;
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	cout << "����������� �������: " << temperature << " ��������\n";
	if (temperature > 70)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 40)
	{
		cout << "�� � �������" << endl;
	}
	else if (temperature > 33)
	{
		cout << "����� �����" << endl;
	}
	else if (temperature > 25)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 18)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 0)
	{
		cout << "���������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -30)
	{
		cout << "������� �����" << endl;
	}
	else 
	{
		cout << "�� ����� �������" << endl;
	}
}

/*
if (condition)
{
	.....;
	code1;
	.....;
}
else
{
	.....;
	code2;
	.....;
}


condition - ��� �������.
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!! ������� - ��� ��������� !!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/