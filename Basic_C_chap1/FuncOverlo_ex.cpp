#include <iostream>

void func(void)  //()에 void = 빈값
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void func(char c)  // ()에 문자 하나 넣어라
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void func(int a, int b) // ()에 숫자 두개 넣어라
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void)
{
	func();
	func('A');
	func(12, 13);
	return 0;

}