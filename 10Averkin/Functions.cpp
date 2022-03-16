#define _USE_MATH_DEFINES 
#include <cmath>
#include <cassert>
using namespace std;


double g_a = 0;
double g_b = 0;

double elipticIntegral(double x)
{
	return (1 / sqrt(g_a * g_a * sin(x) * sin(x) + g_b * g_b * cos(x) * cos(x)));
}

double Simpson(double a, double b, double(*f)(double), double eps)
{
	int n = 2;
	double h = (b - a) / 2;
	double pr = 0;
	double s1 = h * (f(a) + f(b));
	double s2 = 0;
	double s4 = 4 * h * f(a + h);
	double s = s1 + s2 + s4;
	do {
		pr = s;
		n *= 2;
		h /= 2;
		s1 /= 2;
		s2 = s2 / 2 + s4 / 4;
		s4 = 0;
		int i = 1;
		do {
			s4 = s4 + f(a + i * h);
			i += 2;
		} while (i <= n);
		s4 = 4 * h * s4;
		s = s1 + s2 + s4;
	} while (abs(s - pr) > eps);
	return s / 3;
}

double agm(double a, double b)
{
	double aCurr = sqrt(a * b);
	double bCurr = (a + b) / 2.0;
	do
	{
		a = aCurr;
		b = bCurr;
		aCurr = sqrt(a * b);
		bCurr = (a + b) / 2.0;
	} while (aCurr > a && bCurr < b && aCurr < bCurr);
	return (a + b) / 2;
}

double simpsonTest(double a, double b)
{
	const double eps = 1e-15;
	g_a = a;
	g_b = b;
	double integral = Simpson(0, M_PI / 2, elipticIntegral, eps);
	double agmResult = agm(a, b);
	assert(abs(1 / agmResult - 2 / M_PI * integral) < eps);
	return agmResult;
}