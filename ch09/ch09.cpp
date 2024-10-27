// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19

#include <cstdint>
#include <string>
#include <vector>

#include <iostream>
#include <fstream>

#include <format>

using std::cin;
using std::cout;
using std::string;
using std::vector;

using std::format;

template <typename T>
void printVector(vector<T> *v)
{
    cout << format("{:-^50} \n", "vector");
    for (auto it = v->begin(); it < v->end(); ++it)
    {
        cout << format("{} \n", *it);
    }
};

template <typename T>
struct Frac
{
    T n;
    T d;
};

template <typename T>

struct std::formatter<Frac<T>> : std::formatter<unsigned>
{
    template <typename C>
    auto format(const Frac<T> &frazione, C &contesto) const
    {
        return format_to(contesto.out(), "{:^6}\n-------\n {:^6}\n", frazione.n, frazione.d);
    }
};

void io()
{
    std::string inp{};
    while (true)
    {
        cout << ">>";
        std::cin >> inp;
        cout << inp + "\n";
    }
};

void writefile(const char filename[], const char input_str[], unsigned int repeat)
{
    std::ofstream outfile(filename);

    for (auto i = 0; i < repeat; ++i)
    {
        outfile << i << " " << input_str << "\n";
    }
};

void printfile(const char filename[])
{
    std::ifstream infile(filename);
    char data[128];
    std::string inp{};
    while (infile.good())
    {
        infile.getline(data, sizeof(data));
        cout << data << "\n";
    }
};

int main()

{

    vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8};

    printVector(&v1);

    cout << format("{} | {} | {} \n", v1.front(), v1.back(), v1.size());

    Frac<long> f{22, 7};
    cout << format("{} \n", f);

    // io();

    long i{243847624877};

    // cout << std::showbase << std::hex << i << "\n";
    // cout << std::showbase << std::dec << i << "\n";

    const char filename[]{"ciccio.txt"};
    const char input_str[]{"prova scrittura file"};

    writefile(filename, input_str, 3);
    printfile("./data/items.txt");

    return 0;
}
