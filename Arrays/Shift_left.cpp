//Shift_left
#include"Shift_left.h"

template<typename T>
void Shift_left(T Arr[], long N, int number_of_shift)
{
	cout << "Массив сдвинутых произвольных элементов влево  :";
	for (int i = 0; i < (number_of_shift) % N; i++)
	{
		T buff = Arr[0];
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