// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19
#include <iostream>
#define FMT_HEADER_ONLY
#include "format.h"

using std::cout;

using fmt::format;

int main()
{

    const char stringa[] = {"abcde"};
    const char caratteri[] = {'a', 'b', 'c', 'd', 'e'};

    for (const auto &c : stringa)
    {
        fmt::print("|s|> [{}][{}] \n", c, int(c));
    }

    for (const auto &c : caratteri)
    {
        fmt::print("|c|> [{}][{}] \n", c, int(c));
    }

    return 0;
}
