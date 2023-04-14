// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"

CoolClass::CoolClass(void)
{
}
// Injecting the compile error by change int b to Foo b, This modification will cause a compilation error because the Foo type is undefined,
int CoolClass::Calc(int a, Foo b)
{
    if (a == b)
    {
        return 2 * a;
    }
    else
    {
        return a + b;
    }
}
