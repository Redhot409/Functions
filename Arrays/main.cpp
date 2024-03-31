//Arrays
#include <iostream>
using namespace std;

void FillRand(int Arr[],const long N, int minRand=0, int maxRand=100);
void FillRand(double Arr[],const long N, int minRand=0, int maxRand=100);
void FillRand(char Arr[],const long N, int minRand=0, int maxRand=100);

void Print(const int Arr[], const long N);
void Print(const double Arr[], const long N);
void Print(const char Arr[], const long N);

int Sum(const int Arr[],const long N);
double Sum(const double Arr[],const long N);
char Sum(const char Arr[],const long N);

double Avg_value(const int Arr[], long N);
double Avg_value(const double Arr[], long N);
char Avg_value(const char Arr[], long N);

int Min_value(const int Arr[], long N);
double Min_value(const double Arr[], long N);
char Min_value(const char Arr[], long N);

int Max_value(const int Arr[], long N);
double Max_value(const double Arr[], long N);
char Max_value(const char Arr[], long N);

void Shift_left( int Arr[], long N,int number_of_shift);
void Shift_left( double Arr[], long N, int number_of_shift);
void Shift_left( char Arr[], long N, int number_of_shift);

void Shift_right(int Arr[], int N, int number_of_shift);
void Shift_right(double Arr[], int N, int number_of_shift);
void Shift_right(char Arr[], int N, int number_of_shift);


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
void FillRand(int Arr[],const long N,int minRand,int maxRand) 
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < N; i++)
	{
		Arr[i] = minRand + rand() % (maxRand - minRand);
	}
}
void Print(const int Arr[], long N)
{
	cout << "Элементы массива случайных чисел :";
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
int Sum(const int Arr[], long N)
{
	int sum = 0;
	for (int i = 0; i < N - 1; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
int Min_value(const int Arr[], long N)
{
	int min = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] < min) min = Arr[i];
	}	return min;
}
double Avg_value(const int Arr[], const long N)
{
	{
		return Sum(Arr, N) / (double)N;
	}
}
int Max_value(const int Arr[], long N)
{
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] > max) max = Arr[i];
	}	return max;
}
void Shift_left(int Arr[], long N, int number_of_shift)
{
	cout << "Массив сдвинутых произвольных элементов влево  :";
	for (int i = 0; i < (number_of_shift) % N; i++)
	{
		int buff = Arr[0];
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
void Shift_right(int Arr[], int N, int number_of_shift)
{
	cout << "Массив сдвинутых произвольных элементов вправо  :";
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
		cout << endl;
}

void FillRand(double Arr[], const long N, int minRand, int maxRand) 
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < N; i++)
	{
		Arr[i] = minRand + rand() % (maxRand - minRand);
		Arr[i] /= 100;
	}
}
void Print(const double Arr[], long N)
{
	cout << "Вывод элементов массива типа double : ";
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
double Sum(const double Arr[], long N)
{
	double sum = 0;
	for (int i = 0; i < N - 1; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
double Min_value(const double Arr[], long N)
{
	double min = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] < min) min = Arr[i];
	}	return min;
}
double Avg_value(const double Arr[], const long N)
{
	{
		return Sum(Arr, N) / (double)N;
	}
}
double Max_value(const double Arr[], long N)
{
	double max = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] > max) max = Arr[i];
	}	return max;
}
void Shift_left(double Arr[], long N, int number_of_shift)
{
	cout << "Массив сдвинутых double элементов влево  :";
	for(int i = 0; i < (number_of_shift) % N; i++)
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

void FillRand(char Arr[], const long N, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 10;
	maxRand *= 10;
	for (int i = 0; i < N; i++)
	{
		Arr[i] =minRand + rand() % (maxRand - minRand);
	}
}
void Print(const char Arr[], long N)
{
	cout << "Элементы массива случайных символов :";
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
char Sum(const char Arr[], long N)
{
	int sum = 0;
	for (int i = 0; i < N - 1; i++)
	{
		sum += Arr[i];
	}
	return  sum;
}
char Avg_value(const char Arr[], const long N)
{
	{
		return Sum(Arr, N) / (double)N;
	}
}
char Min_value(const char Arr[], long N)
{
	int min = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] < min) min = Arr[i];
	}	return min;
}
char Max_value(const char Arr[], long N)
{
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] > max) max = Arr[i];
	}	return max;
}
void Shift_left(char Arr[], long N, int number_of_shift)
{
	cout << "Массив сдвинутых char элементов влево  :";
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

