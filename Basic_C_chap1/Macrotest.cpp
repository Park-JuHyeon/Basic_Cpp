#include <iostream>

#define SUM(x,y)  x + y	// 매크로함수 : 자료형이 필요없다.
#define SQLARE(x) x * x
#define SQLARE1(x) (x) * (x)	// 이렇게 해야 계산을 분리함


void func()
{

}

int main()
{
	std::cout << SUM(10, 20) << std::endl;
	//func();
	std::cout << SQLARE(10) << std::endl;
	std::cout << SQLARE(10 + 1) << std::endl;   // 10 + 1 * 10 + 1 = 10+10+1 = 21
	std::cout << SQLARE1(10 + 1) << std::endl;	// (10+1) *(10+1) = 121

	return 0;
}