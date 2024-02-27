#include "Calculator.h"
#include <cmath>

double Calculator::Calculate(double x, char op, double y)
{
	switch (op)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	case '^':
		return pow(x, y);
	case '%':
		return (x + y) / 100;
	default:
		return 0.0;
	}
}
