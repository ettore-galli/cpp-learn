// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19
#include <iostream>
#include <cstdint>
#define FMT_HEADER_ONLY
#include "format.h"

using std::cout;

using fmt::format;

template <typename T>
T factorial(T n)
{
    T f{1};
    for (T i = 1; i < n; ++i)
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

    short n_short = 4;
    fmt::print("{}\n", factorial(n_short));

    int n_int = 5;
    fmt::print("{}\n", factorial(n_int));

    int n_float = 7;
    fmt::print("{}\n", factorial(n_float));

    long long unsigned int nllu = 23;
    fmt::print("{}\n", factorial(nllu));

    return 0;
}
