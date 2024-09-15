#include "calculator.h"

Calculator::Calculator()
{
}

Calculator::Calculator(int a, int b)
{
    this->a = a;
    this->b = b;    
}

Calculator::~Calculator()
{
}

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::mul(int a, int b) {
    return a * b;
}

int Calculator::divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        throw std::runtime_error("Division by zero is not allowed.");
    }
}

