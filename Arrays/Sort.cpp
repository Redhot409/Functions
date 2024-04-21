//Sort.cpp
#include"Sort.h"

void Sort(int Arr[], const int N)
{
	for (int i = 0; i < N; i++) //счетчик i,  выбирает эл-т массива, вкоторый будет помещен минимальный элемент массива

	{
		for (int j = i + 1; j < N; j++)
			// счетчик j перебирает оставшиеся элементы массива
		{
			//arr[i] выбранный элемент
			//arr[j] перебираемый
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	int exchanges = 0;
	//Эти 2 цикла выбирают элемент
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			/*for (int k = j + 1; k < COLS; k++)
			{
				//arr[i][j] -выбранный элнмент
				//arr[i][k] - перебираемый элемент
				iterations++;
				if (Arr[i][k] < Arr[i][j])
				{
					int buffer = Arr[i][j];
					Arr[i][j] = Arr[i][k];
					Arr[i][k] = buffer;
					exchanges++;

				}
			}*/
			//минимального значения;
			//Эти 2 цикла перебирают оставшиеся элементы в поиске;
			for (int k = i; k < ROWS; k++)
			{
				//arr[i][j] выбранный эл-т;
				//arr[i][k] перебираемый эл-т;
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//Arr[i][j]-выбранный эл-т
					//Arr[k][l]-перебираемый эл-т
					iterations++;
					if (Arr[i][j] > Arr[k][l])
					{
						int buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	cout << "Массив отсортирован за :" << iterations << endl;
	cout << "Число перестановок элементов :" << exchanges << endl;
}