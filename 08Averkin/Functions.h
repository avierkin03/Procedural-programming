#pragma once
struct Matrix2x2
{
	int _11, _12, _21, _22;
};

struct Vector2
{
	int _1, _2;
};

//double Fibonaci(unsigned int n);
double Fibonaci(unsigned int n, unsigned int& counter);
double power(double x, unsigned int n, unsigned& counter);
int fibonacci(int n, unsigned int& counter);