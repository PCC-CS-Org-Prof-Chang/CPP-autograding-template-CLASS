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
    return a+b;
}

int Calculator::subtract(int a, int b) {
    return a-b;
}

int Calculator::mul(int a, int b) {
    return a*b;
}

int Calculator::divide(int a, int b) {
    return a / b;
}

