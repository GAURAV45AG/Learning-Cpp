#include <iostream>

int main(){

    int x;

    std::cout << "Enter number: ";
    std::cin >> x;

    x % 2 == 0 ? std::cout << "Even" << '\n': std::cout << "Odd" << '\n';

    return 0;
}