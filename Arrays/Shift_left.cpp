//Shift_left
#include"Shift_left.h"

void Shift_left(int Arr[], long N, int number_of_shift)
{
	//cout << "Массив сдвинутых произвольных элементов влево  :";
	for (int i = 0; i < (number_of_shift) % N; i++)
	{
		int buff = Arr[0];
		for (int i = 1; i < N; i++)
		{
			Arr[i - 1] = Arr[i];
		}
		Arr[N - 1] = buff;
	}
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Shift_left(double Arr[], long N, int number_of_shift)
{
	cout << "Массив сдвинутых double элементов влево  :";
	for (int i = 0; i < (number_of_shift) % N; i++)
	{
		double buff = Arr[0];
		for (int i = 0; i < N; i++)
		{
			Arr[i] = Arr[i + 1];
		}
		Arr[N - 1] = buff;

	}
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Shift_left(char Arr[], long N, int number_of_shift)
{
	//cout << "Массив сдвинутых char элементов влево  :";
	for (int i = 0; i < (number_of_shift) % N; i++)
	{
		char buff = Arr[0];
		for (int i = 0; i < N - 1; i++)
		{
			Arr[i] = Arr[i + 1];
		}
		Arr[N - 1] = buff;
	}
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Shift_left(int Arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		Shift_left(Arr[i], COLS, number_of_shift);
	}*/
	for (int i = 0; i < number_of_shift; i++)
	{
		int buff = Arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				Arr[i][j - 1] = Arr[i][j];
			}
			if (i < ROWS - 1) Arr[i][COLS - 1] = Arr[i + 1][0];
		}
		Arr[ROWS - 1][COLS - 1] = buff;
	}
}
void Shift_left(double Arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	double buff = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			Arr[i][j - 1] = Arr[i][j];
		}
		if (i < ROWS - 1) Arr[i][COLS - 1] = Arr[i + 1][0];
	}
	Arr[ROWS - 1][COLS - 1] = buff;

}
void Shift_left(char Arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	char buff = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			Arr[i][j - 1] = Arr[i][j];
		}
		if (i < ROWS - 1) Arr[i][COLS - 1] = Arr[i + 1][0];
	}
	Arr[ROWS - 1][COLS - 1] = buff;

}