#pragma once

#include <cmath>

// Closed-form solution for fibonacci sequence
int fibonacci(int n)
{
    if (n > 0)
    {
        double phi = (1 + std::sqrt(5.0)) / 2;
        return std::round(std::pow(phi, static_cast<double>(n)) / std::sqrt(5.0));
    }
    return 0;
}

// Recursive definition for fibonacci sequence
int fibonacci_rec(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else if (n > 2)
        return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);

    return 0;
}