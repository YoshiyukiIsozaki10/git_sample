#include <iostream>

int sum(int, int);

int main()
{
    int a = 3; int b = 6;
    std::cout << sum(a, b)<< std::endl;
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}