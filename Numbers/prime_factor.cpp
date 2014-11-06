////////////////////////////////////////////////////////////
// Copyright (C) 2014 Muhammad Sofyan <octa7th@gmail.com> //
////////////////////////////////////////////////////////////
#include <iostream>

int smallestFactor(int number) {
    for (int i = 2; i <= number; ++i) {
        if (number % i == 0) return i;
    }
    return number;
}

int main() {
    int num, factor;
    std::cout << "Please enter a number: ";
    std::cin >> num;
    std::cout << "You select " << num << "\n";
    factor = smallestFactor(num);

    std::cout << "Factors = ";

    while (factor != num) {
        std::cout << factor << " x ";
        num = num / factor;
        factor = smallestFactor(num);
    }

    std::cout << factor << "\n";

    return 1;
}
