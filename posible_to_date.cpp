// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program uses a try statement

#include <iostream>
#include <string>

main() {
    // this function uses a try statement
    std::string integerAsString;
    int integerAsNumber;

    // input
    std::cout << "Enter your age (integer): ";
    std::cin >> integerAsString;

    // process & output
    try {
        integerAsNumber = std::stoi(integerAsString);
        if (integerAsNumber >= 25 && integerAsNumber <= 40) {
            std::cout << "Grandmother: You can date my grandchild."
            << std::endl;
        } else {
            std::cout << "Grandmother: You can't date my grandchild."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "It is not an integer";
    }
}
