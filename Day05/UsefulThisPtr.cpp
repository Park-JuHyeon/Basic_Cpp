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
		this->num1 = num1;		// �Ű����� num1, num2�� ���� ���޵� ���� ������� num1, num2�� ����ȴ�.
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
		cout << num1 << endl;	// this�� �����ص� �������� ��µȴ�.
		cout << this->num2 << endl;
	}
};

int main(void)
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();

	return 0;
}

