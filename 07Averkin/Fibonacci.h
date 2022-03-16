#pragma once
struct Matrix2x2 { int _11, _12, _21, _22; };
struct Vector2 { int _1, _2; };

Vector2 vec_matrMult(Vector2 v, Matrix2x2 m);
Matrix2x2 matrixMult(Matrix2x2 t, Matrix2x2 m);
Matrix2x2 matrixQuickPow(Matrix2x2 matrix, int n);
int fibonacci(int n);