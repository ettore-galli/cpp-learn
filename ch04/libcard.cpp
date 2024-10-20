// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19
#include <iostream>
#include <cstdint>
#define FMT_HEADER_ONLY
#include "format.h"

using std::cout;

using fmt::format;

struct Card
{
    char *title{};
    char *author{};
    char *publisher{};
    char *subject{};
    unsigned int isbn{};
    unsigned int oclc{};
    unsigned int dewey[5]{};
    unsigned int yearPublished{};
    unsigned int yearAcquired{};
    unsigned int stockQuantity{};
};

void printCard(Card c)
{
    fmt::print("{}\n", c.title);
    fmt::print("{}\n", c.author);
    fmt::print("{}\n", c.publisher);
    fmt::print("{}\n", c.subject);
    fmt::print("{}\n", c.isbn);
    fmt::print("{}\n", c.oclc);
    for (auto dd : c.dewey)
    {
        fmt::print("{} ", dd);
    }
    fmt::print("\n");
    fmt::print("{}\n", c.yearPublished);
    fmt::print("{}\n", c.yearAcquired);
    fmt::print("{}\n", c.stockQuantity);
}

void cardUsageDemo()
{
    Card myBook{(char *)"Divina Commedia", (char *)"Dante Alighieri"};

    myBook.title = (char *)"Divina Commedia";
    myBook.author = (char *)"Dante Alighieri";
    myBook.publisher = (char *)"Come sa di Sale Lo Pane altrui Pubblications";
    myBook.subject = (char *)"A tour in hell";
    myBook.isbn = 666;
    myBook.oclc = 123;

    int dp{0};
    unsigned int *bdw = myBook.dewey;

    for (auto s : {91, 92, 93, 94, 95})
    {
        // myBook.dewey[dp++] = s;
        *bdw = s;
        bdw++;
    }

    myBook.yearPublished = 1300;
    myBook.yearAcquired = 2024;
    myBook.stockQuantity = 7;

    printCard(myBook);
}

int main()
{
    cardUsageDemo();

    // unsigned long long int i{1234567890123345678};
    // uint64_t i64{18446744073709551615ULL};
    // double d1{0.1 + 0.1 + 0.1};

    // auto name{"ettore"};

    // fmt::print("long long ....: {} of size {} \n", i, sizeof(i));
    // fmt::print("uint64_t .....: {} / {} of size {} \n", i64, UINT64_MAX, sizeof(i64));
    // fmt::print("double   .....: {} of size {} \n", d1, sizeof(d1));

    // print_value("intero", i64);
    // print_value("name", name);

    // long elenco[5] = {11, 12, 13, 14, 15};

    // print_value("elenco", elenco[0]);

    // long *ep = elenco;

    // *ep += 10;
    // ++ep;
    // *ep += 10;
    // ep = ep + 1;
    // *ep += 100;

    // print_value("elenco", elenco[0]);
    // print_value("elenco", elenco[1]);
    // print_value("elenco", elenco[2]);

    // char stringa[]{"abcde"};
    // print_value("elenco", stringa);

    // char nome[20];
    // nome[0] = 'c';
    // nome[1] = 76;
    // nome[2] = 88;
    // nome[3] = 'v';
    // nome[4] = 'z';
    // nome[5] = 'Q';

    // print_value("nome", nome);

    // struct Coso
    // {
    //     char *nome{};
    //     double peso{};
    // };

    // Coso c1{(char *)"cicci", 10.1};

    // fmt::print("coso  .....: {} {} size= {} \n", c1.nome, c1.peso, sizeof(c1));

    return 0;

    // 18446744073709551615
    // 18446744073709551615
}
