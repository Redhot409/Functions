//Functions
#include<iostream>
using namespace std;

int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quote(int a, int b);
int Factorial(int a);
double Power(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quote(a, b) << endl;
	cout << a << " ^ " << b << " = " << Power(a, b) << endl;
	cout << a << " ! " << " = " << Factorial(a) << endl;

}

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	return a - b;
}
int Prod(int a, int b)
{
	return a * b;
}
double Quote(int a, int b)
{
	return (double)a / b;
}
int Factorial(int a)
{
	int c = 1;
	for (int i = 1; i <=a; i++)
	{
		c*= i;
	}
	return c;
}
double Power(int a, int b)
{
	if (b > 0)
	{
		int c = 1;
		for (int i = 1; i <= b; i++)
		{
			c *= a;
		}
		return c;
	}
	if (b < 0)
	{
		 double c = 1;
		for (int i = 1; i <=abs(b); i++)
		{
			c /= a;
		}
		return c;
	}
}