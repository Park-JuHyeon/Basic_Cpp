#include <iostream>

int BoxVolume(int length, int width = 1, int height = 1);   // �Լ� ����

int main(void)
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;  // 3 x 3x 3 = 27
	std::cout << "[5,5,D] : " << BoxVolume(5,5) << std::endl;		// 5x5 = 25
	std::cout << "[7,D,D] : " << BoxVolume(7) << std::endl;			// 7x����Ʈ = 7
	// std::cout << "[D,D,D] : " << BoxVolume() << std::endl;   // ��� �Ű������� ����Ʈ ���� �����Ȱ��� �ƴ϶� ������ ����.
	return 0;
}

int BoxVolume(int length, int width, int height)    // �Լ� ����
{
	return length * width * height;
}