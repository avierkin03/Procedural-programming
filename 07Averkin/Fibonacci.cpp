#include"Fibonacci.h"

//Multiplication: vector*matrix
Vector2 vec_matrMult(Vector2 v, Matrix2x2 m)
{
	int a1 = m._11 * v._1 + m._12 * v._2;
	int a2 = m._21 * v._1 + m._22 * v._2;
	return Vector2{ a1,a2 };
}

//Multiplication: matrix*matrix
Matrix2x2 matrixMult(Matrix2x2 t, Matrix2x2 m) 
{
	int x1 = t._11 * m._11 + t._12 * m._21;
	int x2 = t._11 * m._12 + t._12 * m._22;
	int x3 = t._21 * m._11 + t._22 * m._21;
	int x4 = t._21 * m._12 + t._22 * m._22;
	return Matrix2x2{ x1,x2,x3,x4 };
}

//Quick power: (matrix)^n
Matrix2x2 matrixQuickPow(Matrix2x2 matrix, int n)
{
	Matrix2x2 result{ 1,0,0,1 };
	while (n > 0)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
			matrix = matrixMult(matrix, matrix);
		}
		else
		{
			n = n - 1;
			result = matrixMult(result, matrix);
			n = n / 2;
			matrix = matrixMult(matrix, matrix);
		}
	}
	return result;
}

//Fibonacci numbers
int fibonacci(int n) 
{
	Matrix2x2 matrix{ 1,1,1,0 };
	Vector2 vec{ 1,0 };
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		Matrix2x2 m = matrixQuickPow(matrix, n - 1);
		Vector2 result = vec_matrMult(vec, m);
		return result._1;
	}
}