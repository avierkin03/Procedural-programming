#pragma once

double gaussIntegr(double x);
double exponenta(double x);
typedef double(*pointFunc)(double);
double f(double t);
double simpsonIntegral(pointFunc f, double b);
double fixedExponenta(double x);
