//Min_value.cpp
#include"Min_value.h"

template<typename T>
T Min_value(const T Arr[], long N)
{
	T min = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] < min) min = Arr[i];
	}	return min;
}