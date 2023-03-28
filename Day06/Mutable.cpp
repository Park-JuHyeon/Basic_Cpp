#include<iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	mutable int num2;	// num2가 mutable로 선언되었다. 이변수는 const함수 내에서의 변경이 허용된다
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2)
	{}
	void ShowSimpleData() const
	{
		cout << num1 << ", " << num2 << endl;
	}
	void CopyToNum2() const
	{
		num2 = num1;	// const함수 내에서 num2값 변경할수 있는 이유가 mutable 때문이다.
	}
};
int main(void)
{
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();

	return 0;
}