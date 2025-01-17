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

    std::cout << "Addition Program Console Calculator."; 
    std::cout << " Please enter a number. ";
    std::cin >> number1;
    std::cout << "Please enter another number. ";
    std::cin >> number2;
    std::cout << number1 + number2;
    return 0;
    
}