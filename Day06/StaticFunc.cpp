#include<iostream>
using namespace std;

class StaticTest {
private:
	static int a;		// 멤버변수의 static
	int b;
public:
	StaticTest();
	static void setData(int aa);	// 멤버함수의 static
	void print();
	
};
int StaticTest::a = 10;		// static 멤버변수 초기화
StaticTest::StaticTest()
{
	this->b = 20;
}
void StaticTest::setData(int aa)
{
	//this->a = 30;
	a = aa;
}
void StaticTest::print()
{
	cout << "a: " << a << " " << "b: " << b << endl;
}

int main(void)
{
	StaticTest s1, s2;
	s1.print();
	s2.print();

	s1.setData(30);
	s1.print();
	s2.print();

	StaticTest::setData(100);
	s1.print();
	s2.print();

	return 0;
}