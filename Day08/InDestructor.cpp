#include<iostream>
using namespace std;

class Ctest
{
private:
	int num;
public:
	Ctest(int num1)
	{
		num = num1;
		cout << num << " Ctest Constructor"<< endl;
	}
	~Ctest() {
		cout << "Ctest Destructor" << endl;
	}
};

class CtestSub : public Ctest
{
private:
	int subn;
public:
	CtestSub(int num, int subm):Ctest(num)
	{
		subn = subm;
		cout << subn << " CtestSub Constructor" << endl;
	}
	~CtestSub()
	{
		cout << "CtestSub Destructor" << endl;
	}

};

int main(void)
{
	Ctest ct(19);
	cout << "-----------------------" << endl;
	CtestSub cs(1, 10);

	return 0;
}