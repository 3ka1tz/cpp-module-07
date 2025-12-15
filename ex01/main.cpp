#include "iter.hpp"

#include <cctype>
#include <iostream>
#include <string>

void decrement(int& i) {
    --i;
}

void printInt(const int& i) {
    std::cout << i << std::endl;
}

void toUpper(std::string& s) {
    for (size_t i = 0; i < s.length(); ++i)
        s[i] = std::toupper(s[i]);
}

void printString(const std::string& s){
    std::cout << s << std::endl;
}

int main() {
    int numbers[3] = {1, 2, 3};

    iter(numbers, sizeof(numbers) / sizeof(numbers[0]), decrement);
    iter(numbers, sizeof(numbers) / sizeof(numbers[0]), printInt);

    std::string names[3] = {"Alice", "Bob", "Charlie"};

    iter(names, sizeof(names) / sizeof(names[0]), toUpper);
    iter(names, sizeof(names) / sizeof(names[0]), printString);
}
