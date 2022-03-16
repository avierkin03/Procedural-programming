#include <cmath>

double agm(double a, double b)
{
    if (a >= b) throw a;
    double aPrev, bPrev;
    double aCurr = a;
    double bCurr = b;
    while (true)
    {
        aPrev = aCurr;
        bPrev = bCurr;
        aCurr = sqrt(aPrev * bPrev);
        bCurr = (aPrev + bPrev) / 2;
        //if the condition is true, then this means that we have calculated the arithmetic-geometric mean with the highest possible accuracy
        if (aCurr <= aPrev || bPrev <= bCurr || bCurr <= aCurr) break;
    }
    return (aCurr + bCurr) / 2;
}