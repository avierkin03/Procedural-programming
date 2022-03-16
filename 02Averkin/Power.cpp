#include <iostream>
using namespace std;

//Recurrent Degree Finding
double power(double number, int power, int& counter)
{
    double result = 1;
    counter = 0;
    for (int i = 1; i <= power; i++)
    {
        result *= number;
        counter++;
    }
    return result;;
}

//Recursive Degree Finding
double recursivePow(double number, int power)
{
    if (power == 0) 
    { 
        return 1; 
    }
    else 
    { 
        return number * recursivePow(number, power - 1);
    }
}

//Recurrent quickPower Finding. If power is even: divide the power by 2 and multiply number to itself. Else: decrement the power
// by 1 and make it even(taking care of the extra value that we took out, we will store it directly in result, than follow previous procedure)
double quickPower(double number, int power, int& counter)
{
    double x = number;
    int n = power;
    double result = 1;
    counter = 0;
    while (power > 0)
    {
        if (power % 2 == 0)                
        {
            power = power / 2;
            number = number * number;
            counter++;
        }
        else                                    
        {
            power = power - 1;              
            result = result * number;
            counter++;
            power = power / 2;
            number = number * number;    
        }
    }
    return result;;
}

//Recursive quickPower Finding. number^0 = 1; number^power = number*number^(power-1); number^(2*power)=(number^2)^power
 double recursiveQuickPower(double number, int power)
 {
     if (power == 0) {
         return 1;
     }
     else if (power % 2 == 0)
     {
         return recursiveQuickPower(number * number, power / 2);
     }
     else
     { 
         return number * recursiveQuickPower(number, power - 1);
     }
}