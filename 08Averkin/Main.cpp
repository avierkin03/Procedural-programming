#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{ 
	//Task 1
	cout << "Task 1" << endl;
	unsigned steps = 0;

	for (int i = -2; i < 3; i++)
	{
		for (unsigned int j = 0; j < 5; j++)
		{
			cout << i << '^' << j << ": " << power(i, j, steps) << endl;
			cout << "Number of steps = " << steps <<'\n'<< endl;
			steps = 0;
		}
	}
	cout << "---------------------------------------"<<endl;

	//Task 2
	cout << "Task 2" << endl;
	steps = 0;
	for (int n = 0; n <= 10; n++)
	{
		cout << "F(" << n << ") = " << Fibonaci(n, steps) << endl;
		cout << "Number of steps = " << steps <<'\n'<< endl;
		steps = 0;
	}
	cout << "---------------------------------------" << endl;

	//Task 3
	cout << "Task 3" << endl;
	steps = 0;
	for (int n = 0; n <= 10; n++)
	{
		cout << "F(" << n << ") = " << fibonacci(n,steps) << endl;
		cout << "Number of steps = " << steps << '\n' << endl;
		steps = 0;
	}
	cout << endl;
	return 0;
}