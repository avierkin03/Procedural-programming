#include <iostream>
#include <cassert>
using namespace std;


// function to swap the the position of two elements
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// function to print an array
void printArray(int array[], const int size)
{
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}


//Checks if all elements from an unsorted array are in a sorted array
bool checkElements(int sortedArr[], int initialArr[], const int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (sortedArr[i] == initialArr[j])
				++counter;
		}
	}
	if (counter == size)
		return true;
	else
		return false;
}

//Checks if all elements of an array are in ascending order
bool ascOrder(int sortedArr[], const int size)
{
	int fl = 0;
	for (int i = 0; i < size; ++i) {
		if (i)
			if (sortedArr[i] < sortedArr[i - 1])
				fl = 1;
	}
	if (!fl)
		return true;
	else {
		return false;
	}
}

//sort the array using  selectionSort(in ascending order)
void selectionSort(int array[], const int size)
{
	for (int startIndex = 0; startIndex < size - 1; ++startIndex)
	{
		//The minIndex stores the index of the smallest value that we found in this iteration. (the smallest element in this iteration is the first element (index 0))
		int minIndex = startIndex;
		// Looking for a smaller element in the rest of the array
		for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
		{
			// Select the minimum element in each loop.
			if (array[currentIndex] < array[minIndex])
				minIndex = currentIndex;
		}
		// put min at the correct position
		swap(&array[startIndex], &array[minIndex]);
	}
}

//The method of sorting the array is called and the assertions are checked
void sort(int array[], const int size)
{
	int *copyArr = new int[size];
	for (int i = 0; i < size; i++)
	{
		copyArr[i] = array[i];
	}
	selectionSort(array, size);
	assert(((checkElements(array, copyArr, size)) && (ascOrder(array, size))) ? true : false);
	delete []copyArr;
}
