////////////////////////////////////////////////////////////
// Copyright (C) 2014 Muhammad Sofyan <octa7th@gmail.com> //
////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <cmath>

std::string reverseString(std::string str) {
    std::string rev = "";
    for (
        std::string::reverse_iterator sb = str.rbegin();
        sb != str.rend();
        ++sb) {
        rev = rev + *sb;
    }
    return rev;
}

void decimalToBinary() {
    int number;
    std::string binary = "", binReverse = "";
    std::cout << "\nType decimal number to convert : ";
    std::cin >> number;
    while (true) {
        if (number % 2 == 1) {
            binReverse = binReverse + "1";
        } else {
            binReverse = binReverse + "0";
        }
        number = number / 2;
        if (number == 0) break;
    }

    binary = reverseString(binReverse);

    std::cout << "Binary = " << binary << "\n";
}

void binaryToDecimal() {
    int number, length;
    std::string binary;
    std::cout << "\nType binary number to convert : ";
    std::cin >> binary;
    length = binary.length();
    number = 0;

    std::string num = "1";

    for (int i = 0; i <= length; ++i) {
        char current = binary[i];

        if (current == num[0]) {
            int increment = pow(2, length - i - 1);
            number = number + increment;
        }
    }

    std::cout << "Decimal = " << number << "\n";
}

int main() {
    int selection;
    std::cout << "1. Decimal -> Binary\n";
    std::cout << "2. Binary -> Decimal\n";
    std::cout << "Type your selection and press enter : ";
    std::cin >> selection;

    if (selection == 1) {
        decimalToBinary();
    } else if (selection == 2) {
        binaryToDecimal();
    } else {
        std::cout << "You select the wrong option.\n";
    }
    return 1;
}
