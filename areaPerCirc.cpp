// Copyright (c) 2023 Zak Goneau All rights reserved
//
// Created by: Zak Goneau
// Created on: Sep. 22, 2023
// This program calculates the area and circumference of a circle with the radius of 9.3cm.

#include <cmath>
#include <iostream>

int main() {
    std::cout << "If a circle has a radius of:" << std::endl;
    std::cout << "9.3cm" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "The area is: " << (M_PI*pow(9.3, 2)) << "cm^2" << std::endl;
    std::cout << "The circumference is: " << (2 * M_PI * 9.3) << "cm" << std::endl;
}
