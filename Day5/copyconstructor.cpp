#include<iostream>
using namespace std;

class Myclass
{
	int num;
public:
	Myclass(int n) :num(n) {
		cout << "������ ȣ��" << endl;
	}
	Myclass(const Myclass& other)	// const���� ������ ���� �ʰԲ�
	{
		cout << "��������� ȣ��" << endl;
		num = other.num;
	}

	void getData()
	{
		cout << num << endl;
	}
};

int main(void)
{
	Myclass m1(10);		// ������ ȣ��
	Myclass m2 = m1;	// ��������� ȣ��. int num2 = num1
	Myclass m3(m2);		// ��������� ȣ�� - ����������� �Ű������� �������� �;���!

	m1.getData();
	m2.getData();
	m3.getData();
	return 0;
}