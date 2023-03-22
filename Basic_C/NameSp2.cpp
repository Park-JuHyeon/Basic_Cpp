#include <iostream>

namespace BestComImp1
{
	void SimpleFunc(void);	// 이름공간 안에 함수의 선언만 삽입
}

namespace ProgComImp1
{
	void SimpleFunc(void);	// 이름공간에 함수의 선언만 삽입
}

int main(void)
{
	BestComImp1::SimpleFunc();
	ProgComImp1::SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc(void)		// 이름공간 BestCom에서 함수 SimpleFunc의 정의 부분
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImp1::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}