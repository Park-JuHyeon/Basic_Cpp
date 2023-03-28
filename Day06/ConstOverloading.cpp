#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void SimpleFunc()
	{
		cout << "SimpleFunc: " << num << endl;
	}
	void SimpleFunc() const
	{
		cout << "Const SimpleFunc: " << num << endl;
	}
};

void YourFunc(const SoSimple& obj)
{
	obj.SimpleFunc();
}

int main(void)
{
	SoSimple obj1(2);			// 일반객체 생성
	const SoSimple obj2(7);		// const객체 생성

	obj1.SimpleFunc();			// 일반객체 대상 SimpleFunc호출하면 16행 일반 멤버함수호출
	obj2.SimpleFunc();			// const 객체 대상으로 SimpleFunc호출하면 20행의 const 함수가 호출

	YourFunc(obj1);
	YourFunc(obj2);

	return 0;
}