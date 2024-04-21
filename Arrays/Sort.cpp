//Sort.cpp
#include"Sort.h"

void Sort(int Arr[], const int N)
{
	for (int i = 0; i < N; i++) //������� i,  �������� ��-� �������, �������� ����� ������� ����������� ������� �������

	{
		for (int j = i + 1; j < N; j++)
			// ������� j ���������� ���������� �������� �������
		{
			//arr[i] ��������� �������
			//arr[j] ������������
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
	//��� 2 ����� �������� �������
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			/*for (int k = j + 1; k < COLS; k++)
			{
				//arr[i][j] -��������� �������
				//arr[i][k] - ������������ �������
				iterations++;
				if (Arr[i][k] < Arr[i][j])
				{
					int buffer = Arr[i][j];
					Arr[i][j] = Arr[i][k];
					Arr[i][k] = buffer;
					exchanges++;

				}
			}*/
			//������������ ��������;
			//��� 2 ����� ���������� ���������� �������� � ������;
			for (int k = i; k < ROWS; k++)
			{
				//arr[i][j] ��������� ��-�;
				//arr[i][k] ������������ ��-�;
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//Arr[i][j]-��������� ��-�
					//Arr[k][l]-������������ ��-�
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
	cout << "������ ������������ �� :" << iterations << endl;
	cout << "����� ������������ ��������� :" << exchanges << endl;
}