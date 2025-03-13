// Copyright (c) 2025 Dylan Mutabazi All rights reserved
//
// Created by Dylan Mutabazi
// Created March 2025
// This program calculates the circumference;

#include <cmath>
#include <iostream>

int main() {
    // Creates variable radius
    float radius;

    // asks for user input to asign a value for variable radius
    std::cout << "what is the radius of your circle?: ";
    std::cin >> radius;
    std::cout << "" << std::endl;

    // calculates the circumference and area of the circle
    std::cout << "Circumference = " << ((M_PI * 2) * radius);
    std::cout << "" << std::endl;
    std::cout << " Area = " << (M_PI * (pow(radius, 2)));
    std::cout << "" << std::endl;
}
