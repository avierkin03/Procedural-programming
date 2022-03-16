#include <math.h>
#include <assert.h>

//Function1: sin(x) = x, [-1,1];
double mySin1(const double x) {
	return (sin(x) - x);
}

//Function2: sin(x) = 0, [π-1, π]
double mySin2(const double x) {
	return sin(x);
}

//Function3: ln(x )= 1, [2, 3];
double myLn(const double x) {
	return log(x) - 1;
}

//Function4: exp(x) = 2 - x, [0, 2] 
double myExp(const double x) {
	return exp(x) - 2 + x;
}

double dichotomy(double (*f)(double), double a, double b, const double eps) {
	assert(a < b);
	double middle;
	while (fabs(a - b) >= eps) {
		middle = (a + b) / 2;
		if (f(middle) == 0) return middle;
		if (f(a) * f(middle) < 0)
			b = middle;
		else
			a = middle;
	}
	return (a + b) / 2;
}