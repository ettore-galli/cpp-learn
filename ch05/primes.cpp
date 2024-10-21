// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19
#include <iostream>
#include <cstdint>
#define FMT_HEADER_ONLY
#include "format.h"

using std::cout;

using fmt::format;

int main()
{
    const unsigned int NPRIMES{25};

    unsigned int count{0};
    unsigned int n{2};
    bool is_prime{true};
    while (count < NPRIMES)
    {

        is_prime = true;

        for (unsigned int d = 2; d < n; d == 2 ? d++ : (d += 2))
        {
            if (n % d == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            fmt::print("PRIME FOUND: {}\n", n);
            count++;
        }

        n++;
    }

    bool a=true;
    a=10;
    printf("%d",a);

    return 0;
}
