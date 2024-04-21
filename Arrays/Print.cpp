//Print.cpp
#include"Print.h"

void Print(const int Arr[], long N)
{
	cout << "Ёлементы массива случайных чисел :";
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Print(const double Arr[], long N)
{
	cout << "¬ывод элементов массива типа double : ";
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Print(const char Arr[], long N)
{
	cout << "Ёлементы массива случайных символов :";
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Print(const int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << tab;
		}
		cout << endl;
	}

}
void Print(const double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << tab;
		}
		cout << endl;
	}

}
void Print(const char Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << tab;
		}
		cout << endl;
	}

}