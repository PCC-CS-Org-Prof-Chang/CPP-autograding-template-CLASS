#include <iostream>
#include "AbstractDataType/calculator.h"

using namespace std;

int main()
{
    Calculator calc;
    int a, b;
    cout << "Please enter a value for a: ";
    cin >> a;
    cout << "Please enter a value for b: ";
    cin >> b;   
    int result = calc.add(a, b);
    cout << "The result of adding " << a << " and " << b << " is " << result << endl;
    return 0;
}
