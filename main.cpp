#include <iostream>
#include "calc.h"

using namespace std;

int main( )
{
    Calc c;
    int a;
    int b;
    
    cout << "整数を入力してください："<< endl;
    cin >> a;
    c.set1( a );  
    cout << "整数を入力してください："<< endl;
    cin >> b;
    c.set2( b );  
    cout << c.add() << endl;
    
}