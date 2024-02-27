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
    cout << endl;

    cout << "Please enter the operator to perform. Format: x+y | x-y | x*y | x/y | x^y | (x+y)%\n";
    cout << "<<(+) Adds x and y>>\n";
    cout << "<<(-) Subtractts x and y>>\n";
    cout << "<<(*) Multiplies x and y>>\n";
    cout << "<<(/) Divides x and y>>\n";
    cout << "<<(^) x to the power of y>>\n";
    cout << "<<(%) Returns the percentage of x + y>>\n";

    Calculator c;
    while (true)
    {
        cin >> x >> op >> y;
        if (op != '+' && op != '-' && op != '*' && op != '/' && op != '^' && op != '%')
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

