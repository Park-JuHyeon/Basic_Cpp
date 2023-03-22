#include <iostream>

namespace BestComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int main(void)
{
	BestComImp1::SimpleFunc();	// BesetComImp1에 있는 simpleFunc함수를 쓰겠다.
	ProgComImp1::SimpleFunc();	// ProgComImp1에 있는 simpleFunc함수를 쓰겠다.
	return 0;
}