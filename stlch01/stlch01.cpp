// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19

#include <cstdint>
#include <string>
#include <vector>
#include <format>
#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::string;
using std::vector;

using std::format;

#include "arithmetic.h"

int main()

{

    float a{4};
    float b{7.1};

    float c = sum(a, b);

    cout << format("{} | {} | {} \n", a, b, c);

    return 0;
}
