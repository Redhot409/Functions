//i_Arrays
#include <iostream>
using namespace std;

#define tab "\t"
#define delimeter "\n----------------------------------------------------------\n"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int Arr[],const long n, int minRand=0, int maxRand=100);
void FillRand(double irr[],const long n, int minRand=0, int maxRand=100);
void FillRand(char Arr[],const long n, int minRand=0, int maxRand=100);
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

void Print(const int Arr[], const long n);
void Print(const double Arr[], const long n);
void Print(const char Arr[], const long n);
void Print(const int Arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(const int Arr[],const long n);
double Sum(const double Arr[],const long n);
char Sum(const char Arr[],const long n);

double Avg_value(const int i_Arr[], long n);
double Avg_value(const double i_Arr[], long n);
char Avg_value(const char i_Arr[], long n);

int Min_value(const int Arr[], long n);
double Min_value(const double Arr[], long n);
char Min_value(const char Arr[], long n);

int Max_value(const int Arr[], long n);
double Max_value(const double Arr[], long n);
char Max_value(const char Arr[], long n);

void Shift_left( int Arr[], long n,int number_of_shift);
void Shift_left( double Arr[], long n, int number_of_shift);
void Shift_left( char Arr[], long n, int number_of_shift);

void Shift_right(int Arr[], int n, int number_of_shift);
void Shift_right(double Arr[], int n, int number_of_shift);
void Shift_right(char Arr[], int n, int number_of_shift);


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
	Shift_left(i_Arr, I_SIZE, number_of_shift);
	Shift_right(i_Arr, I_SIZE, number_of_shift);
	
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
		
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	
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

void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}

void Print(const int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << tab;
		}
		cout << endl;
	}

}