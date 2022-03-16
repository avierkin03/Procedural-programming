#include <iostream>
#include <cmath>
#include"Realization.h"
using namespace std;


int main()
{
	double eps = 1.e-10;
	double x=-167;
	cout << "Function for calculating e^x, (eps=0.00000000001):\n" << endl;

	cout <<"exp("<<x<<")              = "  << exp(x, eps) <<"       (does not match)" << endl;
	cout << "exp(" << x << ")(using cmath) = " << exp(x) << endl;
	
	x = -19;
	cout << "\nexp(" << x << ")              = " << exp(x, eps) << "       (does not match)" << endl;
	cout << "exp(" << x << ")(using cmath) = " << exp(x) << endl;

	x = -18;
	cout << "\nexp(" << x << ")              = " << exp(x, eps) << endl;
	cout << "exp(" << x << ")(using cmath) = " << exp(x) << endl;

	x = -14;
	cout << "\nexp(" << x << ")              = " << exp(x, eps) << endl;
	cout << "exp(" << x << ")(using cmath) = " << exp(x) << endl;
	
	x = -12;
	cout << "\nexp(" << x << ")              = " << exp(x, eps) << endl;
	cout << "exp(" << x << ")(using cmath) = " << exp(x) << endl;

	x = -1;
	cout << "\nexp(" << x << ")              = " << exp(x, eps) << endl;
	cout << "exp(" << x << ")(using cmath) = " << exp(x) << endl;

	x = 0;
	cout << "\nexp(" << x << ")              = " << exp(x, eps) << endl;
	cout << "exp(" << x << ")(using cmath) = " << exp(x) << endl;

	x = 1;
	cout << "\nexp(" << x << ")              = " << exp(x, eps) << endl;
	cout << "exp(" << x << ")(using cmath) = " << exp(x) << endl;

	x = 50;
	cout << "\nexp(" << x << ")              = " << exp(x, eps) << endl;
	cout << "exp(" << x << ")(using cmath) = " << exp(x) << endl;

	x = 247;
	cout << "\nexp(" << x << ")              = " << exp(x, eps) << endl;
	cout << "exp(" << x << ")(using cmath) = " << exp(x) << endl;

	x = 402;
	cout << "\nexp(" << x << ")              = " << exp(x, eps) << endl;
	cout << "exp(" << x << ")(using cmath) = " << exp(x) << endl;

	cout << "\nAcceptable region(-19,+inf)."<< endl;
	cout << "___________________________________" << endl;

	cout << "\nFunction for calculating sin(x), (eps=0.0000001):\n" << endl;
	x = -359;
	cout << "\nsin(" << x << ")              = " << sinus(x, eps) << endl;
	cout << "sin(" << x << ")(using cmath) = " << sin(x) << endl;

	x = -173;
	cout << "\nsin(" << x << ")              = " << sinus(x, eps) << endl;
	cout << "sin(" << x << ")(using cmath) = " << sin(x) << endl;

	x = -20;
	cout << "\nsin(" << x << ")              = " << sinus(x, eps) << endl;
	cout << "sin(" << x << ")(using cmath) = " << sin(x) << endl;

	x = -9;
	cout << "\nsin(" << x << ")              = " << sinus(x, eps) << endl;
	cout << "sin(" << x << ")(using cmath) = " << sin(x) << endl;

	x = 0;
	cout << "\nsin(" << x << ")              = " << sinus(x, eps) << endl;
	cout << "sin(" << x << ")(using cmath) = " << sin(x) << endl;

	x = 1;
	cout << "\nsin(" << x << ")              = " << sinus(x, eps) << endl;
	cout << "sin(" << x << ")(using cmath) = " << sin(x) << endl;

	x = 5;
	cout << "\nsin(" << x << ")              = " << sinus(x, eps) << endl;
	cout << "sin(" << x << ")(using cmath) = " << sin(x) << endl;

	x = 18;
	cout << "\nsin(" << x << ")              = " << sinus(x, eps) << endl;
	cout << "sin(" << x << ")(using cmath) = " << sin(x) << endl;

	x = 31;
	cout << "\nsin(" << x << ")              = " << sinus(x, eps) << endl;
	cout << "sin(" << x << ")(using cmath) = " << sin(x) << endl;

	x = 78;
	cout << "\nsin(" << x << ")              = " << sinus(x, eps) << endl;
	cout << "sin(" << x << ")(using cmath) = " << sin(x) << endl;

	x = 166;
	cout << "\nsin(" << x << ")              = " << sinus(x, eps) <<endl;
	cout << "sin(" << x << ")(using cmath) = " << sin(x) << endl;

	x = 546;
	cout << "\nsin(" << x << ")              = " << sinus(x, eps) << endl;
	cout << "sin(" << x << ")(using cmath) = " << sin(x) << endl;

	cout << "\nAcceptable region(-inf;+inf)." << endl;
	cout << "___________________________________" << endl;

	cout << "\nFunction for calculating cos(x), (eps=0.0000001):" << endl;
	x = -999;
	cout << "\ncos(" << x << ")              = " << cosinus(x, eps) <<endl;
	cout << "cos(" << x << ")(using cmath) = " << cos(x) << endl;

	x = -457;
	cout << "\ncos(" << x << ")              = " << cosinus(x, eps) << endl;
	cout << "cos(" << x << ")(using cmath) = " << cos(x) << endl;

	x = -136;
	cout << "\ncos(" << x << ")              = " << cosinus(x, eps) << endl;
	cout << "cos(" << x << ")(using cmath) = " << cos(x) << endl;

	x = -9;
	cout << "\ncos(" << x << ")              = " << cosinus(x, eps) << endl;
	cout << "cos(" << x << ")(using cmath) = " << cos(x) << endl;

	x = 0;
	cout << "\ncos(" << x << ")              = " << cosinus(x, eps) << endl;
	cout << "cos(" << x << ")(using cmath) = " << cos(x) << endl;

	x = 1;
	cout << "\ncos(" << x << ")              = " << cosinus(x, eps) << endl;
	cout << "cos(" << x << ")(using cmath) = " << cos(x) << endl;

	x = 5;
	cout << "\ncos(" << x << ")              = " << cosinus(x, eps) << endl;
	cout << "cos(" << x << ")(using cmath) = " << cos(x) << endl;

	x = 30;
	cout << "\ncos(" << x << ")              = " << cosinus(x, eps) << endl;
	cout << "cos(" << x << ")(using cmath) = " << cos(x) << endl;

	x = 91;
	cout << "\ncos(" << x << ")              = " << cosinus(x, eps) << endl;
	cout << "cos(" << x << ")(using cmath) = " << cos(x) << endl;

	x = 256;
	cout << "\ncos(" << x << ")              = " << cosinus(x, eps) << endl;
	cout << "cos(" << x << ")(using cmath) = " << cos(x) << endl;

	x = 1001;
	cout << "\ncos(" << x << ")              = " << cosinus(x, eps) <<endl;
	cout << "cos(" << x << ")(using cmath) = " << cos(x) << endl;

	cout << "\nAcceptable region(-inf;+inf)." << endl;
	cout << "___________________________________" << endl;

	cout << "\nFunction for calculating ln(1+x), (eps=0.0000001):" << endl;
	x = -0.9;
	cout << "\nln(1+(" << x << "))              = "<< ln(x, eps) << endl;
	cout << "ln(1+(" << x << "))(using cmath) = " << log(1 + x) << endl;

	x = -0.2;
	cout << "\nln(1+(" << x << "))              = " << ln(x, eps) << endl;
	cout << "ln(1+(" << x << "))(using cmath) = " << log(1 + x) << endl;

	x = 0;
	cout << "\nln(1+(" << x << "))              = " << ln(x, eps) << endl;
	cout << "ln(1+(" << x << "))(using cmath) = " << log(1 + x) << endl;

	x = 0.2;
	cout << "\nln(1+(" << x << "))              = " << ln(x, eps) << endl;
	cout << "ln(1+(" << x << "))(using cmath) = " << log(1 + x) << endl;

	x = 0.6;
	cout << "\nln(1+(" << x << "))              = " << ln(x, eps) << endl;
	cout << "ln(1+(" << x << "))(using cmath) = " << log(1 + x) << endl;

	x = 0.9;
	cout << "\nln(1+(" << x << "))              = " << ln(x, eps) << endl;
	cout << "ln(1+(" << x << "))(using cmath) = " << log(1 + x) << endl;

	cout << "\nAcceptable region: (-1;1)." << endl;

	return 0;
}

