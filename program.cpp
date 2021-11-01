/// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
/// This is program

#include <iostream>

int main() {
    int number;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // process
    if (number > 0) {
        // output
        std::cout << number << " is a positive number." << std::endl;
    } else if (number < 0) {
        // output
        std::cout << number << " is a negative number." << std::endl;
    } else {
        std::cout << "0 is just zero!" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
