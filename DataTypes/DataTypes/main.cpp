#include<iostream>
using namespace std;

//Variable - ��� ����������� ������� ������, ���������� ������� 
//			 ����� ���������� � �������� ���������� ���������.

//						type name;

/*
type - ��� ����������, �� ���������� 3 ����:
		1. ������� ������ ���������� ����� ��������;
		2. ����� �������� ��� ������ ���������;
		3. ����� �������� ��� ��� ����� ���������;

 I) ���������� ����: bool (Boolean) 1 Byte 
	true ���� false
	true  - 1
	false - 0
	cout << true << endl;
	cout << false << endl;
	0 - ��� false, � true - ��� ��� ��� �� 0

 II) ���������� ����: char (Character - ������) 1 Byte ASCII
	ASCII - American Standard Code for Information Interchange

III) �������� ����. ������� �� ������������� � ������������.
	 ������������� ������������� ��� �������� ����� �����, 
	 � ������������ - ��� �������� ������� ����� (����� � ��������� �������).
	   signed - ��������, ����� ������� ��� �������������, ��� � ������������� ����� �����.
	 unsigned - ����� ������� ������ ������������� ����� �����, ������� 0.
	 int a;	//�������� ����������, ����� ������� ��� �������������, ��� � ������������� ����� �����.
	 unsigned int b;//����������� ����������, ����� ������� ������ ������������� ����� �����.
*/

/*
---------------------------------------------------
			!!!IDENTIFIER - ��� ���!!!
1. ABC...Zabc...z012...9_;
2. ��� ���������� �� ����� ���������� �������� �����
	1stPlace;	//compile error
	_1stPlace;	//OK
3. ����� ���������� ����������������:
	Price � price - ��� ������ �����;
4. ��� ���������� ���������� ������ ������������ �������� ����� ����� C++;

����� ���������� ������ ���� ������������, �.�., 
�� ����� ���������� ������ ����������� ������� ��� � ��� ��������!!!
---------------------------------------------------
*/

//#define INTEGRAL_TYPES

void main()
{
	setlocale(LC_ALL, "");
	cout << "DataTypes" << endl;
	//cout << true << endl;
	//cout << false << endl;
#if defined INTEGRAL_TYPES
	cout << sizeof(long long) << endl;
	//endl - end line (��������� ������ � ������ ��������� ������)
	//����������������
	cout << LLONG_MIN << " ... " << LLONG_MAX << endl;
	cout << 0 << " ... " << ULLONG_MAX << endl;
	USHRT_MAX;
#endif

	cout << "FLOAT:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	
	cout << "\n----------------------------------\n";

	cout << "DOUBLE:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;

	int _1stPlace;
	int _sizeof;

	int a;
	//double price;
	//double priceOfCoffee;	//Camel (Pascal) case style
	//double price_of_coffee;	//snake_case_style
	//cout << price_of_coffee << endl;
	//������������� - ��� ���������� ���������� ��������.
	int b = 3;	//������������� ��� ����������
	int c;
	c = 5;		//������������� ����� ����������

	double price_of_coffee;
	cout << "������� ��������� ����: "; 
	cin >> price_of_coffee;	//������������� ������ � ����������
	cout << price_of_coffee << endl;
}