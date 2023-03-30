#include <iostream>
using namespace std;

class First
{
public:
	void FirstFunc() { cout << "FirstFunc()" << endl; }
	virtual void SimpleFunc() { cout << "First's SimpleFunc()" << endl; }
};

class Second : public First
{
public:
	void Secondfunc() { cout << "SecondFunc()" << endl; }
	virtual void SimpleFunc() { cout << "Second's SimpleFunc()" << endl; }
};

class Third :public Second
{
public:
	void Thirdfunc() { cout << "ThirdFunc()" << endl; }
	virtual void SimpleFunc() { cout << "Third's SimpleFunc()" << endl; }
};

int main(void)
{
	Third obj;
	obj.FirstFunc();
	obj.Secondfunc();
	obj.Thirdfunc();
	obj.SimpleFunc();

	Second& sref = obj;
	sref.FirstFunc();
	sref.Secondfunc();
	sref.SimpleFunc();	// Simplefunc 함수는 가상함수이므로, Third 클래스에 정의된 SimpleFunc이 출력됨

	First& fref = obj;
	fref.FirstFunc();
	fref.SimpleFunc();

	return 0;
}