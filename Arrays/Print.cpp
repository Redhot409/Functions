//Print.cpp
#include"Print.h"

template<typename T>
void Print(const T Arr[], long N)
{
	cout << "�������� ������� ��������� ����� :";
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}