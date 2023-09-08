#include "calculator.h"
#include <iostream> 
#include <cmath>

Calculator::Calculator() {
    // Constructor, if needed
}

double Calculator::performOperation(double num1, double num2, char op) {
    double result = 0; // Initialize result with a default value

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero!" << std::endl; // Use std::cout and std::endl
            }
            break;
        case '%':
            result = (num1 * num2) / 100;
            break;
        default:
            std::cout << "Error: Invalid operator!" << std::endl; // Use std::cout and std::endl
            break;
    }

    return result; // Return the result
}

double Calculator::squareRoot(double num) {
    double result = 0; // Initialize result with a default value

    if (num >= 0) {
        result = sqrt(num);
    } else {
        std::cout << "Error: Square root of a negative number is undefined!" << std::endl; // Use std::cout and std::endl
    }

    return result; // Return the result
}

double Calculator::square(double num) {
    return num * num;
}

double Calculator::power(double base, double exponent) {
    return pow(base, exponent);
}

double Calculator::naturalLog(double num) {
    double result = 0; // Initialize result with a default value

    if (num > 0) {
        result = log(num);
    } else {
        std::cout << "Error: Natural logarithm of a non-positive number is undefined!" << std::endl; // Use std::cout and std::endl
    }

    return result; // Return the result
}

double Calculator::base10Log(double num) {
    double result = 0; // Initialize result with a default value

    if (num > 0) {
        result = log10(num);
    } else {
        std::cout << "Error: Logarithm of a non-positive number is undefined!" << std::endl; // Use std::cout and std::endl
    }

    return result; // Return the result
}


