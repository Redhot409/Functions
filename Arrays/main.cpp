//Arrays
#include"stdafx.h"
#include"Constants.h" 
#include"FillRand.h"
#include"Print.h"
#include"Sum.h"
#include"Avg_value.h"
#include"Min_value.h"
#include"Max_value.h"
#include"Shift_left.h"
#include"Shift_right.h"
#include"Sort.h"
#include"Unique.h"
//#include"FillRand.cpp" - cpp.файлы никогда не подключаются на место вызова

void main()
{
	setlocale(LC_ALL, "");
	
	int number_of_shift;
	cout<< "Введите число сдвига элементов массива :";
	cin >> number_of_shift;

	//массив int
	const long I_SIZE = 5;
	int i_Arr[I_SIZE];
	FillRand(i_Arr, I_SIZE);
	Print(i_Arr, I_SIZE);
	cout<<"Сумма элементов массива :" << Sum(i_Arr, I_SIZE)<<endl;
	cout<<"Среднее значение элементов массива :" << Avg_value(i_Arr, I_SIZE)<<endl;
	cout<<"Минимальное значение элементов массива :" << Min_value(i_Arr, I_SIZE)<<endl;
	cout<<"Максимальное значение элементов массива :" << Max_value(i_Arr, I_SIZE)<<endl;
	cout << "Массив сдвинутых произвольных элементов влево :"; tab;
	Shift_left(i_Arr, I_SIZE, number_of_shift);
	Print(i_Arr, I_SIZE);
	Shift_right(i_Arr, I_SIZE, number_of_shift);
	cout << "Sorted :";
	Sort(i_Arr, I_SIZE);
	Print(i_Arr, I_SIZE);
	Unique(i_Arr, I_SIZE);
	Print(i_Arr, I_SIZE);
	
	cout << delimeter << endl;

	//массив double
	const long D_SIZE = 5;
	double Drr[D_SIZE];
	FillRand(Drr, D_SIZE);
	Print(Drr, D_SIZE);
	cout<<"Сумма элементов массива double :" << Sum(Drr, D_SIZE)<<endl;
	cout<<"Среднее значение элементов массива double :" << Avg_value(Drr, D_SIZE)<<endl;
	cout<<"Минимальное значение элементов массива double :" << Min_value(Drr, D_SIZE)<<endl;
	cout<<"Максимальное значение элементов массива double :" << Max_value(Drr, D_SIZE)<<endl;
	Shift_left(Drr, D_SIZE, number_of_shift);
	Shift_right(Drr, D_SIZE, number_of_shift);

	cout << delimeter << endl;
	
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
	
	cout << delimeter << endl;

	//Двумерный массив int	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива :" << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средне-фрифметическое элементов двумерного массива :" << Avg_value(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в двумерном массиве :" << Min_value(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в двумерном массиве :" << Max_value(i_arr_2, ROWS, COLS) << endl;
	Shift_left(i_arr_2, ROWS, COLS, number_of_shift);
	Print(i_arr_2, ROWS, COLS);
	Shift_right(i_arr_2, ROWS, COLS, number_of_shift);
	Print(i_arr_2, ROWS, COLS);

	cout << delimeter << endl;

	//Двумерный массив double	
	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива :" << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Средне-фрифметическое элементов двумерного массива :" << Avg_value(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в двумерном массиве :" << Min_value(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в двумерном массиве :" << Max_value(d_arr_2, ROWS, COLS) << endl;
	Shift_left(d_arr_2, ROWS, COLS, number_of_shift);
	Print(d_arr_2, ROWS, COLS);
	Shift_right(d_arr_2, ROWS, COLS, number_of_shift);
	Print(d_arr_2, ROWS, COLS);

	cout << delimeter << endl;

	//Двумерный массив char	
	char c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива :" << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Средне-фрифметическое элементов двумерного массива :" << Avg_value(c_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в двумерном массиве :" << Min_value(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в двумерном массиве :" << Max_value(c_arr_2, ROWS, COLS) << endl;
	Shift_left(c_arr_2, ROWS, COLS, number_of_shift);
	Print(c_arr_2, ROWS, COLS);

	Shift_right(c_arr_2, ROWS, COLS, number_of_shift);
	Print(c_arr_2, ROWS, COLS);

	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << delimeter << endl;

	Unique(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

}