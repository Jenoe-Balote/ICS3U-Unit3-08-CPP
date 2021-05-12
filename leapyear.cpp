// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program determines if you can date my grandchild

#include <iostream>
#include <string>

main() {
    // this function runs the grandchild dating program
    std::string stringYear;
    int numYear;

    // input
    std::cout << "Welcome!" << std::endl;
    std::cout << "Please enter the year: ";
    std::cin >> stringYear;

    // process
    try {
        numYear = std::stoi(stringYear);
        if (numYear % 4 == 0) {
            if (numYear % 100 == 0) {
                if (numYear % 400 == 0) {
                    std::cout << numYear << " is a leap year!" << std::endl;
        } else {
            std::cout << numYear << " is not a leap year!" << std::endl;
        }
    }
    catch (std::invalid_argument) {
    // output
        std::cout << "" << stringYear
        << " is invalid data." << std::endl;
    }
    std::cout << "Thanks for participating!"<< std::endl;
}
