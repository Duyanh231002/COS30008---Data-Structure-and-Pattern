// COS30008 - Ha Duy Anh - 103428029 - Problem Set 1.
// ProblemSet1 - Q1.cpp : This file contains the 'main' function.

#include <iostream>
#include "Combine.h"
using namespace std;

void runProblem2()
{
    Combine a(6, 2);
    Combine b(5, 2);
    Combine c(28, 14);
    Combine d(52, 5);
    Combine e(5, 5);
    cout << a.getN() << " over " << a.getK() << " = " << a() << endl;
    cout << b.getN() << " over " << b.getK() << " = " << b() << endl;
    cout << c.getN() << " over " << c.getK() << " = " << c() << endl;
    cout << d.getN() << " over " << d.getK() << " = " << d() << endl;
    cout << e.getN() << " over " << e.getK() << " = " << e() << endl;
}
int main()
{
    runProblem2();
}


