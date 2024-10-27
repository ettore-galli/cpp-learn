// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19

#include <cstdint>
#include <string>
#include <vector>

#include <iostream>
#include <sstream>
#include <fstream>

#include <format>

using std::cin;
using std::cout;
using std::string;
using std::stringstream;
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

struct Item
{
    long sku;
    std::string name;
    std::string description;
};

vector<string> split(string line, char delimiter)
{
    long pos{0};
    long endpos{0};

    vector<string> splitted{};

    while (pos < sizeof(line))
    {
        endpos = line.find("\t", pos);
        if (endpos == -1)
        {
            splitted.push_back(line.substr(pos, sizeof(line) - pos));
            break;
        }
        splitted.push_back(line.substr(pos, endpos - pos));
        pos = endpos + 1;
    }

    return splitted;
}

vector<string> split2(string line, char delimiter)
{
    stringstream ss(line);

    vector<string> splitted{};

    char chunk[128]{};

    while (ss.getline(chunk, sizeof(chunk), '\t'))
    {
        splitted.push_back(chunk);
    }

    return splitted;
}

void getfile(const char filename[])
{
    std::ifstream infile(filename);
    char data[128];
    std::string line;

    std::string inp{};
    while (infile.good())
    {

        infile.getline(data, sizeof(data));

        line = data;
        cout << line << "\n";

        vector<string> splitted = split(line, '\t');

        Item it{
            std::stoi(splitted[0]), splitted[1], splitted[2]};
        cout << "sku ....: " << it.sku << "\n";
        cout << "name ...: " << it.name << "\n";
        cout << "descr ..: " << it.description << "\n";
    }
};

int main()

{

    getfile("./data/items.txt");

    return 0;
}
