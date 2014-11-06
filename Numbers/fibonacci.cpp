#include <iostream>

int main() {
    long int num, total, prev, current;
    std::cout << "Please enter a number: ";
    std::cin >> num;
    std::cout << "You select " << num << "\n";
    prev = 1;
    total = 1;

    if (num > 2) {
        num = num - 2;
        while (num--) {
            current = total;
            total = current + prev;
            prev = current;
        }
    }

    std::cout << "Result = " << total << "\n";
}
