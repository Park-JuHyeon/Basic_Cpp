#include <iostream>

int main(void)
{
	char name[100];		// name�� ���ڿ� 100�ڸ�
	char lang[200];		// lang�� ���ڿ� 200�ڸ�

	std::cout << "�̸��� �����Դϱ�? ";
	std::cin >> name;		// scanf �� ��� (�Է¹ޱ�)

	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���? ";
	std::cin >> lang;

	std::cout << "�� �̸��� " << name << "�Դϴ�. \n";
	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�. \n" << std::endl;


	return 0;
}