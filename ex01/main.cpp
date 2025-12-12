#include "iter.hpp"

#include <cctype>
#include <iostream>
#include <string>

void decrement(int& i)
{
    --i;

    return;
}

void printInt(const int& i)
{
    std::cout << i << "\n";

    return;
}

void toUpper(std::string& s)
{
    for (size_t i = 0; i < s.length(); ++i)
    {
        s[i] = std::toupper(s[i]);
    }

    return;
}

void printString(const std::string& s)
{
    std::cout << s << "\n";

    return;
}

int main(void)
{
    int numbers[3] = {1, 2, 3};

    ::iter(numbers, sizeof(numbers) / sizeof(numbers[0]), decrement);
    ::iter(numbers, sizeof(numbers) / sizeof(numbers[0]), printInt);

    std::cout << "\n";

    std::string names[3] = {"Alice", "Bob", "Charlie"};

    ::iter(names, sizeof(names) / sizeof(names[0]), toUpper);
    ::iter(names, sizeof(names) / sizeof(names[0]), printString);

    return (0);
}
