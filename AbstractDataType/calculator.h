#include <iostream>
#include <stdexcept>

// calculator class can be used to perform basic arithmetic operations
class Calculator {
private:
    int a;
    int b;

public:
    Calculator();    // constructor
    Calculator(int a, int b);    // constructor
    ~Calculator();   // destructor

    int add(int a, int b);

    int subtract(int a, int b);

    int mul(int a, int b);

    int divide(int a, int b);
};