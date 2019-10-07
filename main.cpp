#include <iostream>
#include "calc.h"
#include "calc.cpp"

using namespace std;

int main( )
{
    Calc c;
    double a;
    double b;
    
    cout << "値を入力してください："<< endl;
    cin >> a;
    c.set1(a);  
    cout << "値を入力してください："<< endl;
    cin >> b;
    c.set2(b);  
    cout << "加法" << c.add() << endl;
    cout << "減法" << c.sub() << endl;
    cout << "乗法" << c.mul() << endl;
    cout << "除法" << c.div() << endl;

    return 0;
}