// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19
#include <iostream>
#define FMT_HEADER_ONLY
#include "format.h"

using std::cout;

int main()
{
    std::cout << "Hello, World!\n";
    fmt::print("cicci\n");
    int i{42};
    return i - 42;
}
