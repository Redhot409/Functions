//Sum.cpp
#include"Sum.h"

template<typename T>
T Sum(const T Arr[], long N)
{
	T sum = 0;
	for (int i = 0; i < N - 1; i++)
	{
		sum += Arr[i];
	}
	return sum;
}