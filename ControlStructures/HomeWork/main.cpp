//Degree's ending variety
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	signed temp = 0;
	cout << "������� �������� �����������: ";
	cin >> temp;
	if ((abs(temp)) % 100 == 11)
	{
		cout << "��������";
	}
	else if ((abs(temp)) % 10 == 1)
	{
		cout << " ������";
	}
	else if ((abs(temp)) >= 12 and (abs(temp)) <= 19)
	{
		cout << "��������";
	}
	else if ((abs(temp)) % 10 == 2 or (abs(temp)) % 10 == 3 or (abs(temp)) % 10 == 4)
	{
		cout << "�������";
	}
	else
	{
		cout << "��������";
	}
	cout << endl;
	main();
}