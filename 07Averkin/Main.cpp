#include <iostream>
#include "Fibonacci.h"

using namespace std;

int main() 
{

	for (int i = 1; i <= 20; i++) 
	{
		cout << "fib(" << i << ") = " << fibonacci(i) << endl;
	}
	return 0;
}