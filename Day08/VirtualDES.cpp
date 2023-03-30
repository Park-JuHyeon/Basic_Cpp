#include<iostream>
using namespace std;

class Myclass
{
private:
	int num;
public:
	Myclass(int num1)
	{
		num = num1;
		cout << num << " Myclass Constructor" << endl;
	}
	virtual ~Myclass()
	{
		cout << "Myclass Destructor" << endl;
	}
	void func()
	{
		cout << "Myclass 함수입니당~" << endl;
	}
	virtual void vfunc()
	{
		cout << "Myclass vfunc() 입니덩" << endl;
	}
};

class Subclass :public Myclass
{
private:
	int subn;
public:
	Subclass(int n, int subm) :Myclass(n)
	{
		subn = subm;
		cout << subn << " Subclass Constructor" << endl;
	}
	~Subclass()
	{
		cout << "Subclass Destructor" << endl;
	}
	void vfunc()
	{
		cout << "Subclass vfunc()입니당" << endl;
	}
};

int main(void)
{
	//Myclass st(19);
	//cout << "----------------" << endl;
	//Subclass st1(1, 10);
	//cout << "-----------------" << endl;
	Myclass* ps = new Subclass(3, 33);		// 이렇게만 하면 소멸자가 호출이 안됨!

	delete ps;

	return 0;
}