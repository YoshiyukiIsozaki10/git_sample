#include "calc.h"

void Calc::set1(int a)
{
    num1 = a;
}

void Calc::set2(int b)
{
    num2 = b;
}

int Calc::add()
{
    return num1 + num2;
}

int Calc::sub()
{
    return num1 - num2;
}

int Calc::mul()
{
    return num1 * num2;
}

int Calc::div()
{
    return num1 / num2;
}