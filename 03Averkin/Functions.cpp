#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <iostream>

using namespace std;

//Calculation of Gaussian integral
//SUM(from k=0 to +inf) ((-1)^k * x^(2k+1))/(2k+1)k!
double gaussIntegr(double x)
{
    double intermValue = x;
    double k = 0;
    double eps = 0.000000001;
    double res = 0;
    do {
        res += intermValue;
        intermValue *= -x * x * (2 * k + 1) / (2 * k + 3) / (k + 1);
        k++;
    } while (fabs(intermValue) > eps);
    return res;
}

//Calculation of Gaussian integral using Simpson's method 
typedef double(*pointFunc)(double);
double f(double t)
{
    double a = pow(t, 2);
    double res = pow(M_E, (-a));
    return res;
}

double simpsonIntegral(pointFunc f,double b) {
    int n = 6;                                  //number of intervals for calculation
    double a = 0;                               //lower limit of integration
    const double width = (b - a) / n;

    double simpsonIntegral = 0;
    for (int iter = 0; iter < n; iter++) {
        const double x1 = a + iter * width;
        const double x2 = a + (iter + 1) * width;
        simpsonIntegral += (x2 - x1) / 6.0 * (f(x1) + 4.0 * f(0.5 * (x1 + x2)) + f(x2));
    }
    return simpsonIntegral;
}


//Calculation of e^x
//a0=1; sum0=a0;    ak=a(k-1)*x/k; sk=s(k-1)+ak; k=1,2,...,n
double exponenta(double x)
{
    double sum = 1;
    double intermediateValue = 1;
    double eps = 0.000000001;
    for (double i = 1; abs(intermediateValue) > eps; i++)
    {
        intermediateValue *= x;
        intermediateValue /= i;
        sum += intermediateValue;
    }
    return sum;
}

//Fixed calculation of e^x
double fixedExponenta(double x)
{
    double const E = M_E;
    double res = 0;

    double fraction, integer;               
    fraction = modf(x, &integer);      
    
    if (x >= 0)
    {
        res = pow(E, integer) * pow(E, fraction);
    }
    else
    {
        res = 1 / pow(E, -integer) * pow(E, fraction);
    }
    return res;
}



