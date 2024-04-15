//FillRand
#pragma once
#include"stdafx.h"
#include"Constants.h"


void FillRand(int Arr[], const long n, int minRand = 0, int maxRand = 100);
void FillRand(double irr[], const long n, int minRand = 0, int maxRand = 100);
void FillRand(char Arr[], const long n, int minRand = 0, int maxRand = 100);
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS, double minRand = 0, double maxRand = 100);
void FillRand(char Arr[ROWS][COLS], const int ROWS, const int COLS, char minRand = 0, char maxRand = 100);
