//Shift_right
#include"Shift_right.h"
#include"Shift_left.h"

void Shift_right(int Arr[], int N, int number_of_shift)
{
	Shift_left(Arr, N, N - number_of_shift % N);
	/*cout << "Массив сдвинутых произвольных элементов вправо  :";
	for (int i = 0; i < (number_of_shift) % N; i++)
	{
		int buff = Arr[N-1];
		for (int i = N - 2; i>= 0; i--)
		{
			Arr[i + 1] = Arr[i];
		}
		Arr[0] = buff;
	}
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
		cout << endl;*/
}
void Shift_right(double Arr[], int N, int number_of_shift)
{
	cout << "Массив сдвинутых double элементов вправо  :";
	for (int i = 0; i < (number_of_shift) % N; i++)
	{
		double buff = Arr[N - 1];
		for (int i = N - 2; i >= 0; i--)
		{
			Arr[i + 1] = Arr[i];
		}
		Arr[0] = buff;
	}
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Shift_right(char Arr[], int N, int number_of_shift)
{
	cout << "Массив сдвинутых char элементов вправо  :";
	for (int i = 0; i < (number_of_shift) % N; i++)
	{
		char buff = Arr[N - 1];
		for (int i = N - 2; i >= 0; i--)
		{
			Arr[i + 1] = Arr[i];
		}
		Arr[0] = buff;
	}
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Shift_right(int Arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	Shift_left(Arr, ROWS, COLS, ROWS * COLS - number_of_shift);
}
void Shift_right(double Arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	Shift_left(Arr, ROWS, COLS, ROWS * COLS - number_of_shift);
}
void Shift_right(char Arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	Shift_left(Arr, ROWS, COLS, ROWS * COLS - number_of_shift);
}

