#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    int doubled = number * 2;

    std::cout << "Doubled value: " << doubled << std::endl;

    return 0;
}