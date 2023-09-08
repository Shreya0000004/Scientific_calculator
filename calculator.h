#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    Calculator();
    double performOperation(double num1, double num2, char op);
    double squareRoot(double num);
    double square(double num);
    double power(double base, double exponent);
    double naturalLog(double num);
    double base10Log(double num);
private:
    // Private member functions, if needed
};

#endif

