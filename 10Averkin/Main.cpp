#include <iostream>
#include "Functions.h"
using namespace std;

int main()
{
	for (double a = 0.1, b = 0.2; b<1; a*=2,b*=2)
	{
		cout << "Simpson integral for a = " << a << "; b = " << b << ": " << simpsonTest(a, b) << endl;
	}
	return 0;
}
