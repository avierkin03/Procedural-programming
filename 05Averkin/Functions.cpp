#include <iostream>
#include <cassert>
using namespace std;

//Method fills the array with coefficients in random order with numbers from 0 to 6
void fillArray(double* coeff, size_t size)
{
    for (int i=0; i < size; i++)
    {
        coeff[i] = rand() % 7;               //rand() % 7 - from 0 to 6
        cout << coeff[i] << ' ';             //if you want to see the generated coefficients(isn't necessary to see)
    }
    return;
}

//Counts the value of a polynomial according to Horner's scheme
//f(x)=a0 + a1*x + a2*x^2 + a3*x^3 +...+ ak*x^k =  SUM(k=0 to n)ak*x^k
double sum(double* coeff, size_t size, double x)
{
    double s = 0;
    fillArray(coeff, size);
    for (int i=size-1; i >= 0; i--)
    {
        s = s * x + coeff[i];
    }
    return s;
}

//checks if x==1 or x==-1. If its true, then calculates the polynomial according to Gorenr's scheme(it will be
// the sum of the coefficients)
double Horner(double* coeff, size_t size, double x)
{
    double result = 0;
    assert(((x == 1) || (x == -1)) ? (result = sum(coeff,size, x)) : true);
    return result;
}

//calculates the polynomial according to Gorenr's scheme
double sHorner(double* coeff, size_t size, double x)
{
    return sum(coeff, size, x);
}


