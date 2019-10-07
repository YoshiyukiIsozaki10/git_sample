#include "calc.h"

void Calc::set1(double a)
{
    num1 = a;
}

void Calc::set2(double b)
{
    num2 = b;
}

double Calc::add()
{
    return num1 + num2;
}
double Calc::sub()
{
    return num1 - num2;
}

double Calc::mul()
{
    return num1 * num2;
}

double Calc::div()
{
    return num1 / num2;
}
