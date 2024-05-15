//DynamicMemory
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
//функции для двухмерных массивов
int** Allocate(const int rows, const int cols); 
void Clear(int** arr, const int rows);

int** push_row_back(int** arr,  int& rows, const int cols);
int** pop_row_back(int** arr, int& rows, const int cols);
void push_col_back(int** arr, const int rows, int& cols);


void FillRand(int arr[], const int n,int minRand,int maxRand);
void FillRand(int** arr, const int rows, const int cols);
void Print(int arr[], const int n);
void Print(int** arr, const int rows, const int cols);

//функции для одномерных массивов
int* push_back(int arr[], int& n, int value);
int* push_front(int arr[], int& n, int value);
int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);
int* insert(int arr[], int& n, int value, int i_value);
int* erase(int arr[], int& n, int pos);

//void insert(int arr[], int& n, int value, int i_value);	



//Stack - это модель памяти, из которой последний записанный элемент считывается первым.
//push
//pop

#define DYNAMIC_MEMORY_1
//#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n, 100,1000);
	Print(arr, n);

	int value;
	/*cout << "Введите добавляемое значение: "; cin >> value;
	cout << &n << endl;
	arr = push_back(arr, n, value);
	Print(arr, n);
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_front(arr, n, value);
	Print(arr, n);

	arr = pop_back(arr, n);
	Print(arr, n);
	arr = pop_front(arr, n);
	Print(arr, n);*/

	int i_value;
	cout << "Введите добавляемое значение: "; cin >> value;

	cout << "Введите положение добавляемого значения: "; cin >> i_value;
	cout<<"\n";

	arr = insert(arr, n, value, i_value);
	Print(arr, n);
	int e_pos;
	cout << "Введите положение удаляемого значения: "; cin >> e_pos;
	cout << "\n";
	arr = erase(arr, n, e_pos);
	Print(arr, n);

	//delete[] buffer;
	delete[] arr;
#endif // DYNAMIC_MEMORY_1

#ifdef DYNAMIC_MEMORY_2

	int rows;
	int cols;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество элементов строки: "; cin >> cols;
	int** arr = Allocate(rows, cols);
	FillRand(arr, rows,cols);
	Print(arr, rows, cols);

	arr = push_row_back(arr, rows, cols);
	FillRand(arr[rows - 1], cols,100,1000);
	Print(arr, rows, cols);

	//arr = pop_row_back(arr, rows, cols);
	//Print(arr, rows, cols);
	push_col_back(arr, rows, cols);
	Print(arr, rows, cols);

	Clear(arr, rows);
	
	//Test commit
#endif // DYNAMIC_MEMORY_2

}

int** Allocate(const int rows, const int cols)
{
	//1) Создаем массив указателей:
	int** arr = new int* [rows];
	//2) Выделяем память под строки:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}

void Clear(int** arr, const int rows)
{
	//1) Сначала удаляем строки:
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	//2) Удаляем массив указателей:
	delete[] arr;


}

int** push_row_back(int** arr,  int& rows, const int cols)
{
	int** buffer = new int* [rows+1];

	for (int i = 0; i < rows; i++)buffer[i] = arr[i];

	delete[] arr;

	buffer[rows] = new int[cols] {};

	rows++;
	return buffer;
}


void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		//Обращение к элементам массива через арифметику указателей 
		//и оператор разыменования:
		*(arr + i) = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(int** arr, const int rows, const int cols)

{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Обращение к элементам массива через оператор индексирования - []:
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(int** arr, const int rows, const int cols)
{ 
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}

int* push_back(int arr[], int& n, int value)
{
	cout << &n << endl;
	//////////////////////////////////////////////
		//1) Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1];
	//2) Копируем значения из исходного массива в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем исходный массив:
	delete[] arr;
	//4) Подменяем адрес исходного массива адресом нового массива:
	arr = buffer;
	//5) Только после этого в конеце массива появляется свободное место,
	//	 куда можно добавить значение:
	arr[n] = value;
	n++;
	//////////////////////////////////////////////
	//Print(arr, n);
	return arr;
}
int* push_front(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	buffer[0] = value;
	n++;
	return buffer;
}

int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}
int** pop_row_back(int** arr, int& rows, const int cols)
{
	
	int** buffer = new int* [--rows];
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];
	delete[] arr[rows ];
	delete[] arr;
	return buffer;
}
void push_col_back(int** arr, const int rows, int& cols)
{

	for (int i = 0; i < rows; i++)
	{

		int* buffer = new int[cols + 1]{};
		for (int j = 0; j < cols; j++)	buffer[j] = arr[i][j];
		
		delete[] arr[i];
		arr[i] = buffer;
	}

	cols++;
	
}

int* pop_front(int arr[], int& n)	//удаляет нулевой элемент массива
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i + 1];
	delete[] arr;
	return buffer;

}

int* insert(int arr[], int& n, int value, int i_value)	//вставляет значение в массив по указанному индексу
{
	int* buffer = new int[n+1];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];

	for (int i = n; i >= i_value; i--)buffer[i] = buffer[i - 1];
	 buffer[i_value] = value;
	
	
	 delete[] arr;
	 n++;
	return buffer;
	
}

//void insert(int arr[], int& n, int value, int i_value)	//вставляет значение в массив по указанному индексу
//{
//	//int* buffer = new int[n + 1];
//	int* buffer = new int;
//	for (int i = n; i >= i_value; i--)arr[i] = arr[i - 1];
//	delete[] arr[i_value];
//	buffer[i_value] = value;
//}

int* erase(int arr[], int& n, int pos)
{

	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];

	for (int i = pos; i < n - 1; i++) buffer[i] = arr[i + 1];
	
	delete[] arr;
	return buffer;
	

}
