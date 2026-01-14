#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    int tripled = number * 3;

    std::cout << "tripled value: " << tripled << std::endl;

    return 0;
}