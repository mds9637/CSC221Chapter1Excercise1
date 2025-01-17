/*
File Name: CSC221Chapter1Excercise1
Programmer: Matthew Sharps 
Date: January 17 2025

Requirement:
Find the sum of two numbers using console.





*/

#include <iostream>

int main()
{

    int number1;
    int number2;
    int number3;

    std::cout << "This program will add two numbers together."; 
    std::cout << " Please enter a number. ";
    std::cin >> number1;
    std::cout << "Please enter another number ";
    std::cin >> number2;
    std::cout << number1 + number2;
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
