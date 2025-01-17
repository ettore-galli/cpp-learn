#include "arithmetic.h"

template <typename T>
T sum(T a, T b)
{
    return a + b;
};

extern template float sum(float a, float b);