#include <iostream>;

using namespace std;
/////////////////////////////////////////////////////TASK2/////////////////////////////////////////////////////////////////////////
double range(double x, double eps){
    double an = x, sum = an;
    int i = 1;
    while (fabs(an) > eps)
    {
        an *= (x * x) / (2 * i * (2 * i + 1));
        sum += an;
        i++;
    }
    return sum;
}

/////////////////////////////////////////////////////TASK3/////////////////////////////////////////////////////////////////////////

//Division with remainder using addition and subtraction operations
void divWithRem(int a, int b) {
    int s, temp;
    temp = a;
    s = 0;
    while (temp > 0 && temp >= b){
        temp -= b;
        s++;
    }
    cout << "Quotient of division: " << s << endl;
    cout << "Remainder of the division: " << temp << endl;
 }

/////////////////////////////////////////////////////TASK4/////////////////////////////////////////////////////////////////////////

//finding the GCD using the cycle(Task4)
int gcd(int a, int b) {
    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    return a + b;
}
//finding the GCD using the recursion(Task4)
int gcdReccursive(int a, int b) {
    int r = 0;
    if (b > a)
        return gcdReccursive(b, a);
    r = a % b;
    if (r == 0)
        return b;
    else
        return gcdReccursive(b, r);

}
///////////////////////////////////////////////////////////TASK5///////////////////////////////////////////////////////////////////

//Chebyshev polinom using the recursion
int polinom(int x, int n) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return (x);
    else 
        return ((2 * x * polinom(x, n - 1)) - polinom(x, n - 2));
}
///////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////////////

int main() {
    
    cout << "Task 1" << endl;
    


    cout << "\nTask 2" << endl;
    double a = 3, eps = 0.1;
    cout << "The sum of the series(a=3,eps=0.1):" << endl;
    cout << "Sn(" << a << ") = " << range(a, eps) << endl;
    a = 2, eps = 0.05;
    cout << "The sum of the series(a=2,eps=0.05):" << endl;
    cout << "Sn(" << a << ") = " << range(a, eps) <<"\n"<< endl;
    

    cout << "Task 3" << endl;
    int x = 36, y = 7;
    cout<<"Dividing 36 by 7 to find out the remainder and the quotient:"<< endl;
    divWithRem(x, y);
    x = 81, y = 27;
    cout << "Dividing 81 by 27 to find out the remainder and the quotient:" << endl;
    divWithRem(x, y);


    cout << "\nTask 4" <<endl;
    x = 17, y = 29;
    cout << "GCD for 17 and 29(using the cycle): ";
    cout<<gcd(x, y)<<endl;
    cout << "GCD for 17 and 29(using the recursion): ";
    cout << gcdReccursive(x, y) <<endl;
    x = 81, y = 27;
    cout << "GCD for 81 and 27(using the cycle): ";
    cout << gcd(x, y) << endl;
    cout << "GCD for 81 and 27(using the recursion): ";
    cout << gcdReccursive(x, y) << "\n" << endl;


    cout << "Task 5" << endl;
     x = 3, y = 5;
    cout << "Chebyshev polinom 5-degree in point 3: "<< polinom(x, y)<<endl;
    x = 5, y = 2;
    cout << "Chebyshev polinom 2-degree in point 5: " << polinom(x, y) << endl;
    
    
    return 0;
}



