// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on October 2021
// This program is to check the user 18 or not

#include <iostream>
#include <string>

int main() {
    int year;
    std::string yearStr;
    // input
    std::cout << "Enter your age here: ";
    std::cin >> yearStr;
    std::cout << "" << std::endl;

    // process & output
    try {
        year = std::stoi(yearStr);
        if (year >= 18) {
            std::cout << "you are eligible to vote. " << std::endl;
        } else {
            std::cout << "sorry, you aren't eligible to vote" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer" << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
