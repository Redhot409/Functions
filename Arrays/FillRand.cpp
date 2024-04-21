//FillRand.cpp
#include"FillRand.h"

void FillRand(int Arr[], const long N, int minRand, int maxRand)
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
		Arr[i] = minRand + rand() % (maxRand - minRand);
	}
}