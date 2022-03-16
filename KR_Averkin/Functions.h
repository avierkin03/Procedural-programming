#pragma once
#include <iostream>
using namespace std;

/////////////////////////////////////////Task2/////////////////////////////////////////
inline long long quickPower(long long x, long long y)
{
	int n = y;
	long long result = 1;
	while (n > 0)
	{
		if (n % 2)
		{
			result *= x;
			--n;
		}
		else
		{
			x *= x;
			n /= 2;
		}
	}
	return result;
}
inline long long recurrence(long long x, long long n) {
	long long res = 1;
	long long fPow = 1;
	long long coef1 = 1;
	long long coef2 = 2;
	long long mPow = coef1 * quickPower(coef2, coef1);
	if (x == 1) res = n + 1;
	else {
		for (int i = 0; i < n; i++) {
			res += quickPower(x, mPow);
			coef1++;
			coef2++;
			mPow = coef1 * quickPower(coef2, coef1);
		}
	}
	return res;
}

/////////////////////////////////////////Task3-Task4/////////////////////////////////////////
int sumOfBytes_1(unsigned int word);
union Word
{
    unsigned int _k;
    struct Word4
    {
        unsigned int _byte1 : 8;
        unsigned int _byte2 : 8;
        unsigned int _byte3 : 8;
        unsigned int _byte4 : 8;
    } _word;
};
int sumOfBytes_2(Word word);
unsigned short getByte(unsigned int word, size_t n);
Word swapBytes_1(Word& word);
unsigned int swapBytes_2(unsigned int word);

/////////////////////////////////////////Task5/////////////////////////////////////////
bool multipleElvn(int num);

/////////////////////////////////////////Task6-Task7/////////////////////////////////////////
struct Matrix
{
    size_t _n;
    size_t _m;
    double** _matr;
};
const Matrix& operator*(const Matrix& m, double n);
const Matrix& operator*(const double n, const Matrix& m);
const Matrix& operator-(const Matrix& m);
void printMatrix(Matrix a);

/////////////////////////////////////////Task8/////////////////////////////////////////
struct Pairs
{
    double _x;
    double _y;
};
double mySqrt(const double x);
Pairs* buildPairs(double(*f)(double), double a[], size_t size);

/////////////////////////////////////////Task9-Task10/////////////////////////////////////////
struct MyString {
	const char* string;
};
bool operator<(const MyString& str1, const MyString& str2);
ostream& operator <<(ostream& os, const MyString& str);




