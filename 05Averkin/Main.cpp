#include <iostream>
#include"Functions.h"
using namespace std;

int main() {
    size_t size = 5;                                                           //array size
    double* coeff = new double[size];                                          //allocating memory for an array

    //using the assert from the method 'Horner'
    cout << "Using assert(((x == 1) || (x == -1)) ? (result = sum(coeff,size, x)) : true) :\n" << endl;
    for (double x = -1; x <= 1; x+=0.4)                                      //x- polynomial variable x
    {
        cout << "\nx = " << x << "; Polynom = " << Horner(coeff, size, x) << endl;
        cout << "-----------------------------" << endl;
    }

    //Without the assert
    cout << "_________________________________" << endl;
    cout << "Without using any assertions  :\n" << endl;
    for (double x = -2; x <= 1; x += 0.4)                                      //x- polynomial variable x
    {
        cout << "\nx = " << x << "; Polynom = " << sHorner(coeff, size, x) << endl;
        cout << "-----------------------------" << endl;
    }

    delete[] coeff;                                                           // clearing memory
    return 0;
}