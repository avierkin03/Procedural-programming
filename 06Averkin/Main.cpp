#include <iostream>
#include"Sorting.h"

using namespace std;

int main()
{
	int array[] = {30,20,60,50,-10,80,10,40};
	const int size = sizeof(array) / sizeof(array[0]);
	sort(array, size);
	cout << "Sorted array in ascending order:\n";
	printArray(array, size);
	return 0;
}