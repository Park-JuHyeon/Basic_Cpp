#include <iostream>

namespace BestComImp1
{
	void SimpleFunc(void);	// �̸����� �ȿ� �Լ��� ���� ����
}

namespace ProgComImp1
{
	void SimpleFunc(void);	// �̸������� �Լ��� ���� ����
}

int main(void)
{
	BestComImp1::SimpleFunc();
	ProgComImp1::SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc(void)		// �̸����� BestCom���� �Լ� SimpleFunc�� ���� �κ�
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
}

void ProgComImp1::SimpleFunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}