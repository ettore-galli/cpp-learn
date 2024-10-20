// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19
#include <iostream>
#define FMT_HEADER_ONLY
#include "format.h"

using std::cout;

using fmt::format;

int main()
{
    int i{0};
    const int MAX{10};
    const int array[] = {1, 2, 3, 4};
    const char stringa[] = {"abcde"};
    char stringa_modificabile[] = {"abcde"};
    do
    {
        i++;
        fmt::print("while i={}\n", i);
    } while (i < MAX);

    for (int i{0}; stringa[i]; ++i)
    {
        int idx{i % 4};
        fmt::print("for i={} arr {} {} \n", i, array[i], stringa[i]);
    }

    for (auto *p = stringa; *p; ++p)
    {
        fmt::print("** {} \n", *p);
    }

    for (auto *p = stringa; *p; p++)
    {
        fmt::print("-- {} \n", *p);
    }

    for (const auto &c : stringa)
    {
        fmt::print(">> {} \n", c);
    }

    for (const auto &c : stringa_modificabile)
    {
        // if (c == 'b')
        // {
        //     c = 'Q';
        // }
        fmt::print("|> {} \n", c);
    }

    fmt::print(">> {} \n", stringa_modificabile);

    return 0;
}
