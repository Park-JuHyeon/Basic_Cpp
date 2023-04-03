// author ¹ÚÁÖÇö
#include <iostream>
#include"Calculator.h"
using namespace std;

double Calculator::Calculate(double x, char cper, double y)
{
	if (cper == '+') {
		return x + y;
	}
	else if (cper == '-') {
		return x - y;
	}
	else if (cper == '*') {
		return x * y;
	}
	else if (cper == '/') {
		try {
			if (y == 0) throw y;
			return x / y;
		}
		catch (double y)
		{
			cout << "Attempted to divide by zero!" << endl;
			return 0;
		}
	}
	
}

		
	






