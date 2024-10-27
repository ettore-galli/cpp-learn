// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19

#include <cstdint>
#include <string>
#include <vector>

#include <iostream>
#include <format>

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

int main()

{

    vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8};

    cout << format("{} | {} | {} \n", v1.front(), v1.back(), v1.size());
    printVector(&v1);

    return 0;
}
