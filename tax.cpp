// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall (borrowed by Joseph)
// Created on: Oct 2022
// This program calculates total from subtotal and tax (nova scotia)

#include <iomanip>
#include <iostream>

int main() {
    // this function calculates total from subtotal and tax
    const float HST = 0.15;
    float tax;
    float subTotal;
    float total;

    // input, get the subtotal from the user
    std::cout << "Enter the subtotal: $ ";
    std::cin >> subTotal;

    // process, calculate the tax and total
    tax = +subTotal * HST;
    total = subTotal + tax;

    // output, display the tax and total
    std::cout << "" << std::endl;
    std::cout << "The HST is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << tax << ", and the total cost is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total << "." << std::endl;
}
