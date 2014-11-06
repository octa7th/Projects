#include <iostream>

int main() {
    long int num, mod, number, total;
    std::cout << "Please enter a number: ";
    std::cin >> num;
    std::cout << "You select " << num << "\n";
    number = 3;

    if (num < 1) {
        std::cout << "Number must me greater than 0.";
        return 1;
    } else if (num >= 1) {
        std::cout << "2";
    }

    if (num == 1) return 1;

    total = 1;
    while (true) {
        mod = 0;
        for (int i = 1; i <= number; ++i) {
            if (number % i == 0) mod++;
        }
        if (mod == 2) {
            std::cout << ", " << number;
            total++;
        }
        number++;
        if (total >= num) break;
    }

    return 1;
}
