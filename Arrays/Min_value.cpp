//Min_value
#include"Min_value.h"

int Min_value(const int Arr[], long N)
{
	int min = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] < min) min = Arr[i];
	}	return min;
}
double Min_value(const double Arr[], long N)
{
	double min = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] < min) min = Arr[i];
	}	return min;
}
char Min_value(const char Arr[], long N)
{
	int min = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] < min) min = Arr[i];
	}	return min;
}
int Min_value(const int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}
	}
	return min;
}
double Min_value(const double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}
	}
	return min;

}
char Min_value(const char Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}
	}
	return min;

}