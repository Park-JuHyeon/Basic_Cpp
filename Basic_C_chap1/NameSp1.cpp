#include <iostream>

namespace BestComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}

namespace ProgComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
	}
}

int main(void)
{
	BestComImp1::SimpleFunc();	// BesetComImp1�� �ִ� simpleFunc�Լ��� ���ڴ�.
	ProgComImp1::SimpleFunc();	// ProgComImp1�� �ִ� simpleFunc�Լ��� ���ڴ�.
	return 0;
}