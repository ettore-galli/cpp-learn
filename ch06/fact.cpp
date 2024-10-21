// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19
#include <iostream>
#include <cstdint>
#define FMT_HEADER_ONLY
#include "format.h"

using std::cout;

using fmt::format;

unsigned long factorial(unsigned long n)
{
    unsigned long f{1};
    for (unsigned long i = 1; i < n; ++i)
    {
        f *= i + 1;
    }
    return f;
}

int main()
{

    for (unsigned long n = 1; n < 10; n++)
    {
        unsigned long f = factorial(n);
        fmt::print("{}!= {}\n", n, f);
    }

    return 0;
}
