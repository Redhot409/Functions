//Arrays
#include <iostream>
using namespace std;

//void FillRand(int Arr[],long N); // Объявление ф-ции, принимаемые пар-тры
//void Print(int Arr[], long N);
int Sum(int Arr[], long N, int res);
float Avg_value(int Arr[], long N, int res); 
int Min_value(int Arr[], long N, int res);
int Max_value(int Arr[], long N, int res);

#define tab "\t"
//#define RAND_1
//#define FILLRAND
//#define PRINT
#define SUM
#define AVG
#define MIN_VALUE_IN
#define MAX_VALUE_IN
#define SHIFT_LEFT
#define SHIFT_RIGHT


void main()
{
	setlocale(LC_ALL, "");
	int res=0;
	const long N = 5;
	int Arr[N];
	//FillRand(Arr, N); //Вывод ф-ции, выводимые параметры
	//Print(Arr, N);
	cout<<"Сумма элементов массива :" << Sum(Arr, N, res)<<endl;
	cout<<"Среднее значение элементов массива :" << Avg_value(Arr, N, res)<<endl;
	cout<<"Минимальное значение элементов массива :" << Min_value(Arr, N, res)<<endl;
	cout<<"Максимальное значение элементов массива :" << Max_value(Arr, N, res)<<endl;;
#ifdef RAND_1
	const int n = 5;
	int arr[n];

	int minRand, maxRand;
	do
	{
		cout << "Введите минимально возможное случайное число: "; cin >> minRand;
		cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
		if (minRand == maxRand)cout << "Пределы диапазона не должны совпадать" << endl;
	} while (minRand == maxRand);
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // RAND_1
}
	


#ifdef FILLRAND
void FillRand(int Arr[], long N) //Определение ф-ции, принимаемые пар-тры
{

	for (int i = 0; i < N; i++)
	{
		Arr[i] = rand() % 100;
	}
}
#endif // FILLRAND

#ifdef PRINT
void Print(int Arr[], long N)
{
	cout << "Элементы массива случайных чисел :";
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
#endif // PRINT

#ifdef SUM
int Sum(int Arr[], long N, int res)
{
	for (int i = 0; i < N; i++)
	{
		Arr[i] = rand() % 100;
	}

	for (int i = 0; i < N; i++)
	{
		res += Arr[i];
	}	return res;
}
#endif // SUM

#ifdef AVG
float Avg_value(int Arr[], long N, int res)
{
	for (int i = 0; i < N; i++)
	{
		Arr[i] = rand() % 100;
	}

	for (int i = 0; i < N; i++)
	{
		res += Arr[i];
	}	return float(res) / N;
}
#endif // AVG

#ifdef MIN_VALUE_IN
int Min_value(int Arr[], long N, int res)
{
	for (int i = 0; i < N; i++)
	{
		Arr[i] = rand() % 100;
	}
	res = Arr[0];
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] < res) res = Arr[i];
	}	return res;
}
#endif // MIN_VALUE_IN


#ifdef MAX_VALUE_IN
int Max_value(int Arr[], long N, int res)
{
	for (int i = 0; i < N; i++)
	{
		Arr[i] = rand() % 100;
	}
	res = Arr[0];
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] > res) res = Arr[i];
	}	return res;
}
#endif // MAX_VALUE_IN


