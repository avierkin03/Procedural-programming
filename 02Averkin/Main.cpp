#include <iostream>
#include <chrono>
#include "Power.h"
using namespace std;


int main() {
	int counter = 0;
	int n = 3;
	for (double x = -4, n = 3; x <= 16; x+=4, n+=2)
	{
		auto begin = std::chrono::steady_clock::now();
		power(x, n, counter);
		auto end = std::chrono::steady_clock::now();
		auto elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
		cout << "\nSimple power:\n" << x << "^" << n << " = " << power(x, n, counter) << "\nNumber of steps: " << counter << endl;
		cout << "The time: " << elapsed_ms.count() << " nanoseconds\n";

		begin = std::chrono::steady_clock::now();
		quickPower(x, n, counter);
		end = std::chrono::steady_clock::now();
		elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
		cout << "\nQuick power:\n" << x << "^" << n << " = " << quickPower(x, n, counter) << "\nNumber of steps: " << counter << endl;
		cout << "The time: " << elapsed_ms.count() << " nanoseconds\n";

		begin = std::chrono::steady_clock::now();
		recursivePow(x, n);
		end = std::chrono::steady_clock::now();
		elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
		cout << "\nRecursive power:\n" << x << "^" << n << " = " << recursivePow(x, n) << endl;
		cout << "The time: " << elapsed_ms.count() << " nanoseconds\n";

		begin = std::chrono::steady_clock::now();
		recursiveQuickPower(x, n);
		end = std::chrono::steady_clock::now();
		elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
		cout << "\nRecursive quickPower:\n" << x << "^" << n << " = " << recursiveQuickPower(x, n) << endl;
		cout << "The time: " << elapsed_ms.count() << " nanoseconds\n";

		cout << "---------------------------------------------------------------" << endl;
	}

	cout << "\nFor small numbers, the RecursivePower is faster than the SimplePower, but with increasing values of 'x' and 'n', the SimplePower becomes faster than the Recursive one. As for QuickPower, RecursiveQuickPower is slower." << endl;
	return 0;
}