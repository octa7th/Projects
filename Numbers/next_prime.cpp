#include <iostream>

bool isPrime(int number) {
    int mod = 0;
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) mod++;
    }
    return mod == 2;
}

int main() {
    int number;
    std::cout << "Press enter to get next prime number."
        "Press Ctrl + C to exit.";
    std::cin.ignore();

    number = 2;

    while (true) {
        if (isPrime(number)) {
            std::cout << number;
            std::cin.ignore();
        }
        number++;
    }
    return 1;
}
