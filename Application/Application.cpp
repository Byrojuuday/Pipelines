// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"

CoolClass::CoolClass(void)
{
}

int CoolClass::Calc(int a, int b)
{
    if (a == b)
    {
        std::cout << "Just Printing to check the workflows a is equal to b Team 7" << std::endl;
        return 2 * a;
    }
    else
    {
        return a + b;
    }
}
