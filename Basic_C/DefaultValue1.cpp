#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;  // ù��° num1�� 5�� ��, num2�� ����Ʈ �� ����
	std::cout << Adder(3, 5) << std::endl;	// num1, num2 ��� ���� �ٲ�
	return 0;
}