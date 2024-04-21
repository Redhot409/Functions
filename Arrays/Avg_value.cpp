//Avg_value.cpp
#include"Avg_value.h"

double Avg_value(const int Arr[], const long N)
{
	{
		return Sum(Arr, N) / (double)N;
	}
}
double Avg_value(const double Arr[], const long N)
{
	{
		return Sum(Arr, N) / (double)N;
	}
}
char Avg_value(const char Arr[], const long N)
{
	{
		return Sum(Arr, N) / (double)N;
	}
}
double Avg_value(const int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg_value(const double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);

}
char Avg_value(const char Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (char)Sum(Arr, ROWS, COLS) / (ROWS * COLS);

}