// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19
#include <iostream>
#define FMT_HEADER_ONLY
#include "format.h"

using std::cout;

using fmt::format;

int main()
{
    int x{42};
    int *px{&x};
    int y{*px};
    int &ry {x};
    int& ry2 {x};

    std::cout << "Hello, World!\n";
    fmt::print("x={}; y={}; ry={}, ry2={}\n", x, y, ry, ry2);
    std::cout << format("px={}\n", *px);


    return 0;
}
