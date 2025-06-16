// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Enter first value: ";
    double x;
    std::cin >> x;

    std::cout << "\nEnter second value: ";
    double y;
    std::cin >> y;

    std::cout << "\nEnter operator ";

    std::string i;

    std::cin >> i;

    if (i == "+" ) {

        std::cout << x + y;

    } else if ( i == "-") {

        std::cout << x - y;

    } else if (i == "*" || i == "x") {

        std::cout << x * y;

    } else if (i == "/") {

            std::cout << x / y;

    } else {

        std::cout << "Can not do Function";

    }

    
}
