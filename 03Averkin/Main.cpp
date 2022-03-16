#include <iostream>
#include "Functions.h"
#include <math.h>
#include <cmath>
using namespace std;


int main()
{
    cout << "Gaussian integral\n" << endl;
    for (double x = 1; x <= 10; x++)
    {
        cout << "x="<<x<<": "<< gaussIntegr(x) << endl;
    }
    cout << "After x = 6, incorrect results begin, due to the incompatibility of the terms." << endl;
    cout << "-----------------------------------------------------------------------------\n" << endl;



    cout << "Fixing computation errors for the Gaussian integral using the Simpson method:\n" << endl;
    
    for (double x = 1; x <= 10; x++)
    {
        cout << "x=" << x << ": " << simpsonIntegral(f,x) << endl;
    }
    cout << "Now everything works correctly" << endl;
    cout << "-----------------------------------------------------------------------------\n" << endl;



    cout << "y=e^x\n" << endl;
    for (double x = -25; x <= 20; x++)
    {
        cout << "x=" << x << ": " << exponenta(x) << endl;
    }
    cout << "When x = -19 and less, incorrect results begin, due to the incompatibility of the terms." << endl;
    cout << "---------------------------------------------------------------------------------------\n" << endl;



    cout << "Fixing computation errors for the y=e^x:\n" << endl;
    for (double x = -5.7; x <= 10; x+=1.3)
    {
        cout << "x=" << x << ": " << fixedExponenta(x) << endl;
    }
    cout << "Now everything works correctly" << endl;
    
    return 0;
}
