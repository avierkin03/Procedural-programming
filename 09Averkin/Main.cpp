#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
#include "Functions.h"
using namespace std;

int main() {
	double a = 0;
	double b = 0;
	const double eps = 0.1e-7;;
	//const double PI = 3.14159265358979323846;

	//sin(x) = x, [-1,1];
	a = -1;
	b = 1;
	cout << "sin(x)=x, ["<<a<<','<<b<<"]  x = " << dichotomy(mySin1, a, b, eps) << endl;

	//sin(x) = 0, [π-1, π]
	a = M_PI - 1;
	b = M_PI;
	cout << "sin(x)=0, [PI-1,PI]  x = " << dichotomy(mySin2, a, b, eps) << endl;

	//ln(x )= 1, [2, 3];
	a = 2;
	b = 3;
	cout << "ln(x)=1, ["<<a<<','<<b<<"]  x = " << dichotomy(myLn, a, b, eps) << endl;

	//exp(x) = 2 - x, [0, 2] 
	a = 0;
	b = 2;
	cout << "exp(x)=2-x, ["<<a<<','<<b<<"]  x = " << dichotomy(myExp, a, b, eps) << endl;

	return 0;
}