#include <iostream>
#include <iomanip>
#include"Agm.h"
using namespace std;

int main()
{
    double a, b;
	cout << setprecision(16) << endl;
	for (double a = 1, b = 2; a <= 15; a += 2, b += 3)
	{
		try
		{
			cout << "\na = " << a << ", b = " << b << "\nagm(" << a << ',' << b << ") = " << agm(a, b) << endl;
		}
		catch (double a)
		{
			cout << "b must be bigger than a ("<<a<<")." << endl;
		}
	}
	
    return 0;
}