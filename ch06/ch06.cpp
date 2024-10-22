// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19
#include <iostream>
#include <cstdint>
#define FMT_HEADER_ONLY
#include "format.h"

using std::cout;

using fmt::format;

struct Coso
{
    char *nome{};
    double peso{};
};

struct SchedinaLotto
{
    char nome[50];
    int numeri[5];
};

void print_coso(Coso c)
{
    fmt::print("nome: {}\n", c.nome);
    fmt::print("peso: {}\n", c.peso);
    c.nome = (char *)"qqqq";
    fmt::print("ancora dentro: {}\n", c.nome);
}

void gioca_schedina(SchedinaLotto sl)
{

    fmt::print("{}\n", sl.nome);
    for (int n : sl.numeri)
    {
        fmt::print("{}\n", n);
    }
}

void print_array(int lista[], long unsigned int lunghezza)
{

    fmt::print("[");
    for (long unsigned int i = 0; i < lunghezza; ++i)
    {
        if (i > 0)
        {
            fmt::print(",");
        }
        fmt::print("{}", lista[i]);
    }
    fmt::print("]\n");
}

union CalcResult
{
    double result;
    char error[50];
};

CalcResult dividi(double dividendo, double divisore)
{
    CalcResult result{};
    if (divisore == 0.0)
    {
        fmt::print("CASO DIVISORE ZERO \n");
        strcpy(result.error, "Ciccia");
        return result;
    }
    result.result = dividendo / divisore;
    return result;
};

int main()
{

    int lista[]{11, 12, 13, 14, 15, 16};

    for (auto elemento : lista)
    {
        fmt::print(". {} \n", elemento);
    }

    print_array(lista, sizeof(lista) / sizeof(lista[0]));

    Coso c = {(char *)"cicci", 123.4};

    print_coso(c);

    fmt::print("post: {}\n", c.nome);

    SchedinaLotto sl = {
        "ettore",
        {25, 60, 38, 1, 90}};

    gioca_schedina(sl);

    double dividendo = 7;
    for (double divisore : {4, 0})
    {
        auto ris = dividi(dividendo, divisore);
        fmt::print("{} / {} = {} [{}] \n", 7, 4, ris.result, ris.error);
    }

    return 0;
}
