// author ¹ÚÁÖÇö

#include<iostream>
#include"Calculator.h"
using namespace std;

int main(void)
{
	double a = 0.0;
	double b = 0.0;
	double res = 0.0;
	char cc = '+';

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	cout << "Press ctrl + c to exit the program" << endl << endl;

	Calculator cal(a, cc, b);
	while (true)
	{
		cout << "input >> ";
		cin >> a >> cc >> b;

		/*
		if (cc = '/' && b == 0)
		{
			cout << "Attempted to divide by zero!" << endl;
			continue;
		}
		else
		{
			res = cal.Calculate(a, cc, b);
		}*/
		res = cal.Calculate(a, cc, b);
		cout << "= " << res << endl;
	}

	return 0;
}