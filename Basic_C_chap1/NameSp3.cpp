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
	std::cout << "Best 가 정의한 함수" << std::endl;
	PrettyFunc();				// 동일 이름공간
	progcomImp1::SimpleFunc();	// 다른 이름공간
}

void BestComImp1::PrettyFunc(void)
{
	std::cout << "So Pretty!!" << std::endl;
}

void progcomImp1::SimpleFunc(void)
{
	std::cout << "progCom이 정의한 함수" << std::endl;
}