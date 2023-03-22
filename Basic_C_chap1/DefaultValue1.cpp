#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;  // 첫번째 num1에 5가 들어감, num2는 디폴트 값 유지
	std::cout << Adder(3, 5) << std::endl;	// num1, num2 모두 값이 바뀜
	return 0;
}