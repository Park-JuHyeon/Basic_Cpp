#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "너무 쉬운 함수인걸?" << std::endl;
		std::cout << "이름은 하이브리드야!" << std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc;	//Hybrid 네임스페이스의 HybFunc를 사용하겠다.
	HybFunc();
	return 0;
}