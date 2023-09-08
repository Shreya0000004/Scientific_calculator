#include <iostream>
#include <cmath>

using namespace std;

// Function to perform basic arithmetic operations
double performOperation(double num1, double num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return NAN; // Not-a-Number to represent an error
            }
        case '%':
            return (num1 * num2) / 100;
        default:
            cout << "Error: Invalid operator!" << endl;
            return NAN;
    }
}

// Function to calculate square root
double squareRoot(double num) {
    if (num >= 0) {
        return sqrt(num);
    } else {
        cout << "Error: Square root of a negative number is undefined!" << endl;
        return NAN;
    }
}

// Function to calculate square
double square(double num) {
    return num * num;
}

// Function to calculate power (x^y)
double power(double base, double exponent) {
    return pow(base, exponent);
}

// Function to calculate natural logarithm (ln)
double naturalLog(double num) {
    if (num > 0) {
        return log(num);
    } else {
        cout << "Error: Natural logarithm of a non-positive number is undefined!" << endl;
        return NAN;
    }
}

// Function to calculate base 10 logarithm (log)
double base10Log(double num) {
    if (num > 0) {
        return log10(num);
    } else {
        cout << "Error: Logarithm of a non-positive number is undefined!" << endl;
        return NAN;
    }
}

int main() {
    double num1, num2, result;
    char op;
    bool continueCalculation = true;

    while (continueCalculation) {
        cout << "Enter first number: ";
        cin >> num1;

        // Initialize num2 with 0 for the first iteration
        num2 = 0;

        while (true) {
            cout << "Enter operator (+, -, *, /, %, s, q, ^, l, g): ";
            cin >> op;

            if (op == 's') {
                result = squareRoot(num1);
            } else if (op == 'q') {
                result = square(num1);
            } else if (op == '^') {
                // Only ask for num2 when calculating with '^' operator
                cout << "Enter second number: ";
                cin >> num2;
                result = power(num1, num2);
            } else if (op == 'l') {
                result = naturalLog(num1);
            } else if (op == 'g') {
                result = base10Log(num1);
            } else if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%') {
                cout << "Enter second number: ";
                cin >> num2;
                result = performOperation(num1, num2, op);
            } else {
                cout << "Error: Invalid operator!" << endl;
                continue;
            }

            if (!isnan(result)) {
                cout << "Result: " << result << endl;
            }

            // Ask if the user wants to continue with the previous result as the first number
            char choice;
            cout << "Do you want to continue with the previous result as the first number? (y/n): ";
            cin >> choice;
            if (choice != 'y' && choice != 'Y') {
                break;
            }

            // Set num1 to the result for the next iteration
            num1 = result;
        }

        // Ask if the user wants to continue the overall calculation
        char choice;
        cout << "Do you want to continue calculations? (y/n): ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            continueCalculation = false;
        }
    }

    return 0;
}

