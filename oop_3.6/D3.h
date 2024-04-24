// D3.h

#pragma once
#include "D2.h"
class D3 : public D2
{
    int d3;

public:
    D3(int x, int y, int z, int a, int b)
        : D2(y, z, a, b)
    {
        d3 = x;
    }

    ~D3() { };

    void show_D3();

};
