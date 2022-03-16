#include <iostream>
#include <sstream>
#include <cassert>
#include "Functions.h"
using namespace std;

/////////////////////////////////////////Task3-Task4/////////////////////////////////////////

//to show a specific byte in word
unsigned short getByte(unsigned int word, size_t n)
{
	return(word >> 8 * n) & 0xFF;
}

//returns the sum of bytes in a word(v1)
 int sumOfBytes_1(unsigned int word)
{
	int result = 0;
	for (size_t i = 0; i < 4; i++)
	{
		result += ((word >> 8 * i ) & 0xFF);
	}
	return result;
}

 //returns the sum of bytes in a word(v2)
int sumOfBytes_2(Word word)
{
	int result = word._word._byte1 + word._word._byte2 + word._word._byte3 + word._word._byte4;
	return result;
}

//Swaps paired and unpaired bytes(first method)
  Word swapBytes_1(Word &word)
  {
	  unsigned int b1 = word._word._byte1;
	  word._word._byte1 = word._word._byte2;
	  word._word._byte2 = b1;
	  unsigned int b3 = word._word._byte3;
	  word._word._byte3 = word._word._byte4;
	  word._word._byte4 = b3;
	  return word;
  }
 
  //Swaps paired and unpaired bytes(second method)
  unsigned int swapBytes_2(unsigned int word)
  {
	  unsigned int a = 0xFF00FF & word, b = 0xFF00FF00 & word;
	  unsigned int result = (a << 8) | (b >> 8);
	  return result;
  }

  /////////////////////////////////////////Task5/////////////////////////////////////////

 //Function to find that number divisible by 11 or not
 bool multipleElvn(int number) 
 {
	 ostringstream ost;
	 ost << number;
	 string num = ost.str();
	 int length = num.length();
	 long oddSum = 0, evenSum = 0; //Compute sum of evenand odd digit sums
	 for (int i = 0; i < length; i++)
	 {
		 if (i % 2 == 0) 
		 {				
			 oddSum += num[i] - '0';
		 }
		 else 
		 {
			 evenSum += num[i] - '0';
		 }
	 }
	 if ((evenSum - oddSum) % 11 == 0){
		 assert(number % 11 == 0);
		 return true;
	 }
	 return false;
 }


 /////////////////////////////////////////Task6-Task7/////////////////////////////////////////

 // Function to initialize matrix with all 0
 Matrix& initMatrix(const size_t& n, const size_t& m) {
	 Matrix res{ n, m,  new double* [n] };
	 for (int i = 0; i < res._n; i++) {
		 res._matr[i] = new double[m];
		 for (int j = 0; j < res._m; j++) {
			 res._matr[i][j] = 0;
		 }
	 }
	 return res;
 }

 // Function to print out matrix
 void printMatrix(Matrix matrix) {
	 for (int i = 0; i < matrix._n; i++) {
		 for (int j = 0; j < matrix._m; j++) {
			 cout << matrix._matr[i][j] << " ";
		 }
		 cout << std::endl;
	 }
 }

 //Multiplication: Matrix*num
 const Matrix& operator*(const Matrix& matrix, const double n) {
	 Matrix res = initMatrix(matrix._n, matrix._m);
	 for (int i = 0; i < res._n; i++) {
		 for (int j = 0; j < res._m; j++) {
			 res._matr[i][j] = matrix._matr[i][j] * n;
		 }
	 }
	 return res;
 }
 //Multiplication: num*Matrix
 const Matrix& operator*(const double n, const Matrix& matrix) {
	 Matrix res = initMatrix(matrix._n, matrix._m);
	 for (int i = 0; i < res._n; i++) {
		 for (int j = 0; j < res._m; j++) {
			 res._matr[i][j] = matrix._matr[i][j] * n;
		 }
	 }
	 return res;
 }

 //Unary minus for a matrix
 const Matrix& operator-(const Matrix& matrix) {
	 Matrix res = initMatrix(matrix._n, matrix._m);
	 for (int i = 0; i < res._n; i++) {
		 for (int j = 0; j < res._m; j++) {
			 res._matr[i][j] = matrix._matr[i][j] * (-1);
		 }
	 }
	 return res;
 }

 /////////////////////////////////////////Task8/////////////////////////////////////////
  
 //Function: f(x)=sqrt(x)+1;
 double mySqrt(const double x) {
	 if (x < 0) throw x;
	 return sqrt(x)+1;
 }

 //The function of constructing an array of pairs consisting of the values of the argument x and the corresponding value of the function y.
 Pairs* buildPairs(double(*f)(double), double arr[], size_t size)
 {
	 Pairs* pairs = new Pairs[size];
	 for (int i = 0; i < size; i++)
	 {
		 pairs[i]._x = arr[i];
		 pairs[i]._y = f(arr[i]);
	 }
	 return pairs;
 }
  
 /////////////////////////////////////////Task9/////////////////////////////////////////

 bool operator<(const MyString& str1, const MyString& str2)
 {
	 if (strlen(str1.string) < strlen(str2.string))
		 return true;
	 else
		 return false;
 }

 /////////////////////////////////////////Task10/////////////////////////////////////////

 ostream& operator <<(ostream& os, const MyString& str)
 {
	 os << strlen(str.string) << ':' << str.string;
	 return os;
 }

