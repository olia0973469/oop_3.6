// D1.cpp

#include "D1.h"
#include <iostream>

using namespace std;

void D1::show_D1()
{
    cout << "class D1:" << endl;
    show_B1();
    show_B2();
    cout << "show_D1()" << endl
        << "D1::d1  = " << d1 << endl << endl;
}
