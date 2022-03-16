#define _USE_MATH_DEFINES
#include <math.h> 
#include <cmath>


//calculation of sin(x)
//intermediateValueSin = x, sum0 = x;
//intermediateValueSink = intermediateValueSin(k-1)*(-x)*x/(2*k*(2*k +1));  sumk = sum(k-1)+intermediateValueSink 
double sinus(double x, double eps)
{
	x = fmod(x, 2 * M_PI);    //This allows you to find the corresponding angle in the range -2π <= x <= 2π. Otherwise, for values greater than 35, the result is incorrect.
	double sum = x, intermediateValueSin = x;
	int k = 1;
	while (fabs(intermediateValueSin) > eps)
	{
		intermediateValueSin *= -x * x / (2 * k * (2 * k + 1));
		sum += intermediateValueSin;
		k++;
	}
	return sum;
}


//calculation of cos(x)
//intermediateValueCos = 1, sum0 = 1;    
//intermediateValueCosk = intermediateValueCos(k-1)*(-x)*x/(2*k*(2*k-1));   sumk = sum(k-1)+intermediateValueCosk
double cosinus(double x, double eps)
{ 
	x = fmod(x, 2 * M_PI);      //This allows you to find the corresponding angle in the range -2π <= x <= 2π. Otherwise, for values greater than 35, the result is incorrect.
	double sum = 1, intermediateValueCos = 1;
	int k = 1;
	while (fabs(intermediateValueCos) > eps)
	{
		intermediateValueCos *= -x * x / (2 * k * (2 * k - 1));
		sum += intermediateValueCos;
		k++;
	}
	return sum;
}


//calculation of e^x
//a0=1; sum0=a0;    ak=a(k-1)*x/k; sk=s(k-1)+ak; k=1,2,...,n
double exp(double x, double eps)
{
	double sum = 1;
	double intermediateValue = 1;
	for (double i = 1; abs(intermediateValue) > eps; i++)
	{
		intermediateValue *= x;
		intermediateValue /= i;
		sum += intermediateValue;
	}
	return sum;
}

//calculation of ln(x)
//intermediateValue = x, sum0 = x;
//a0=x, sum0=x;    intermediateValuek = intermediateValue(k-1)*((-x)*(k - 1)/k), sumk = sum(k-1) + intermediateValuek
double ln(double x, double eps)
{
	double sum = 0;
	double intermediateValue = x;
	int k = 1;
	while (fabs(intermediateValue) > eps)
	{
		sum += intermediateValue;
		++k;
		intermediateValue *= -x * (k - 1) / k;
	}
	return sum;
}

