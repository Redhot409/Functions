//Avg_value.cpp
#include"Avg_value.h"

template<typename T>
double Avg_value(const T Arr[], const long N)
{
	{
		return Sum(Arr, N) / (double)N;
	}
}