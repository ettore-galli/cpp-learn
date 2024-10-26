// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19
#include <iostream>
#include <cstdint>
#include <string>

#define FMT_HEADER_ONLY
#include "format.h"

using std::cout;
using std::string;

using fmt::format;

const int N_NUMBERS = 5;
class SchedinaLotto
{
    string nome;
    string ruota;
    int numeri[N_NUMBERS];

public:
    SchedinaLotto();
    SchedinaLotto(const string &nome, const string &ruota, const int numeri[N_NUMBERS]);
    ~SchedinaLotto();

    string repr()
    {
        string repr_numeri{"["};
        for (int numero : this->numeri)
        {

            repr_numeri += std::to_string(numero) + " ";
        }
        repr_numeri += "]";
        return this->nome + "/" + this->ruota + "/" + repr_numeri;
    };

    void operator<<(const int numero)
    {
        for (int i = 0; i < N_NUMBERS; ++i)
        {
            this->numeri[i] += numero;
        }
    };
};

SchedinaLotto::SchedinaLotto(const string &nome, const string &ruota, const int numeri[N_NUMBERS])
{
    this->nome = nome;
    this->ruota = ruota;
    for (int i = 0; i < N_NUMBERS; ++i)
    {
        this->numeri[i] = numeri[i];
    }
}

SchedinaLotto::~SchedinaLotto()
{
    cout << "destructing...";
};


    // void operator>>(const int numero)
    // {
    //     for (int i = 0; i < N_NUMBERS; ++i)
    //     {
    //         this->numeri[i] += numero;
    //     }
    // };

int main()
{
    int numeri[]{1, 2, 3, 4, 5};
    SchedinaLotto sl("ettore", "napoli", numeri);

    cout << sl.repr() + "\n";

    sl << 3;

    cout << sl.repr() + "\n";
    return 0;
}
