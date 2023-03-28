#include <iostream>
using namespace std;

class Super
{
public:
	Super()
	{
		cout << "Super()" << endl;
	}
	~Super()
	{
		cout << "~Super()" << endl;
	}
};

class Sub : public Super	// Super로 부터 상속을 받는 Sub클래스
{
public:
	Sub()
	{
		cout << "Sub()" << endl;
	}
	~Sub()
	{
		cout << "~Sub()" << endl;
	}
};

int main()
{
	cout << "Start" << endl;
	Sub obj;
	cout << "Stop" << endl;

	return 0;
}