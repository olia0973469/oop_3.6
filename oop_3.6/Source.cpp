// Source.cpp

#include "D3.h"
#include "D1.h"
#include <iostream>
using namespace std;

int main()
{
    B1 o01(777);
    cout << "B1 o01(777);" << endl;
    cout << "sizeof(B1) = " << sizeof(B1) << endl;
    cout << endl << "I. B1: " << endl;
    o01.show_B1();

    B2 o02(000);
    cout << "B2 o02(0000);" << endl;
    cout << "sizeof(B2) = " << sizeof(B2) << endl;
    cout << endl << "I. B2: " << endl;
    o02.show_B2();

    D1 o1(111, 222, 333);
    cout << "D1 o1(111, 222, 333);" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << endl << "I. D1: " << endl;
    o1.show_D1();

    D2 o2(1000, 2000, 3000, 4000);
    cout << "D2 o2(1000, 2000);" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << endl << "I. D2: " << endl;
    o2.show_D2();

    D3 o3(100, 200, 300, 400, 500);
    cout << "D3 o3(100, 200, 300, 400);" << endl;
    cout << "sizeof(D3) = " << sizeof(D3) << endl;
    cout << endl << "I. D3: " << endl;
    o3.show_D3();

    return 0;
}
