//Arrays
#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Print.cpp"
#include"Sum.h"
#include"Sum.cpp"
#include"Avg_value.h"
#include"Avg_value.cpp"
#include"Min_value.h"
#include"Min_value.cpp"
#include"Max_value.h"
#include"Max_value.cpp"
#include"Shift_left.h"
#include"Shift_left.cpp"
#include"Shift_right.h"
#include"Shift_right.cpp"

void main()
{
	setlocale(LC_ALL, "");
	
	int number_of_shift;
	cout<< "Введите число сдвига элементов массива :";
	cin >> number_of_shift;

	//массив int
	const long N = 5;
	int Arr[N];
	FillRand(Arr, N);
	Print(Arr, N);
	cout<<"Сумма элементов массива :" << Sum(Arr, N)<<endl;
	cout<<"Среднее значение элементов массива :" << Avg_value(Arr, N)<<endl;
	cout<<"Минимальное значение элементов массива :" << Min_value(Arr, N)<<endl;
	cout<<"Максимальное значение элементов массива :" << Max_value(Arr, N)<<endl;
	Shift_left(Arr, N, number_of_shift); 
	Shift_right(Arr, N, number_of_shift); cout << endl;
	
	//массив double
	const long n = 5;
	double Drr[n];
	FillRand(Drr, n); 
	Print(Drr, n);
	cout<<"Сумма элементов массива double :" << Sum(Drr, n)<<endl;
	cout<<"Среднее значение элементов массива double :" << Avg_value(Drr, n)<<endl;
	cout<<"Минимальное значение элементов массива double :" << Min_value(Drr, n)<<endl;
	cout<<"Максимальное значение элементов массива double :" << Max_value(Drr, n)<<endl;
	Shift_left(Drr, n, number_of_shift); 
	Shift_right(Drr, n, number_of_shift); cout << endl;

	// массив char
	const long nN = 5;
	char Crr[nN];
	FillRand(Crr, nN);
	Print(Crr, nN);
	cout << "Сумма элементов массива char :" << Sum(Crr, nN) << endl;
	cout << "Среднее значение элементов массива char :" << Avg_value(Crr, nN) << endl;
	cout << "Минимальное значение элементов массива char :" << Min_value(Crr, nN) << endl;
	cout << "Максимальное значение элементов массива char :" << Max_value(Crr, nN) << endl;
	Shift_left(Crr, nN, number_of_shift);
	Shift_right(Crr, nN, number_of_shift);
}








