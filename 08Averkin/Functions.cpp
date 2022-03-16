#include "Functions.h"
///////////////////////////////Task 1//////////////////////////////////////

void zet(double& y, double& x, unsigned int& k, unsigned& counter)
{
	++counter;
	if (k > 0)
	{
		if (k % 2 == 1)
		{
			y *= x; k--;
		}
		else
		{
			x *= x; k /= 2;
		}
		zet(y, x, k, counter);
	}
}

double power(double x, unsigned int n, unsigned& counter)
{
	double y = 1;
	zet(y, x, n, counter);
	return y;
}

//////////////////////////////////////////Task 2/////////////////////////////////////////////////

void fib(double& f1, double& f2, unsigned int n, unsigned int& counter)
{
	++counter;
	if (n >= 2)
	{
		double f = f2; f2 += f1; f1 = f;
		fib(f1, f2, n - 1, counter);
	}
}

double Fibonaci(unsigned int n, unsigned int& counter)
{
	double f0 = 0, f1 = 1;
	switch (n)
	{
	case 0:
		return f0; break;
	case 1:
		return f1; break;
	default:
		fib(f0, f1, n, counter);
		return f1;
	}
}

////////////////////////////////////////////////////Task 3//////////////////////////////////////////////////////

//Multiplication: matrix*vector
Vector2 operator*(Matrix2x2 m,Vector2 v)
{
	int a1 = m._11 * v._1 + m._12 * v._2;
	int a2 = m._21 * v._1 + m._22 * v._2;
	return Vector2{ a1,a2 };
}

//Multiplication: matrix*matrix
Matrix2x2 operator*(Matrix2x2 t, Matrix2x2 m)
{
	int x1 = t._11 * m._11 + t._12 * m._21;
	int x2 = t._11 * m._12 + t._12 * m._22;
	int x3 = t._21 * m._11 + t._22 * m._21;
	int x4 = t._21 * m._12 + t._22 * m._22;
	return Matrix2x2{ x1,x2,x3,x4 };
}

//Quick recursive power for matrix
const Matrix2x2 quickRecPower(const Matrix2x2& matrix, const int n, const Matrix2x2& identMatrix, unsigned int& counter)
{
	++counter;
	if (n == 0)
		return identMatrix;
	if (n % 2 == 0)
		return quickRecPower(matrix * matrix, n / 2, identMatrix, counter);
	return quickRecPower(matrix, n - 1, identMatrix * matrix, counter);
}

//Fibonacci numbers
int fibonacci(int n, unsigned int& counter)
{
	if (n == 0)
		return 0;
	const Matrix2x2 identMatrix = { 1,0,0,1 }, matrix = { 1,1,1,0 };
	const Vector2 vector = { 1, 0 };
	Vector2 result = quickRecPower(matrix, n - 1, identMatrix, counter) * vector;
	return result._1;
}