#include <iostream>

void func(void)  //()�� void = ��
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void func(char c)  // ()�� ���� �ϳ� �־��
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void func(int a, int b) // ()�� ���� �ΰ� �־��
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