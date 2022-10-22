// Copyright (c) 2022 Patrice Pat-Odita All rights reserved.
//
// Created by: Patrice Pat-odita
// Created on: oct 19, 2022
// This program compares floating point numbers
// using if else statement and user input.

#include <bits/stdc++.h>
using declaration std;
using std::cout;
using std::cin;
using std::string;

int CompareFloatNum(float float1input, float float2input) {
    // correct method to compare
    // floating-point numbers
    if (float1input == float2input) {
        std::cout << "The numbers are equal "
             << endl;
    } else {
        std::cout << "The numbers are not equal "
             << endl;
    }
}

int main() {
    // declaring variables
    float uInput1;
    float uInput2;

    // Get user input
    cout << "Enter a float: ";
    cin >> uInput1;

    cout << "Enter another float: ";
    cin >> uInput2;
    std::cout << "" << std::endl;

    // Compare floats
    CompareFloatNum(uInput1, uInput2);
}

