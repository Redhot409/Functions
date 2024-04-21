//Sum.cpp
#include"Sum.h"

int Sum(const int Arr[], long N)
{
	int sum = 0;
	for (int i = 0; i < N - 1; i++)
	{
		sum += Arr[i];
	}
	return sum;
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
char Sum(const char Arr[], long N)
{
	int sum = 0;
	for (int i = 0; i < N - 1; i++)
	{
		sum += Arr[i];
	}
	return  sum;
}
int Sum(const int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;
}
double Sum(const double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;

}
double Sum(const char Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;

}