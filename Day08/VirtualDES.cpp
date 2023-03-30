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
		cout << "Myclass �Լ��Դϴ�~" << endl;
	}
	virtual void vfunc()
	{
		cout << "Myclass vfunc() �Դϵ�" << endl;
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
		cout << "Subclass vfunc()�Դϴ�" << endl;
	}
};

int main(void)
{
	//Myclass st(19);
	//cout << "----------------" << endl;
	//Subclass st1(1, 10);
	//cout << "-----------------" << endl;
	Myclass* ps = new Subclass(3, 33);		// �̷��Ը� �ϸ� �Ҹ��ڰ� ȣ���� �ȵ�!

	delete ps;

	return 0;
}