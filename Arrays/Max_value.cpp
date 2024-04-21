//Max_value
#include"Max_value.h"

template<typename T>
T Max_value(const T Arr[], long N)
{
	T max = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] > max) max = Arr[i];
	}	return max;
}