//Unique.cpp
#include"Unique.h"

void Unique(int Arr[], const long n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			Arr[i] = rand() % n;
			unique = true;//предполагаем, что сгенерировалось уникальное число, но это надо проверить
			for (int j = 0; j < i; j++)
			{
				if (Arr[i] == Arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
}
void Unique(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				Arr[i][j] = rand() % (ROWS * COLS);
				unique = true;//предполагаем, что сгенерировалось уникальное число, но это надо проверить
				for (int k = 0; k <= ROWS; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (Arr[i][j] == Arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}