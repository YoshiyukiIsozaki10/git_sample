#ifndef _CALC_H_
#define _CALC_H_
class Calc{
public:
    void set1(double a);
    void set2(double b);
    double add();
    double sub();
    double mul();
    double div();

private:
    double num1;
    double num2;
};

#endif // _CALC_H_