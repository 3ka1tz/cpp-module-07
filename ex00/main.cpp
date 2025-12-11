#include "whatever.hpp"

#include <iostream>

int main(void)
{
    int a = 1, b = 2;

    ::swap(a, b);

    std::cout << "a = " << a << ";\n";
    std::cout << "b = " << b << ";\n";
    std::cout << "min(a, b) = " << ::min(a, b) << ";\n";
    std::cout << "max(a, b) = " << ::max(a, b) << ";\n";

    std::cout << "\n";

    char c = 'c', d = 'd';

    ::swap(c, d);

    std::cout << "c = " << c << ";\n";
    std::cout << "d = " << d << ";\n";
    std::cout << "min(c, d) = " << ::min(c, d) << ";\n";
    std::cout << "max(c, d) = " << ::max(c, d) << ";\n";

    return (0);
}
