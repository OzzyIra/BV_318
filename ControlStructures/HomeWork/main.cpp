#include <iostream>

using namespace std;

#define TASK 2


int main() {
	int sizeTable;

#if TASK == 1
	setlocale(LC_ALL, "Russian");
	int sizeSquare;
	cout << "������� ������ ��������� �����: ";
	cin >> sizeTable;
	sizeTable -= 2; // ��� ���������� ������������
	cout << "������� ������ ������: ";
	cin >> sizeSquare;
	// ����� �����
	for (int i = 0; i < sizeTable; i++) {
		// ����� ������, ��� ������ �������� ���������� �������
		for (int i = 0; i < sizeSquare; i++) {
			for (int i = 0; i < sizeTable; i++) {
				for (int j = 0; j < sizeSquare; j++) {
					cout << '*';
				}
				for (int j = 0; j < sizeSquare; j++) {
					cout << ' ';
				}
			}
			cout << endl;
		}
		if (i == sizeTable - 1) {
			break;
		}
		// ����� ������, ��� ������ �������� ������ �������
		for (int i = 0; i < sizeSquare; i++) {
			for (int i = 0; i < sizeTable - 1; i++) {
				for (int j = 0; j < sizeSquare; j++) {
					cout << ' ';
				}
				for (int j = 0; j < sizeSquare; j++) {
					cout << '*';
				}
			}
			cout << endl;
		}
	}

#elif TASK == 2
	std::cout << "Please write size of table: ";
	std::cin >> sizeTable;
	char symbolLT = char(218), symbolRT = char(191), symbolRB = char(217),
		symbolLB = char(192), symbolTB = char(196), symbolRL = char(179);
	char symbolSquare = char(178), symbolEmpty = char(176);
	// ����� �����
	std::cout << symbolLT;
	for (int i = 0; i < sizeTable; i++) {
		std::cout << symbolTB;
	}
	std::cout << symbolRT << endl;
	for (int i = 0; i < sizeTable; i++) {
		std::cout << symbolRL;
		// ����� ������, ��� ������ �������� ��������
		for (int j = 0; j < sizeTable; j++) {
			if ((i + j) % 2 == 0) {
				std::cout << symbolSquare;
			}
			else {
				std::cout << symbolEmpty;
			}
		}
		std::cout << symbolRL << endl;
	}
	std::cout << symbolLB;
	for (int i = 0; i < sizeTable; i++) {
		std::cout << symbolTB;
	}
	std::cout << symbolRB << endl;
#elif
	cout << "����������� ������" << endl;
#endif

	return 0;
}