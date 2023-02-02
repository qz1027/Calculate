#include "Calculate.h"

double Calculate::add(double x, double y)
{
    return x + y;
}

double Calculate::low(double x, double y)
{
    return x - y;
}

double Calculate::chufa(double x, double y)
{
    return x / y;
}

void Calculate::menu()
{
    cout << "\t1、加法功能" << endl;
    cout << "\t2、减法功能" << endl;
    cout << "\t3、除法功能" << endl;
    cout << "\t0、退出" << endl;
}
