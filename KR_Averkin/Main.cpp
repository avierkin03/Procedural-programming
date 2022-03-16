#include <iostream>
#include "Functions.h"
using namespace std;

int main()
{
	cout << "\n---------------------------------Task1-------------------------------------\n" << endl;
	unsigned int x = 1;
	//x = (x = 1 & 0) ? ~x : x + x;		//unsimplified notation
	cout << "In the expression (x = 1 & 0) - x is assigned the value 0, which is false.\n"<< 
		"Therefore, (x + x) will be executed, which equals 0 (0+0=0). So, instead of\n x = (x=1&0)?~x:x+x we can just write x=0."<<endl;
	x = 0;						        //simplified notation

	cout << "\n-------------------------------------Task2-------------------------------------\n" << endl;

	long long myX = 1;
	long long myN = 2;
	cout << "Result for x = " << myX << ", y = " << myN <<": "<< recurrence(myX, myN) << endl;

	cout << "\n-------------------------------------Task3-------------------------------------\n" << endl;
	
	unsigned int myWord = 4550;
	Word mWord;
	mWord._k = myWord;

	//to show each byte in the word
	cout << "Number: " << myWord << "\nIts 4 bytes with values:" << endl;
	for (int i = 0; i < 4; i++)
		cout <<  getByte(myWord, i) << endl;

	cout << "Sum of bytes(first method)  = " <<  sumOfBytes_1(myWord) << endl;			//using the first way
	cout << "Sum of bytes(second method) = " <<  sumOfBytes_2(mWord) << endl;			//using the second way

	cout << "\n-------------------------------------Task4-------------------------------------\n" << endl;

    myWord = 0x12345678;
	mWord._k = myWord;

	//show the number and its bytes
	cout <<"Number: " << hex << myWord << "\nIts 4 bytes with values:" << endl;
	for (int i = 0; i < 4; i++)
		cout << hex << getByte(myWord, i) << endl;

	//Swap using the first way
	cout << "\nSwap paired with unpaired bytes(first method):" << endl;
	swapBytes_1(mWord);
	unsigned int res = (unsigned int)mWord._k;
	for (int i = 0; i < 4; i++)
		cout << hex << getByte(res, i) << endl;

	//Swap using the second way
	cout << "\nSwap paired with unpaired bytes(second method):" << endl;
	myWord = swapBytes_2(myWord);
	for (int i = 0; i < 4; i++)
		cout << hex << getByte(myWord, i) << endl;


	cout << "\n-------------------------------------Task5-------------------------------------\n" << dec <<endl;

	for (int num = 22; num < 24; num++)
	{
		if (multipleElvn(num))
			cout << "Number " << num << " is divisible by 11." << endl;
		else
			cout << "Number " << num << " is not divisible by 11." << endl;
	}
	
	cout << "\n-------------------------------------Task6-------------------------------------\n" << endl;

	Matrix m1 = { 3, 2, new double* [3] };
	m1._matr[0] = new double[2];
	m1._matr[1] = new double[2];
	m1._matr[2] = new double[2];
	m1._matr[0][0] = -1;
	m1._matr[0][1] = 2;
	m1._matr[1][0] = 4;
	m1._matr[1][1] = 5;
	m1._matr[2][0] = -7;
	m1._matr[2][1] = 8;
	cout << "1) Given matrix:\n";
	printMatrix(m1);
	double n = 3.0;
	Matrix mult_m1 = m1 * n;
	cout << "\nResult of multiplication  matrix*"<< n <<':'<< endl;
	printMatrix(mult_m1);
	mult_m1 = n * m1;
	cout << "\nResult of multiplication "<<n<<"*matrix (to show commutativity):" << endl;
	printMatrix(mult_m1);

	Matrix m2 = { 3, 3, new double* [3] };
	m2._matr[0] = new double[3];
	m2._matr[1] = new double[3];
	m2._matr[2] = new double[3];
	m2._matr[0][0] = 1;
	m2._matr[0][1] = 2;
	m2._matr[0][2] = 3;
	m2._matr[1][0] = 4;
	m2._matr[1][1] = 5;
	m2._matr[1][2] = 6;
	m2._matr[2][0] = 7;
	m2._matr[2][1] = 8;
	m2._matr[2][2] = 9;
	cout << "\n2) Given matrix:\n";
	printMatrix(m2);
	n = -6.0;
	Matrix mult_m2 = m2 * n;
	cout << "\nResult of multiplication  matrix*" << n << ':' << endl;
	printMatrix(mult_m2);
	mult_m2 = n * m2;
	cout << "\nResult of multiplication " << n << "*matrix (to show commutativity):" << endl;
	printMatrix(mult_m2);

	cout << "\n-------------------------------------Task7-------------------------------------\n" << endl;

	cout << "Matrix:" << endl;
	printMatrix(m1);
	cout << "\nMatrix after using unary minus:" << endl;
	m1 = -m1;
	printMatrix(m1);

	cout << "\n-------------------------------------Task8-------------------------------------\n" << endl;

	const int size = 5;
	double numbers[size] = {1,4,9,16,25};
	try 
	{
		cout << "f(x) = sqrt(x)+1" << endl;
		Pairs* pairs = buildPairs(mySqrt, numbers, size);
		for (int i = 0; i < size; i++)
			cout << "sqrt(" << pairs[i]._x << ") + 1 = " << pairs[i]._y << endl;
	}
	catch (double x)
	{
		cout << "You gave negative number: " << x << ", but it must be positive." << endl;
	}
	
	cout << "\n-------------------------------------Task9-------------------------------------\n" << endl;

	MyString str1 = { "program" };
	MyString str2 = { "programming" };

	cout << "Compare if 'program' < 'programming' : ";
	if (str1 < str2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	cout << "\nCompare if 'programming' < 'program' : ";
	if (str2 < str1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


	cout << "\n-------------------------------------Task10-------------------------------------\n" << endl;

	cout << "Demonstration of the operator '<<' I wrote" << endl;
	cout << str1 << endl;
	cout << str2 << endl;

	return 0;
}


