// D2.h

#pragma once
#include "D1.h"
class D2 :private D1
{
    int d2;

public:
    D2(int x, int y, int z, int a)
        : D1(y, z, a)
    {
        d2 = x;
    }

    ~D2() { };

    void show_D2();
};
