// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19
#include <iostream>
#include <cstdint>
#define FMT_HEADER_ONLY
#include "format.h"

using std::cout;

using fmt::format;

void print_value(auto name, auto value)
{
    fmt::print("\"{}\": [{}] of size {} bytes; type: [{}]\n", name, value, sizeof(value), typeid(value).name());
}

// void print_values(auto name, auto values[])
// {
//     for (const auto &v : values; &v)
//     {
//         fmt::print("\"{}\": [{}] of size {} bytes\n", name, v, sizeof(v));
//     }
// }

int main()
{
    unsigned long long int i{1234567890123345678};
    uint64_t i64{18446744073709551615ULL};
    double d1{0.1 + 0.1 + 0.1};

    auto name{"ettore"};

    fmt::print("long long ....: {} of size {} \n", i, sizeof(i));
    fmt::print("uint64_t .....: {} / {} of size {} \n", i64, UINT64_MAX, sizeof(i64));
    fmt::print("double   .....: {} of size {} \n", d1, sizeof(d1));

    print_value("intero", i64);
    print_value("name", name);

    long elenco[5] = {11, 12, 13, 14, 15};

    print_value("elenco", elenco[0]);

    long *ep = elenco;

    *ep += 10;
    ++ep;
    *ep += 10;
    ep = ep + 1;
    *ep += 100;

    print_value("elenco", elenco[0]);
    print_value("elenco", elenco[1]);
    print_value("elenco", elenco[2]);

    char stringa[]{"abcde"};
    print_value("elenco", stringa);

    char nome[20];
    nome[0] = 'c';
    nome[1] = 76;
    nome[2] = 88;
    nome[3] = 'v';
    nome[4] = 'z';
    nome[5] = 'Q';

    print_value("nome", nome);

    struct Coso
    {
        char *nome{};
        double peso{};
    };

    Coso c1{(char *)"cicci", 10.1};

    fmt::print("coso  .....: {} {} size= {} \n", c1.nome, c1.peso, sizeof(c1));

    int cosi[5]{};

     

    for (auto coso : cosi)
    {
        fmt::print(". {} \n", coso);
    }

    return 0;

    // 18446744073709551615
    // 18446744073709551615
}
