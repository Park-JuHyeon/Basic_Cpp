#include <iostream>

namespace BestComImp1
{
	void SimpleFunc(void);
	void PrettyFunc(void);
}
/*
namespace BestComImp1
{
	void PrettyFunc(void);
}
*/
namespace progcomImp1
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImp1::SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc(void)
{
	std::cout << "Best �� ������ �Լ�" << std::endl;
	PrettyFunc();				// ���� �̸�����
	progcomImp1::SimpleFunc();	// �ٸ� �̸�����
}

void BestComImp1::PrettyFunc(void)
{
	std::cout << "So Pretty!!" << std::endl;
}

void progcomImp1::SimpleFunc(void)
{
	std::cout << "progCom�� ������ �Լ�" << std::endl;
}