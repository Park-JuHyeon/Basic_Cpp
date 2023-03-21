#include <iostream>

inline int SQUARE(int x)	// 인라인 함수 정의 inline 으로 선언
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}