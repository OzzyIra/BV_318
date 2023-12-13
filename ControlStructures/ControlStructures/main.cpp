//ControlStructures
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TEMPERATURE
//#define CALC_1
#define CALC_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef TEMPERATURE
	cout << "Hello Controls" << endl;
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	cout << "����������� �������: " << temperature;

	//������� abs() ����������� ������ �����, �.�, ����� ��� ����� �����.
	if (abs(temperature) % 100 > 10 && abs(temperature) % 100 < 20)cout << " ��������";
	else if (abs(temperature) % 10 == 1)cout << " ������";
	else if (abs(temperature) % 10 >= 5 || abs(temperature) % 10 == 0)cout << " ��������";
	else cout << " �������\n";
	cout << endl;

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
#endif // TEMPERATURE

#ifdef CALC_1
	double a, b;	//�����, �������� � ����������
	char s;			//s - Sign (���� ��������)
	cout << "������� ���������: ";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
#endif // CALC_1

	double a, b;
	char s;
	cout << "������� ���������: ";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << " + " << b << " = " << a + b << endl; break;
	case '-':cout << a << " - " << b << " = " << a - b << endl; break;
	case '*':cout << a << " * " << b << " = " << a * b << endl; break;
	case '/':cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: no operation" << endl;
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