#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char op = '+';

    cout << "***********************************\n";
    cout << "******Calculator Console App*******\n";
    cout << "***********************************\n";

    cout << "Please enter the operator to perform. Format: x+y | x-y | x*y | x/y | x^y\n";

    Calculator c;
    while (true)
    {
        cin >> x >> op >> y;
        if (op != '+' && op != '-' && op != '*' && op != '/' && op != '^')
        {
            cout << "Invalid Operator.\n";
        }
        else
        {
            result = c.Calculate(x, op, y);
            cout << "Result " << "of " << x << op << y << " is: " << result << endl;
        }
    }

    return 0;
}

