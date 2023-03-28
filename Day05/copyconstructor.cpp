#include<iostream>
using namespace std;

class Myclass
{
	int num;
public:
	Myclass(int n) :num(n) {
		cout << "생성자 호출" << endl;
	}
	Myclass(const Myclass& other)	// const통해 변경이 되지 않게끔
	{
		cout << "복사생성자 호출" << endl;
		num = other.num;
	}

	void getData()
	{
		cout << num << endl;
	}
};

int main(void)
{
	Myclass m1(10);		// 생성자 호출
	Myclass m2 = m1;	// 복사생성자 호출. int num2 = num1
	Myclass m3(m2);		// 복사생성자 호출 - 복사생성자의 매개변수는 참조행이 와야함!

	m1.getData();
	m2.getData();
	m3.getData();
	return 0;
}