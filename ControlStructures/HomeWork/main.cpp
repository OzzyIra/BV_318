#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define FOR
//#define FACTORIAL
//#define FACTORIAL_2
//#define STEPEN
//#define STEPEN_2
//#define ASCII
//#define FIBONACHI
//#define FIBONACHI_2
//#define FIBONACHI_3
#define FIBONACHI_4_HARD
//#define CHISLA
//#define MULTIPLICATION_TABLE
//#define PYTHAGOREAN_TABLE
void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR
	int n = 5;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif
#ifdef FACTORIAL
	cout << endl;
	cout << "\t\t\t\t\t1.��������� ��������� �����." << endl;
	cout << endl;
	int n;//����� �������� � ����������
	int i = 1;//�������
	double x = 1;//��������� ����� ��������� � ����������
	double y = 1;//������������ ����� ��������� � ���������� � ����������� ������������ �����
	cout << "������� ����� �����: "; cin >> n;
	cout << endl;
	for (int i = 1; i < n + 1; ++i * x)
	{
		y = x;
		x = i * y;
	}
	cout << '1';
	for (int i = 1; i < n + 1; ++i)
	{
		cout << '*' << i;
	}
	cout << endl;
	cout << endl;
	if (i = n)
	{
		cout << "��������� �����:  " << "!" << n << " = " << x << endl;
	}
#endif
#ifdef FACTORIAL_2
	int n;
	cout << "������� ����� ��� ���������� ����������: "; cin >> n;
	int f = 1; //���������
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif 
#ifdef STEPEN_2
	double a; //��������� �������
	int n; //���������� �������
	double N = 1; //�������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif 


#ifdef STEPEN
	cout << endl;
	cout << "\t\t\t\t\t�������� ����� � �������." << endl;
	cout << endl;
	double n;//�����
	int b;//�������
	int i;//�������
	double a = 1; //�����
	cout << " ������� �����: "; cin >> n;
	cout << " ������� �������: "; cin >> b;
	if (b < 0)
	{
		n = 1 / n;
		b = -b;
	}
	for (i = 0; i < b; ++i)
	{
		a = a * n;
	}
	cout << endl;
	cout << " �����: " << a << endl;
#endif
#ifdef ASCII
	cout << endl;
	cout << "\t\t\t\t\t������� ASCII-��������." << endl;
	int i;
	int n = 256;
	for (i = 0; i < n; i++)
	{
		cout << (char)i << " ";
		if (i % 16 == 0)
		{
			cout << endl;
		}
	}
#endif
#ifdef FIBONACHI
	cout << endl;
	cout << "\t\t\t\t\t\t��� ���������.";
	cout << endl;
	int n; //����� �������� � ����������
	int i, x = 1;
	cout << "������� ������ ���� ���������: "; cin >> n;
	cout << endl;
	for (i = 0; x < n; i)
	{
		cout << i << " " << x << " ";
		i = i + x;
		x = x + i;
	}
	cout << endl;
#endif
#ifdef FIBONACHI_2
	cout << endl;
	cout << "\t\t\t\t������� �� ����� �������� ���������� ������ ���� ���������."; cout << endl;
	cout << endl;
	int n = 1;//����� ������������ ���������� ������ ���� ���������
	int x = 0, y = 1, i;
	cout << "������� ���������� ������ ���� ��������� ������� ����� ������� �� �����: "; cin >> n;
	cout << endl;
	if (n == 1)
	{
		cout << "0" << endl;
	}
	else if (n == 2)
	{
		cout << "0 1" << endl;
	}
	else if (n > 1)
		cout << "0" << " " << "1" << " " << "1" << " ";
	for (i = 0; i < n - 3; i++)
	{
		x = y - x;
		y = x + y;
		cout << y << " ";
	}
	cout << endl;
#endif
#ifdef FIBONACHI_3
	int n;
	cout << "������� ���������� �����:"; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif 

#ifdef FIBONACHI_4_HARD
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 0, b = 1; i <= n; i = i + b, b = i + b)
	{
		cout << i << "\t" << b << "\t";
	}
#endif 

#ifdef CHISLA
	cout << endl;
	cout << "\t\t\t\t��� ������� ����� �� ���������� �������.";
	cout << endl;
	int n, i = 0, x = 0;
	cout << "������� ������� �����: "; cin >> n;
	cout << endl;
	for (i = 0; i < n; i++)
	{
		x = x + 1;
		cout << x << " ";
	}
	cout << endl;
#endif
#ifdef MULTIPLICATION_TABLE
	cout << endl;
	cout << "\t\t\t\t\t\t������� ���������.";
	cout << endl;
	int i, x;
	for (i = 1; i <= 10; ++i)
	{
		for (x = 1; x <= 10; ++x)
		{
			cout << " " << i << " * " << x << " = " << i * x << " ";
			cout << endl;
		}
		cout << endl;
	}
#endif
#ifdef PYTHAGOREAN_TABLE
	cout << endl;
	cout << "\t\t\t\t\t\t������� ��������." << endl;
	cout << endl;
	cout << "\t";
	int i, x;
	for (i = 1; i <= 10; i++)
	{
		cout << i << " \t";
	}
	cout << endl;
	cout << endl;
	for (i = 1; i <= 10; i++)
	{
		cout << i << "\t";

		for (x = 1; x <= 10; x++)
		{
			cout << i * x << "\t";
		}
		cout << endl;
		cout << endl;
	}
#endif

}













































































