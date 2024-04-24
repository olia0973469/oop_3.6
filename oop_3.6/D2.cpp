// D2.cpp

#include "D2.h"
#include <iostream>

using namespace std;

void D2::show_D2()
{
    cout << "class D2:" << endl;
    show_D1();
    cout << "show_D2()" << endl
        << "D2::d2  = " << d2 << endl << endl;
}
