#include<iostream>
using namespace std;

class TwoNumber
{
private:
	int num1;
	int num2;
public:
	TwoNumber(int num1, int num2)
	{
		this->num1 = num1;		// 매개변수 num1, num2를 통해 전달된 값이 멤버변수 num1, num2에 저장된다.
		this->num2 = num2;
	}
	/*
	TwoNumber(int num1, int num2)
		: num1(num1), num2(num2)		
	{

	}
	*/
	void ShowTwoNumber()
	{
		cout << num1 << endl;	// this를 생략해도 같은값이 출력된다.
		cout << this->num2 << endl;
	}
};

int main(void)
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();

	return 0;
}


