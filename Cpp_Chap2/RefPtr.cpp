#include <iostream>
using namespace std;

int main(void)
{
	int num = 12;
	int* p = &num;
	int** dp = &p;

	int& ref = num;
	int* (&pref) = p;
	int** (&dpref) = dp;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	return 0;
}