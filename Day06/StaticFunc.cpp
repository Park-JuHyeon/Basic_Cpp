#include<iostream>
using namespace std;

class StaticTest {
private:
	static int a;		// ��������� static
	int b;
public:
	StaticTest();
	static void setData(int aa);	// ����Լ��� static
	void print();
	
};
int StaticTest::a = 10;		// static ������� �ʱ�ȭ
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